//
// Created by adayoldbagel on 2/4/16.
//

#ifndef LASERMAPPINGDRONE_GRID_H
#define LASERMAPPINGDRONE_GRID_H

#include <vector>
#include <deque>
#include "Delegate.h"
#include "Kernel.h"

namespace LaserMappingDrone {

    /*******************    CELL CLASS HEADER    *************************/

    template<class P>
    struct Cell {
        std::deque<P> points;
    };

    /*******************    GRID CLASS HEADER    *************************/

    template <class P>
    struct GridDrawer;  // forward decaration necessary for templated friending.

    struct CyclerEntry {
        unsigned long cellIndex;
    };

    template<class P>
    class Grid {
        friend class GridDrawer<P>;
    private:
        std::vector<Cell<P>> cells;
        float xMin, xMax, yMin, yMax;
        float xIndexFactor, yIndexFactor;
        unsigned xRes, yRes;

        Delegate<void(P&)> pac;     // (Point Addition Callback)
        bool pacExists;             // and whether or not there is one.

        Kernel kernel;

        CyclerEntry* cycler;            // used for 'recycling' points for optimization
        unsigned long cycles;           // how may points available to cycle (0 means infinite and is default)
        unsigned long currentCycle;     // which point is to be recycled next
        bool cyclerHasReachedCapacity;  // whether or not the cycler needs to actually start recycling

        void removeOldestInCell(unsigned long cellIndex);
        void specifyPointAdditionCallback(Delegate<void(P &)> delegate);
    public:
        Grid(float xMin, float xMax, float yMin, float yMax, unsigned xRes, unsigned yRes, unsigned long cycle = 0);
        ~Grid();
        void addPoint(P point);
        int specifyStdDevKernel(std::vector<int> kermit);
    };

    /*******************    GRID CLASS IMPLEMENTATION    *************************/

    template<class P>
    Grid<P>::Grid(float xMin, float xMax, float yMin, float yMax, unsigned xRes, unsigned yRes, unsigned long cycle /*= 0*/):
            xMin(xMin), xMax(xMax), yMin(yMin), yMax(yMax), xRes(xRes), yRes(yRes), pacExists(false), cycles(cycle) {
        xIndexFactor = xRes / (xMax - xMin);
        yIndexFactor = yRes / (yMax - yMin);
        unsigned long numCells = xRes * yRes;
        for (unsigned long i = 0; i < numCells; ++i) {
            cells.push_back(Cell<P>());
        }
        if (cycle) {
            cycler = new CyclerEntry[cycle];
            for (unsigned i = 0; i < cycle; ++i) {
                cycler[i] = {0};
            }
            currentCycle = 0;
        }
    }

    template<class P>
    Grid<P>::~Grid() {
        if (cycles) {
            delete[] cycler;
            cycler = NULL;
        }
    }

    template<class P>
    void Grid<P>::addPoint(P point) {
        if (point.x < xMax && point.x > xMin && point.y < yMax && point.y > yMin) {
            unsigned cellIndex = (int)((point.x - xMin) * xIndexFactor) + (int)((point.y - yMin) * yIndexFactor) * xRes;
//            if (cellIndex >= 0 && cellIndex < cells.size()) {
                cells[cellIndex].points.push_back(point);
//            }
//            printf("[%f, %f] (%f, %f) : cell %d : has %lu\n", point.x, point.y, (point.x - xMin) * xIndexFactor,
//                   (point.y - yMin) * yIndexFactor, cellIndex, cells[cellIndex].points.size());
            if (cycles) {
                if (cyclerHasReachedCapacity) {
                    removeOldestInCell(cycler[currentCycle].cellIndex);
                    cycler[currentCycle].cellIndex = cellIndex;
                    if (++currentCycle >= cycles) {
                        currentCycle = 0;
                    }
                } else {
                    cycler[currentCycle].cellIndex = cellIndex;
                    if (++currentCycle >= cycles) {
                        currentCycle = 0;
                        cyclerHasReachedCapacity = true;
                    }
                }
            }
            if (pacExists) {
                pac(point);
            }
        }
    }

    template<class P>
    void Grid<P>::removeOldestInCell(unsigned long cellIndex) {
        if (cellIndex < cells.size()) {
            cells[cellIndex].points.pop_front();
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
            pac = delegate;
            pacExists = true;
        }
    }

    template<class P>
    int Grid<P>::specifyStdDevKernel(std::vector<int> kermit) {
        return initKernel(kernel, KernelType::STDDEV, kermit);
    }
}   // namespace LaserMappingDrone

#endif //LASERMAPPINGDRONE_GRID_H
