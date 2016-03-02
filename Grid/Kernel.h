//
// Created by Galen on 2/6/2016.
//

#ifndef LASERMAPPINGDRONE_KERNEL_H
#define LASERMAPPINGDRONE_KERNEL_H

#include <vector>
#include <functional>

namespace LaserMappingDrone {

    struct KernelEntry {
        int xOffset, yOffset, weight;
    };

    template <class P>
    struct Grid;

    template <class P>
    struct Kernel {
        std::vector<KernelEntry> contributingCells;
        std::function<void(Grid<P>*, int, int)> execute;
    };

    /**************************************** IMPLEMENTATION: *********************************************/
    template <class P>
    int initKernel(Kernel<P> &kernel, std::function<void(Grid<P>*, int, int)> execute, std::vector<int> kermits) {
        unsigned matrixSideLength = (unsigned)sqrt(kermits.size());
        if (kermits.size() != matrixSideLength * matrixSideLength) {
            return 1;
        }
        if (matrixSideLength % 2 == 0) {    // even-numbered side-length convolution matrices don't work.
            return 2;
        }
        int cornerIndex = matrixSideLength / 2;
        for (int y = cornerIndex; y >= -cornerIndex; --y) {
            for (int x = -cornerIndex; x <= cornerIndex; ++x) {
                int kermitIndex = (x + cornerIndex) + (cornerIndex - y) * matrixSideLength;
                if (kermits[kermitIndex]) {
                    kernel.contributingCells.push_back({x, y, kermits[kermitIndex]});
                }
            }
        }
        kernel.execute = execute;
        return 0;
    }

}

#endif //LASERMAPPINGDRONE_KERNEL_H
