//
// Created by adayoldbagel on 1/13/16.
//

#ifndef LASERMAPPINGDRONE_QUADTREE_H
#define LASERMAPPINGDRONE_QUADTREE_H

#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>

#define UP_L 0
#define UP_R 1
#define DN_L 2
#define DN_R 3

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
        float xMin, xMax, yMin, yMax;
        std::vector<P> points;
        Node(float xMin, float xMax, float yMin, float yMax);
        void destroy();
        int contains(P point);
        bool isEndNode();
        void split();
        void split3(int whichNot);
        std::string toString(unsigned level);
    };

    /*******************    QUADTREE CLASS HEADER    *************************/

    template<class P>
    class QuadTree {
    private:
        Node<P>* head;
        unsigned maxPointsPerNode;
        float defaultHalfWidth;
        bool expansionToggler;

        int pickQuadrant(Node<P>* node, P& point);
        void expand(P point, int wherePoint);

#ifdef EXPERIMENTAL_METHODS
        void recombineLastExpansion(unsigned whichQuadrantHasPoints);
#endif
    public:
        QuadTree(unsigned maxPointsPerNode = 1, float defaultHalfWidth = 1.f);
        ~QuadTree();
        void clean();
        void addPoint(P point);
        void addPoint(P point, Node<P>* node
#ifndef EXPERIMENTAL_METHODS
        );
#else
        , unsigned expansionsDone = 0);
#endif
        void addPoints(std::vector<P> points);
        void addPoints(P* array, int length);
        void setMaxPointsPerNode(unsigned numPoints, bool rebuild = false);
        std::string toString();
    };

    /*******************    QUADTREE CLASS IMPLEMENTATION    *************************/

    template<class P>
    QuadTree<P>::QuadTree(unsigned maxPointsPerNode /*= 1*/, float defaultHalfWidth /*= 1.f*/)
            : head(0), maxPointsPerNode(maxPointsPerNode), defaultHalfWidth(defaultHalfWidth), expansionToggler(false) {

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
    void QuadTree<P>::addPoint(P point, Node<P>* node
#ifndef EXPERIMENTAL_METHODS
    ) {
#else
    }, unsigned expansionsDone /*=0*/) {
#endif
        if (!head) {//no head node yet - make a head node of default size and stick the point in it
            head = new Node<P>(point.x - defaultHalfWidth, point.x + defaultHalfWidth,
                               point.y - defaultHalfWidth, point.y + defaultHalfWidth);
            head->points.push_back(point);
        } else {
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
#ifdef EXPERIMENTAL_METHODS
                if (expansionsDone) { // if an expansion was just done on the last pass (and it still didn't reach)
                    // recombine the previous expansion's extra branches (because it created a redundant branch)
                    recombineLastExpansion(expansionsDone - 1);
                }
#endif
                expand(point, wherePoint);
            }
        }
    }

    template<class P>
    int QuadTree<P>::pickQuadrant(Node<P> *node, P& point) {
        if (point.x - node->xMin < node->xMax - point.x) {  //point is to the left of center
            if (node->yMax - point.y < point.y - node->yMin) { return UP_L; }
            else { return DN_L; }
        } else {                                            //point is to the right of center
            if (node->yMax - point.y < point.y - node->yMin) { return UP_R; }
            else { return DN_R; }
        }
    }

    template<class P>
    void QuadTree<P>::expand(P point, int wherePoint) {
        Node<P>* newHead = 0;
        float half = head->xMax - head->xMin;
#ifdef EXPERIMENTAL_METHODS
        unsigned whichIsOldHead = 0;
#endif
        switch (wherePoint) {
            UPLEFT:
            case UPLEFT:
                newHead = new Node<P>(head->xMin - half, head->xMax, head->yMin, head->yMax + half);
                newHead->split3(DN_R);
                newHead->children[DN_R] = head;
#ifdef EXPERIMENTAL_METHODS
                whichIsOldHead = DN_R + 1;
#endif
                break;
            case UP:
                expansionToggler = !expansionToggler;
                if (expansionToggler) { goto UPLEFT; }
            UPRIGHT:
            case UPRIGHT:
                newHead = new Node<P>(head->xMin, head->xMax + half, head->yMin, head->yMax + half);
                newHead->split3(DN_L);
                newHead->children[DN_L] = head;
#ifdef EXPERIMENTAL_METHODS
                whichIsOldHead = DN_L + 1;
#endif
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
#ifdef EXPERIMENTAL_METHODS
                whichIsOldHead = UP_R + 1;
#endif
                break;
            case DOWN:
                expansionToggler = !expansionToggler;
                if (expansionToggler) { goto DNLEFT; }
            DNRIGHT:
            case DNRIGHT:
                newHead = new Node<P>(head->xMin, head->xMax + half, head->yMin - half, head->yMax);
                newHead->split3(UP_L);
                newHead->children[UP_L] = head;
#ifdef EXPERIMENTAL_METHODS
                whichIsOldHead = UP_L + 1;
#endif
                break;
            default:
                throw new std::runtime_error("QuadTree expand: bad enumerator.");;  // default should never happen
        }
        head = newHead;
        addPoint(point, head
#ifndef EXPERIMENTAL_METHODS
        );
#else
        , whichIsOldHead);
#endif
    }

    /*
     * In some cases, a new point will be added that is so far outside of the existing quadtree bounds that upon calling
     * addPoint(), expand() will be called twice or more in succession before the quadtree finally encompasses the point.
     * In this case, there will then exist within the tree one or more redundant branches that ought to be removed.
     * This function is called every time expand is called again after being called, alleviating the issue as it arises.
     *
     * EDIT: After thought, this may be more complex than I originally understood. The above statement only applies
     * after only one point has been added.  Once two or more have been added this reduction is not useful. But it
     * actually seems that the case where this happens after the first point is fairly common.  It may still be worth
     * it to figure this out, so I'm leaving all these horrid defines in here for a bit longer...
     */
#ifdef EXPERIMENTAL_METHODS
    template<class P>
    void QuadTree<P>::recombineLastExpansion(unsigned whichQuadrantHasPoints) {
        Node<P>* tempChildren[4];
        for (unsigned i = 0; i < 4; ++i) {
            tempChildren[i] = head->children[whichQuadrantHasPoints]->children[i];
        }
        delete head->children[whichQuadrantHasPoints];
        for (unsigned i = 0; i < 4; ++i) {
            head->children[i] = tempChildren[i];
        }
    }
#endif

    template<class P>
    void QuadTree<P>::addPoints(std::vector<P> points) {

    }

    template<class P>
    void QuadTree<P>::addPoints(P *array, int length) {

    }

    template<class P>
    void QuadTree<P>::setMaxPointsPerNode(unsigned numPoints, bool rebuild /* = false */) {
        maxPointsPerNode = numPoints;
        if (rebuild) {

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
        return (2 + ((point.x > xMax) ? 1 : ((point.x < xMin) ? -1 : 0))) *
                   ((point.y > yMax) ? 4 : ((point.y < yMin) ? 5  : 1));
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
