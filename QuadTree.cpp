//
// Created by adayoldbagel on 1/13/16.
//

#include "QuadTree.h"

#define UP_L 0
#define UP_R 1
#define DN_L 2
#define DN_R 3

namespace LaserMappingDrone {
    template<class P>
    QuadTree::QuadTree(int maxPointsPerNode = 1, float defaultHalfWidth = 1.f)
            : head(0), maxPointsPerNode(maxPointsPerNode), defaultHalfWidth(defaultHalfWidth) {

    }
    QuadTree::~QuadTree() {
        clean();
    }
    template<class P>
    void QuadTree::addPoint(P point, Node* node = head) {
        if (!head) {
            head = new Node(point.x - defaultHalfWidth, point.x + defaultHalfWidth,
                            point.y - defaultHalfWidth, point.y + defaultHalfWidth);
            head->points.push_back(point);
        } else if (node->contains(point)) {
            if (node->points.size() < maxPointsPerNode) {
                node->points.push_back(point);
            } else {
                //split node
            }
        } else {
            //extend head
        }
    }
    template<class P>
    void QuadTree::addPoints(std::vector<P> points) {

    }
    template<class P>
    void QuadTree::addPoints(P *array, int length) {

    }
    void QuadTree::setMaxPointsPerNode(int numPoints, bool rebuild = false) {
        maxPointsPerNode = numPoints;
        if (rebuild) {

        }
    }
    void QuadTree::clean() {
        if (head) {
            head->destroy();
            delete head;
            head = 0;
        }
    }


    Node::Node(float xMin, float xMax, float yMin, float yMax)
              : xMin(xMin), xMax(xMax), yMin(yMin), yMax(yMax) {
        for (auto child : children) {
            child = 0;
        }
    }
    void Node::destroy() {
        for (auto child : children) {
            child->destroy();
            delete child;
            child = 0;
        }
    }
    template<class P>
    bool Node::contains(P point) {

    }

}
