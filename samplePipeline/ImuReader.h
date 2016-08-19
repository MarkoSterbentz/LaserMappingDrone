//
// Created by volundr on 8/18/16.
//

#ifndef LASERMAPPINGDRONE_IMUREADER_H
#define LASERMAPPINGDRONE_IMUREADER_H

#include "Bno055Interface.h"

namespace LaserMappingDrone {
    class ImuReader {
        bno055::Bno055Interface bno055;
    public:
        bool init();
        void printOrientation();
    };
}

#endif //LASERMAPPINGDRONE_IMUREADER_H
