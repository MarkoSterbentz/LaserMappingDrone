//
// Created by adayoldbagel on 1/13/16.
//

#ifndef LASERMAPPINGDRONE_QUADTREE_H
#define LASERMAPPINGDRONE_QUADTREE_H

#include <vector>

namespace LaserMappingDrone {

    template<class P>
    struct Node {
        Node* children[4];
        float xMin, xMax, yMin, yMax;
        std::vector<P> points;
        Node(float xMin, float xMax, float yMin, float yMax);
        void destroy();
        bool contains(P point);
    };

    template<class P>
    class QuadTree {
    private:
        Node* head;
        int maxPointsPerNode;
        float defaultHalfWidth;
    public:
        QuadTree(int maxPointsPerNode = 1, float defaultHalfWidth = 1.f);
        ~QuadTree();
        void addPoint(P point, Node* node = head);
        void addPoints(std::vector<P> points);
        void addPoints(P* array, int length);
        void setMaxPointsPerNode(int numPoints, bool rebuild = false);
        void clean();
    };

}

#endif //LASERMAPPINGDRONE_QUADTREE_H
