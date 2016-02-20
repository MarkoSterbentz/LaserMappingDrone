//
// Created by adayoldbagel on 2/4/16.
//

#ifndef LASERMAPPINGDRONE_GRID_H
#define LASERMAPPINGDRONE_GRID_H

#include <vector>
#include <deque>
#include <functional>
#include "Delegate.h"
#include "Kernel.h"

namespace LaserMappingDrone {

    /*******************    CELL CLASS HEADER    *************************/

    template<class P>
    struct GridCell {
        std::deque<P> points;
        float kernelOutput;
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

        float xMin, xMax, yMin, yMax;
        float xIndexFactor, yIndexFactor;
        unsigned xRes, yRes;

//        Delegate<void(P&)> pac;     // (Point Addition Callback)
        std::function<void(P&)> pac;
        bool pacExists;             // and whether or not there is one.



        CyclerEntry* cycler;            // used for 'recycling' points for optimization
        unsigned long cycles;           // how may points available to cycle (0 means infinite and is default)
        unsigned long currentCycle;     // which point is to be recycled next
        bool cyclerHasReachedCapacity;  // whether or not the cycler needs to actually start recycling

        void removeOldestInCell(unsigned long cellIndex);
        void specifyPointAdditionCallback(std::function<void(P&)> pac);
    public:
        Grid(float xMin, float xMax, float yMin, float yMax, unsigned xRes, unsigned yRes, unsigned long cycle = 0);
        ~Grid();
        Kernel<P> kernel;
        std::vector<GridCell<P>> cells;
        void addPoint(P point);
        int specifyKernel(std::vector<int> kermit, std::function<void(Grid*, int, int)> execute);
        void runKernel();
        int getXRes();
        int getYRes();
    };

    /*******************    GRID CLASS IMPLEMENTATION    *************************/

    template<class P>
    Grid<P>::Grid(float xMin, float xMax, float yMin, float yMax, unsigned xRes, unsigned yRes, unsigned long cycle /*= 0*/):
            xMin(xMin * 1000.f), xMax(xMax * 1000.f), yMin(yMin * 1000.f), yMax(yMax * 1000.f),
            xRes(xRes), yRes(yRes), pacExists(false), cycles(cycle) {
        // The factors of 1000 are to get from LIDAR units to meters on the bounds.
        xIndexFactor = this->xRes / (this->xMax - this->xMin);
        yIndexFactor = this->yRes / (this->yMax - this->yMin);
        unsigned long numCells = this->xRes * this->yRes;
        for (unsigned long i = 0; i < numCells; ++i) {
            cells.push_back(GridCell<P>());
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
                cells[cellIndex].points.push_back(point);
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
            runKernel();
            std::cout << cells[cellIndex].kernelOutput << std::endl;
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
    void Grid<P>::specifyPointAdditionCallback(std::function<void(P&)> pac) {
        // No recursion of addPoint please - this is a basic check for that, but a clever coder could defeat it.
        // Also, a not-necessarily-clever coder could accidentally produce indirect recursion.  Be careful.
//        if (pac != [] (P& x) { this->addPoint(x); } ) {
//            this->pac = pac;
//            pacExists = true;
//        }
        this->pac = pac;
        pacExists = true;
    }

    template<class P>
    int Grid<P>::specifyKernel(std::vector<int> kermit, std::function<void(Grid*, int, int)> execute) {
        return initKernel(kernel, execute, kermit);
    }

    template <class P>
    void Grid<P>::runKernel() {
        for (int i = 0; i < xRes; ++i) {
            kernel.execute(this, i, 0);
        }
    }

    template <class P>
    int Grid<P>::getXRes() {
        return xRes;
    }

    template <class P>
    int Grid<P>::getYRes() {
        return yRes;
    }
}   // namespace LaserMappingDrone

#endif //LASERMAPPINGDRONE_GRID_H
