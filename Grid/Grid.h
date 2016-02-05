//
// Created by adayoldbagel on 2/4/16.
//

#ifndef LASERMAPPINGDRONE_GRID_H
#define LASERMAPPINGDRONE_GRID_H

#include <vector>
#include "Delegate.h"

namespace LaserMappingDrone {

    /*******************    CELL CLASS HEADER    *************************/

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

        Delegate<void(P&)> pointAdditionCallback;
        bool pointAdditionCallbackExists;

        void specifyPointAdditionCallback(Delegate<void(P &)> delegate);
    public:
        Grid(float minX, float maxX, float minY, float maxY, unsigned resX, unsigned resY);
        ~Grid();
        void addPoint(P point);
    };

    /*******************    GRID CLASS IMPLEMENTATION    *************************/


    Grid::Grid(float minX, float maxX, float minY, float maxY, unsigned resX, unsigned resY) :
            minX(minX), maxX(maxX), minY(minY), maxY(maxY), resX(resX), resX(resX), pointAdditionCallbackExists(false) {
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
        if (pointAdditionCallbackExists) {
            pointAdditionCallback(point);
        }
    }

    /**
     * The callback delegate is allowed to help optimize rendering of this structure should the need arise.  It's not a
     * safe thing to do, I realize.
     */
    template<class P>
    void Grid::specifyPointAdditionCallback(Delegate<void(P &)> delegate) {
        // No recursion of addPoint please - this is a basic check for that, but a clever coder could defeat it.
        // Also, a not-necessarily-clever coder could accidentally produce indirect recursion.  Be careful.
        if (delegate != DELEGATE(&Grid::addPoint, this)) {
            pointAdditionCallback = delegate;
            pointAdditionCallbackExists = true;
        }
    }

}   // namespace LaserMappingDrone

#endif //LASERMAPPINGDRONE_GRID_H
