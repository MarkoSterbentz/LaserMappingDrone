//
// Created by volundr on 8/18/16.
//

#include <iostream>
#include <iomanip>
#include "ImuReader.h"

#define BNO055_DEVICE_FILE "/dev/ttyS0"

namespace LaserMappingDrone {

    bool ImuReader::init() {
        bno055.init(BNO055_DEVICE_FILE);
        if (bno055.isLive()) {
            printf("BNO055 is live.\n");
        } else {
            printf("Could not contact BNO055!\n");
            return false;
        }
        return true;
    }

    void ImuReader::printOrientation() {
        if ( ! bno055.isLive()) {
            return;
        }
        bno055::Vec3_16 orient;
        bno055::Vec3_f orientDeg;
        if (bno055.queryVec3(&orient, bno055::EULER_ORIENT)) {
            orientDeg = orient.toFusionEulerOrientation();
            std::cout << "-> ";
            std::cout << std::setiosflags(std::ios::right);
            std::cout << std::setiosflags(std::ios::fixed);
            std::cout << std::setw(10) << std::setprecision(4) << orientDeg.heading
                      << std::setw(10) << std::setprecision(4) << orientDeg.roll
                      << std::setw(10) << std::setprecision(4) << orientDeg.pitch;
            std::cout << std::endl;
        }
    }
}
