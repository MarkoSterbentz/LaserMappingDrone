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
    struct GridDrawer;  // moveBackward decaration necessary for templated friending.

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

        std::function<void(P&)> pac;
        bool pacExists;             // and whether or not there is one.

        CyclerEntry* cycler;            // used for 'recycling' points for optimization
        unsigned long capacity;         // how may points available to cycle (0 means infinite and is default)
        unsigned long currentCycle;     // which point is to be recycled next
        bool cyclerHasReachedCapacity;  // whether or not the cycler needs to actually start recycling

        void removeOldestInCell(unsigned long cellIndex);
        void specifyPointAdditionCallback(std::function<void(P&)> pac);
        void runKernelOnCell(int cellX, int cellY);
        void runKernelImplicit(int cellX, int cellY);   // runs kernel on cell and updates cells it contributes to
        unsigned parseCellIndex(float x, float y);
    public:
        Grid(float xMin, float xMax, float yMin, float yMax, unsigned xRes, unsigned yRes, unsigned long cycle = 0);
        ~Grid();
        Kernel<P> kernel;
        std::vector<GridCell<P>> cells;
        void addPoint(P point);
        int specifyKernel(std::vector<int> kermit, std::function<void(Grid*, int, int)> execute);
        void runKernel();   // runs kernel for all the cell
        int getXRes();
        int getYRes();
        int getKernelOutput(float x, float y, float& result);
    };

    /*******************    GRID CLASS IMPLEMENTATION    *************************/

    template<class P>
    Grid<P>::Grid(float xMin, float xMax, float yMin, float yMax, unsigned xRes, unsigned yRes, unsigned long cycle /*= 0*/):
            xMin(xMin), xMax(xMax), yMin(yMin), yMax(yMax),
            xRes(xRes), yRes(yRes), pacExists(false), capacity(cycle) {
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
        if (capacity) {
            delete[] cycler;
            cycler = NULL;
        }
    }

    template<class P>
    void Grid<P>::addPoint(P point) {
        if (point.x < xMax && point.x > xMin && point.y < yMax && point.y > yMin) {
            unsigned cellIndex = parseCellIndex(point.x, point.y);
            cells[cellIndex].points.push_back(point);
            if (capacity) {
                if (cyclerHasReachedCapacity) {
                    removeOldestInCell(cycler[currentCycle].cellIndex);
                    cycler[currentCycle].cellIndex = cellIndex;
                    if (++currentCycle >= capacity) {
                        currentCycle = 0;
                    }
                } else {
                    cycler[currentCycle].cellIndex = cellIndex;
                    if (++currentCycle >= capacity) {
                        currentCycle = 0;
                        cyclerHasReachedCapacity = true;
                    }
                }
            }
            if (pacExists) {
                pac(point);
            }
            /* Running the kernel for the cell that contains the new point: */
            //int testCellX = (int)((point.x - xMin) * xIndexFactor);
            //int testCellY = (int)((point.y - yMin) * yIndexFactor);

            //runKernelImplicit(testCellX, testCellY);                                                          // PROBLEMS WHEN TRYING TO DO THIS!!
        }
    }

    template<class P>
    void Grid<P>::removeOldestInCell(unsigned long cellIndex) {
        if (cellIndex < cells.size()) {
            cells[cellIndex].points.pop_front();
        }
    }

    /**
     * The callback delegate is allowed to help optimize rendering of this structure should the need arise.
     */
    template<class P>
    void Grid<P>::specifyPointAdditionCallback(std::function<void(P&)> pac) {
        this->pac = pac;
        pacExists = true;
    }

    template<class P>
    int Grid<P>::specifyKernel(std::vector<int> kermit, std::function<void(Grid*, int, int)> execute) {
        return initKernel(kernel, execute, kermit);
    }

    template <class P>
    void Grid<P>::runKernelOnCell(int cellX, int cellY) {
        kernel.execute(this, cellX, cellY);
    }

    template <class P>
    void Grid<P>::runKernelImplicit(int cellX, int cellY) {
        for(int i = 0; i < kernel.contributingCells.size(); ++i) {
            runKernelOnCell(cellX - kernel.contributingCells[i].xOffset, cellY - kernel.contributingCells[i].yOffset);
        }
    }

    template <class P>
    void Grid<P>::runKernel() {
        for (int i = 0; i < xRes; ++i) {
            for (int j = 0; j < yRes; ++j) {
                runKernelOnCell(i, j);
            }
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

    template <class P>
    int Grid<P>::getKernelOutput(float x, float y, float& result) {
        unsigned cellIndex = parseCellIndex(x, y);
        if (cellIndex > 0 && cellIndex < cells.size()) {
            result = cells[cellIndex].kernelOutput;
            return 0;
        }
        return 1;
    }

    template <class P>
    unsigned Grid<P>::parseCellIndex(float x, float y) {
        return (int)((x - xMin) * xIndexFactor) + (int)((y - yMin) * yIndexFactor) * xRes;
    }

}   // namespace LaserMappingDrone

#endif //LASERMAPPINGDRONE_GRID_H
