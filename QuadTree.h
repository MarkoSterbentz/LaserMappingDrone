//
// Created by adayoldbagel on 1/13/16.
//

#ifndef LASERMAPPINGDRONE_QUADTREE_H
#define LASERMAPPINGDRONE_QUADTREE_H

#include <vector>
#include <string>
#include <sstream>

#define UP_L 0
#define UP_R 1
#define DN_L 2
#define DN_R 3

namespace LaserMappingDrone {

    /*
     * when a point is tested to see where it falls in relation to a square,
     * these are the 9 possible cases.  See function Node::contains
     */
    enum containsCases {    // all cases that can be returned by Node::contains
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
        std::string toString(int level);
    };

    /*******************    QUADTREE CLASS HEADER    *************************/

    template<class P>
    class QuadTree {
    private:
        Node<P>* head;
        int maxPointsPerNode;
        float defaultHalfWidth;
        bool expansionToggler;

        int pickQuadrant(Node<P>* node, P& point);
        void expand(P point, int wherePoint);
    public:
        QuadTree(int maxPointsPerNode = 1, float defaultHalfWidth = 1.f);
        ~QuadTree();
        void clean();
        void addPoint(P point);
        void addPoint(P point, Node<P>* node);
        void addPoints(std::vector<P> points);
        void addPoints(P* array, int length);
        void setMaxPointsPerNode(int numPoints, bool rebuild = false);
        std::string toString();
    };

    /*******************    QUADTREE CLASS IMPLEMENTATION    *************************/

    template<class P>
    QuadTree<P>::QuadTree(int maxPointsPerNode /*= 1*/, float defaultHalfWidth /*= 1.f*/)
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
    void QuadTree<P>::addPoint(P point, Node<P>* node) {
        if (!head) {//no head node yet - make a head node and stick the point in it
            head = new Node<P>(point.x - defaultHalfWidth, point.x + defaultHalfWidth,
                               point.y - defaultHalfWidth, point.y + defaultHalfWidth);
            head->points.push_back(point);
        } else {
            int wherePoint = node->contains(point);
            if (wherePoint == containsCases::INSIDE) { //point is inside node
                if (node->isEndNode()) {                // node is a leaf
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
            } else {//point is not inside node - add nodes above head and switch head to root
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
                break;  // default should never happen
        }
        head = newHead;
        addPoint(point, head);
    }

    template<class P>
    void QuadTree<P>::addPoints(std::vector<P> points) {

    }

    template<class P>
    void QuadTree<P>::addPoints(P *array, int length) {

    }

    template<class P>
    void QuadTree<P>::setMaxPointsPerNode(int numPoints, bool rebuild /* = false */) {
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
                break;  //default should never happen
        }
    }

    template<class P>
    std::string Node<P>::toString(int level) {
        std::stringstream sstr;
        std::string tabs;
        for (unsigned i = 0; i < level; ++i) {
            tabs += '\t';
        }
        sstr << tabs << "NODE: " << xMin << " " << xMax << " " << yMin << " " << yMax << " : ";
        if (isEndNode()) {
            sstr << points.size() << " points\n";
        } else {
            sstr << "BRANCH\n";
        }
        if (!isEndNode()) {
            for (unsigned i = 0; i < 4; ++i) {
                sstr << children[i]->toString(level + 1);
            }
        }
        return sstr.str();
    }

}   // namespace LaserMappingDrone

#endif //LASERMAPPINGDRONE_QUADTREE_H
