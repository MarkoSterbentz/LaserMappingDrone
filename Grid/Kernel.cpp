//
// Created by Galen on 2/6/2016.
//

#include <math.h>
#include "Kernel.h"

namespace LaserMappingDrone {

//    int initKernel(Kernel &kernel, std::function<void(Grid*, int, int)> execute, std::vector<int> kermits) {
//        unsigned matrixSideLength = (unsigned)sqrt(kermits.size());
//        if (kermits.size() != matrixSideLength * matrixSideLength) {
//            return 1;
//        }
//        if (matrixSideLength % 2 == 0) {    // even-numbered side-length convolution matrices don't work.
//            return 2;
//        }
//        int cornerIndex = matrixSideLength / 2;
//        for (int y = cornerIndex; y >= -cornerIndex; --y) {
//            for (int x = -cornerIndex; x <= cornerIndex; ++x) {
//                int kermitIndex = (x + cornerIndex) + (cornerIndex - y) * matrixSideLength;
//                if (kermits[kermitIndex]) {
//                    kernel.contributingCells.push_back({x, y, kermits[kermitIndex]});
//                }
//            }
//        }
//        return 0;
//    }
}