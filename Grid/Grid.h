//
// Created by adayoldbagel on 2/4/16.
//

#ifndef LASERMAPPINGDRONE_GRID_H
#define LASERMAPPINGDRONE_GRID_H

#include <vector>

namespace LaserMappingDrone {

    /*******************    NODE CLASS HEADER    *************************/

    template<class P>
    struct Cell {
        std::vector<P> points;
    };

    /*******************    GRID CLASS HEADER    *************************/

    template<class P>
    class Grid {
        friend class GridDrawer;
    private:
        std::vector<Cell> cells;
        float minX, maxX, minY, maxY;
        unsigned resX, resY;
    public:
        Grid(float minX, float maxX, float minY, float maxY, unsigned resX, unsigned resY);
        ~Grid();
        void addPoint(P point);
        void addPoints(std::vector<P> points);
        void addPoints(P* array, unsigned long length);
    };

    /*******************    GRID CLASS IMPLEMENTATION    *************************/


    Grid::Grid(float minX, float maxX, float minY, float maxY, unsigned resX, unsigned resY) :
            minX(minX), maxX(maxX), minY(minY), maxY(maxY), resX(resX), resX(resX)   {
        unsigned long numCells = resX * resY;
        for (unsigned long i = 0; i < numCells; ++i) {
            cells.push_back(Cell());
        }
    }

    Grid::~Grid() {

    }

    template<class P>
    void Grid::addPoint(P point) {
        cells[(int)point.x + ((int)point.y % resX) * resX].points.push_back(point);
    }

    template<class P>
    void Grid::addPoints(std::vector<P> points) {
        if (!points.empty()) {
            addPoints(&points[0], points.size());
        }
    }

    template<class P>
    void Grid::addPoints(P *array, unsigned long length) {
        if (length > 0) {
            for (unsigned i = 0; i < length; ++i) {
                addPoint(array[i]);
            }
        }
    }

}   // namespace LaserMappingDrone

#endif //LASERMAPPINGDRONE_GRID_H
