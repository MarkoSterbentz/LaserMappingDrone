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

    template <class P>
    struct GridDrawer;  // forward decaration necessary for templated friending.

    template<class P>
    class Grid {
        friend class GridDrawer<P>;
    private:
        std::vector<Cell<P>> cells;
        float xMin, xMax, yMin, yMax;
        unsigned xRes, yRes;

        Delegate<void(P&)> pointAdditionCallback;
        bool pointAdditionCallbackExists;

        void specifyPointAdditionCallback(Delegate<void(P &)> delegate);
    public:
        Grid(float xMin, float xMax, float yMin, float yMax, unsigned xRes, unsigned yRes);
        ~Grid();
        void addPoint(P point);
    };

    /*******************    GRID CLASS IMPLEMENTATION    *************************/

    template<class P>
    Grid<P>::Grid(float xMin, float xMax, float yMin, float yMax, unsigned xRes, unsigned yRes) :
            xMin(xMin), xMax(xMax), yMin(yMin), yMax(yMax), xRes(xRes), yRes(yRes), pointAdditionCallbackExists(false) {
        unsigned long numCells = xRes * yRes;
        for (unsigned long i = 0; i < numCells; ++i) {
            cells.push_back(Cell<P>());
        }
    }

    template<class P>
    Grid<P>::~Grid() {

    }

    template<class P>
    void Grid<P>::addPoint(P point) {
        if (point.x < xMax && point.x > xMin && point.y < yMax && point.y > yMin) {
            int cellIndex = (int)(((point.x - xMin) / (xRes * 2))) + (int)(((point.y - yMin) / (yRes * 2))) * xRes;
            cells[cellIndex].points.push_back(point);
            printf("[%f, %f] : cell %d : has %lu\n", point.x, point.y, cellIndex, cells[cellIndex].points.size());
            if (pointAdditionCallbackExists) {
                pointAdditionCallback(point);
            }
        }
    }

    /**
     * The callback delegate is allowed to help optimize rendering of this structure should the need arise.  It's not a
     * safe thing to do, I realize.
     */
    template<class P>
    void Grid<P>::specifyPointAdditionCallback(Delegate<void(P &)> delegate) {
        // No recursion of addPoint please - this is a basic check for that, but a clever coder could defeat it.
        // Also, a not-necessarily-clever coder could accidentally produce indirect recursion.  Be careful.
        if (delegate != DELEGATE(&Grid<P>::addPoint, this)) {
            pointAdditionCallback = delegate;
            pointAdditionCallbackExists = true;
        }
    }

}   // namespace LaserMappingDrone

#endif //LASERMAPPINGDRONE_GRID_H
