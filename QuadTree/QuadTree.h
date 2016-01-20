/*
 * Created by Galen Cochrane on 1/13/16.
 *
 * QuadTree class for LMD (Laser Mapping Drone)
 * Serves as an optimization tool for data point processing.  LMD provides tons of data (in essentially a 2D space,
 * even though that space maps to 3D.  That data needs to go through some kind of spatial partitioning if there is to be
 * any hope of processing it in real time.
 *
 * The template class P that this quad tree takes must be some kind of class with an x (accessed via P.x) and a y
 * (accessed via P.y).  It should probably also either have a defined copy constructor, or be such a class or struct
 * that the a default copy constructor is auto-generated.
 * If you want to work with a class whose two spatial dimensions are not labelled x and y, change the defines D0 and D1
 * to whatever your two dimensions are.
 *
 * FUTURE IMPORVEMENTS:
 * This class is performance-critical.  The LMD will hopefully be capable of real-time data processing, either on- or
 * off-board.  For this to be possible, points are going to have to be processed into this quad tree REALLY FAST.
 * There are probably lots of optimizations that can be done (especially using C++11 features), and I have so far
 * made very little consideration to such optimizations except where they're obvious.
 * Some kind of tree balancing algorithm would be nice besides just having to recompute the whole tree.  As it stands
 * expansion can create som very unbalanced ugly trees.
 *
 * PROBLEMS:
 * If two points with exactly the same x and y are inserted, something bad might happen.
 * I'm trying to account for all cases where the user can provide an empty list of points or an unexpected zero, making
 * sure that no problems are produced, but I might have missed one or two cases.
 */

#ifndef LASERMAPPINGDRONE_QUADTREE_H
#define LASERMAPPINGDRONE_QUADTREE_H

#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cmath>

#define UP_L 0
#define UP_R 1
#define DN_L 2
#define DN_R 3

#define D0 x    //dimension 0 (maybe angle)
#define D1 y    //dimension 1 (maybe azmuth)

namespace LaserMappingDrone {

    /*
     * when a point is tested to see where it falls in relation to a square,
     * these are the 9 possible cases.  See function Node::contains
     */
    enum containsCases {
        INSIDE  =   2,
        UPLEFT  =   4,      //  ________________
        UP      =   8,      //  | 4  | 8  | 12 |
        UPRIGHT =   12,     //  |____|____|____|
        LEFT    =   1,      //  | 1  | 2  | 3  |
        RIGHT   =   3,      //  |____|____|____|
        DNLEFT  =   5,      //  | 5  | 10 | 15 |
        DOWN    =   10,     //  |____|____|____|
        DNRIGHT =   15
    };

    /*******************    NODE CLASS HEADER    *************************/

    template<class P>
    struct Node {
        Node<P>* children[4];
        float xMin, xMax, yMin, yMax;   // these define the bounds of the node, which are square
        std::vector<P> points;
        Node(float xMin, float xMax, float yMin, float yMax);
        void destroy();                 // free memory for all descendants
        int contains(P point);
        bool isEndNode();
        void split();
        void split3(int whichNot);      // split but do not allocate for quadrant 'whichNot' (used for expansion)
        std::string toString(unsigned level);
    };

    /*******************    QUADTREE CLASS HEADER    *************************/

    template<class P>
    class QuadTree {
        friend class QuadTreeDrawer;
    private:
        Node<P>* head;              // a pointer to the root (head) of the tree
        unsigned maxPointsPerNode;  // this is how many points can be held by a single node before it has to split
        float defaultHalfWidth;     // used only when the first point is given (if only a single point is given)
        bool expansionToggler;      // used to help expansion be more balanced
        bool secondPointUpNext;     // used to fix the redundant initial branches problem

        void addPoint(P point, Node<P>* node);
        int pickQuadrant(Node<P>* node, P& point);
        int findBounds(P* points, unsigned long length, float& minX, float& maxX, float& minY, float& maxY);
        void expand(P point, int wherePoint);

    public:
        QuadTree(unsigned maxPointsPerNode = 1, float defaultHalfWidth = 1.f);
        ~QuadTree();
        void clean();
        void addPoint(P point);
        void addPoints(std::vector<P> points);
        void addPoints(P* array, unsigned long length);
        void setMaxPointsPerNode(unsigned numPoints, bool rebuild = false);
        std::string toString();
    };

    /*******************    QUADTREE CLASS IMPLEMENTATION    *************************/

    /*
     * NOTE:
     * If you pass in stupid values, the defaults will be used instead.  :)   (that was a passive-aggressive smiley)
     */
    template<class P>
    QuadTree<P>::QuadTree(unsigned maxPointsPerNode /*= 1*/, float defaultHalfWidth /*= 1.f*/)
            : head(0), maxPointsPerNode(maxPointsPerNode), defaultHalfWidth(defaultHalfWidth),
              expansionToggler(false), secondPointUpNext(false) {
        if (defaultHalfWidth <= 0) {
            defaultHalfWidth = 1.f;
        }
        if (maxPointsPerNode <= 0) {
            maxPointsPerNode = 1;
        }
    }

    template<class P>
    QuadTree<P>::~QuadTree() {
        clean();
    }

    template<class P>
    void QuadTree<P>::clean() {
        if (head) {
            head->destroy();
            delete head;
            head = 0;
        }
    }

    template<class P>
    void QuadTree<P>::addPoint(P point) {
        addPoint(point, head);
    }

    template<class P>
    void QuadTree<P>::addPoint(P point, Node<P>* node) {
        if (!head) {//no head node yet - make a head node of default size and stick the point in it
            head = new Node<P>(point.D0 - defaultHalfWidth, point.D0 + defaultHalfWidth,
                               point.D1 - defaultHalfWidth, point.D1 + defaultHalfWidth);
            head->points.push_back(point);
            secondPointUpNext = true;
        } else if (secondPointUpNext) { //second point is being put in individually - handle redundant initial branches
            secondPointUpNext = false;
            std::vector<P> points;
            points.push_back(head->points[0]);  //the first point must logically be here.
            points.push_back(point);
            head->destroy();
            delete head;        //get rid of the first (reduntant initial branches prone) head
            head = 0;
            addPoints(points);  //send the first and second points to the addPoints method to be dealt with cleanly.
        } else { //there are already two or more points in the quad tree
            int wherePoint = node->contains(point);
            if (wherePoint == containsCases::INSIDE) { //point is inside node
                if (node->isEndNode()) { // node is an end-node
                    if (node->points.size() < maxPointsPerNode) { //there is room in the node
                        node->points.push_back(point);
                    } else { //there is no room - split the node
                        if (node->isEndNode()) {
                            node->split();
                            for (auto p : node->points) {   // move previous occupants down to leaves as well
                                addPoint(p, node->children[pickQuadrant(node, p)]);
                            }
                            addPoint(point, node->children[pickQuadrant(node, point)]);
                        }
                    }
                } else { // node is not a leaf - move down a level
                    addPoint(point, node->children[pickQuadrant(node, point)]);
                }
            } else { //point is not inside node - add parent node to head and switch head to the parent
                expand(point, wherePoint);
            }
        }
    }

    template<class P>
    int QuadTree<P>::pickQuadrant(Node<P> *node, P& point) {
        if (point.D0 - node->xMin < node->xMax - point.D0) {  //point is to the left of center
            if (node->yMax - point.D1 < point.D1 - node->yMin) { return UP_L; }
            else { return DN_L; }
        } else {                                            //point is to the right of center
            if (node->yMax - point.D1 < point.D1 - node->yMin) { return UP_R; }
            else { return DN_R; }
        }
    }

    template<class P>
    int QuadTree<P>::findBounds(P *points, unsigned long length, float &minX, float &maxX, float &minY, float &maxY) {
        if (length > 0) {
            minX = points[0].x;
            maxX = points[0].x;
            minY = points[0].y;
            maxY = points[0].y;
            if (length > 1) {
                for (unsigned i = 1; i < length; ++i) {
                    if (points[i].x < minX) {
                        minX = points[i].x;
                    } else if (points[i].x > maxX) {
                        maxX = points[i].x;
                    }
                    if (points[i].y < minY) {
                        minY = points[i].y;
                    } else if (points[i].y > maxY) {
                        maxY = points[i].y;
                    }
                }
                float width = maxX - minX;
                if (maxY - minY > width) {
                    width = maxY - minY;
                }
                if (width <= 0.f) {
                    width = defaultHalfWidth;
                }
                float centerX = minX + (maxX - minX) * 0.5f;
                float centerY = minY + (maxY - minY) * 0.5f;
                width *= 0.5;
                minX = centerX - width;
                maxX = centerX + width;
                minY = centerY - width;
                maxY = centerY + width;
            } else {
                return 2;
            }
        } else {
            return 1;
        }
        return 0;
    }

    template<class P>
    void QuadTree<P>::expand(P point, int wherePoint) {
        Node<P>* newHead = 0;
        float half = head->xMax - head->xMin;
        switch (wherePoint) {
            UPLEFT:
            case UPLEFT:
                newHead = new Node<P>(head->xMin - half, head->xMax, head->yMin, head->yMax + half);
                newHead->split3(DN_R);
                newHead->children[DN_R] = head;
                break;
            case UP:
                expansionToggler = !expansionToggler;
                if (expansionToggler) { goto UPLEFT; }
            UPRIGHT:
            case UPRIGHT:
                newHead = new Node<P>(head->xMin, head->xMax + half, head->yMin, head->yMax + half);
                newHead->split3(DN_L);
                newHead->children[DN_L] = head;
                break;
            case LEFT:
                expansionToggler = !expansionToggler;
                if (expansionToggler) { goto UPLEFT; } else { goto DNLEFT; }
            case RIGHT:
                expansionToggler = !expansionToggler;
                if (expansionToggler) { goto DNRIGHT; } else { goto UPRIGHT; }
            DNLEFT:
            case DNLEFT:
                newHead = new Node<P>(head->xMin - half, head->xMax, head->yMin - half, head->yMax);
                newHead->split3(UP_R);
                newHead->children[UP_R] = head;
                break;
            case DOWN:
                expansionToggler = !expansionToggler;
                if (expansionToggler) { goto DNLEFT; }
            DNRIGHT:
            case DNRIGHT:
                newHead = new Node<P>(head->xMin, head->xMax + half, head->yMin - half, head->yMax);
                newHead->split3(UP_L);
                newHead->children[UP_L] = head;
                break;
            default:
                throw new std::runtime_error("QuadTree expand: bad enumerator.");;  // default should never happen
        }
        head = newHead;
        addPoint(point, head);
    }

    template<class P>
    void QuadTree<P>::addPoints(std::vector<P> points) {
        if (!points.empty()) {
            addPoints(&points[0], points.size());
        }
    }

    template<class P>
    void QuadTree<P>::addPoints(P *array, unsigned long length) {
        if (length > 1) {
            if (!head) {
                float minX, maxX, minY, maxY;
                findBounds(array, length, minX, maxX, minY, maxY);
                head = new Node<P>(minX, maxX, minY, maxY);
            }
            for (unsigned i = 0; i < length; ++i) {
                addPoint(array[i]);
            }
        } else if (length > 0) {
            addPoint(array[0]);
        }
    }

    /*
     * NOTE: Will do nothing if is passed numPoints of 0
     */
    template<class P>
    void QuadTree<P>::setMaxPointsPerNode(unsigned numPoints, bool rebuild /* = false */) {
        if (numPoints > 0) {
            maxPointsPerNode = numPoints;
            if (rebuild) {
                // NOT IMPLEMENTED    NOT IMPLEMENTED    NOT IMPLEMENTED    NOT IMPLEMENTED     NOT IMPLEMENTED
            }
        }
    }

    template<class P>
    std::string QuadTree<P>::toString() {
        return head->toString(0);
    }

    /*******************    NODE CLASS IMPLEMENTATION    *************************/

    template<class P>
    Node<P>::Node(float xMin, float xMax, float yMin, float yMax)
            : xMin(xMin), xMax(xMax), yMin(yMin), yMax(yMax) {
        for (unsigned i = 0; i < 4; ++i) {
            children[i] = 0;    //set all children to null
        }
    }

    template<class P>
    void Node<P>::destroy() {
        if (!isEndNode()) { //if children have been instantiated
            for (unsigned i = 0; i < 4; ++i) {
                children[i]->destroy();
                delete children[i];
                children[i] = 0;
            }
        }
    }

    template<class P>
    int Node<P>::contains(P point) {
        return (2 + ((point.D0 > xMax) ? 1 : ((point.D0 < xMin) ? -1 : 0))) *
               ((point.D1 > yMax) ? 4 : ((point.D1 < yMin) ? 5  : 1));
    }

    template<class P>
    bool Node<P>::isEndNode() {
        return (children[0] == 0);
    }

    template<class P>
    void Node<P>::split() {
        float xCenter = xMin + (xMax - xMin) * 0.5f;
        float yCenter = yMin + (yMax - yMin) * 0.5f;
        children[UP_L] = new Node(xMin, xCenter, yCenter, yMax);
        children[UP_R] = new Node(xCenter, xMax, yCenter, yMax);
        children[DN_L] = new Node(xMin, xCenter, yMin, yCenter);
        children[DN_R] = new Node(xCenter, xMax, yMin, yCenter);
    }

    template<class P>
    void Node<P>::split3(int whichNot) {
        float xCenter = xMin + (xMax - xMin) * 0.5f;
        float yCenter = yMin + (yMax - yMin) * 0.5f;
        switch(whichNot) {
            case UP_L:
                children[UP_R] = new Node(xCenter, xMax, yCenter, yMax);
                children[DN_L] = new Node(xMin, xCenter, yMin, yCenter);
                children[DN_R] = new Node(xCenter, xMax, yMin, yCenter);
                break;
            case UP_R:
                children[UP_L] = new Node(xMin, xCenter, yCenter, yMax);
                children[DN_L] = new Node(xMin, xCenter, yMin, yCenter);
                children[DN_R] = new Node(xCenter, xMax, yMin, yCenter);
                break;
            case DN_L:
                children[UP_L] = new Node(xMin, xCenter, yCenter, yMax);
                children[UP_R] = new Node(xCenter, xMax, yCenter, yMax);
                children[DN_R] = new Node(xCenter, xMax, yMin, yCenter);
                break;
            case DN_R:
                children[UP_L] = new Node(xMin, xCenter, yCenter, yMax);
                children[UP_R] = new Node(xCenter, xMax, yCenter, yMax);
                children[DN_L] = new Node(xMin, xCenter, yMin, yCenter);
                break;
            default:
                throw new std::runtime_error("QuadTree split3: bad enumerator.");;  // default should never happen;
        }
    }

    template<class P>
    std::string Node<P>::toString(unsigned level) {
        std::stringstream sstr;
        std::string tabs;
        for (unsigned i = 0; i < level; ++i) {
            tabs += '\t';
        }
        sstr << tabs << "NODE: " << xMin << " " << xMax << " " << yMin << " " << yMax;
        if (isEndNode()) {
            if (points.size()) {
                sstr << " :  ((( " << points.size() << " )))";
            }
        } else {
            sstr << " : BRANCH";
        }
        sstr << std::endl;
        if (!isEndNode()) {
            for (unsigned i = 0; i < 4; ++i) {
                sstr << children[i]->toString(level + 1);
            }
        }
        return sstr.str();
    }

}   // namespace LaserMappingDrone

#endif //LASERMAPPINGDRONE_QUADTREE_H