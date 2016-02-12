//
// Created by Galen on 2/6/2016.
//

#ifndef LASERMAPPINGDRONE_KERNEL_H
#define LASERMAPPINGDRONE_KERNEL_H

#include <vector>

namespace LaserMappingDrone {

    enum KernelType{
        STDDEV,
        IMAGE
    };
    struct KernelEntry {
        int xOffset, yOffset, weight;
    };
    struct Kernel {
        KernelType type;
        std::vector<KernelEntry> contributingCells;
    };

    int initKernel(Kernel &kernel, KernelType type, std::vector<int> kermits);

}

#endif //LASERMAPPINGDRONE_KERNEL_H
