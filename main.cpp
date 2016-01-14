//
// Created by adayoldbagel on 1/13/16.
//

#include <iostream>
#include "QuadTree.h"
using namespace LaserMappingDrone;

struct DummyPoint {
    float x, y;
};

int main() {
    QuadTree<DummyPoint> quadTree;
    quadTree.addPoint({0.5f, 0.5f});
    quadTree.addPoint({0.5f, -0.5f});
    quadTree.addPoint({5.0f, 0.5f});
    std::cout << quadTree.toString();
    return 0;
}