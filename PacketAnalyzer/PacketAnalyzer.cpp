//
// Created by marko sterbentz on 1/21/16.
//

#include "PacketAnalyzer.h"

/* PacketAnalyzer Constructor */
PacketAnalyzer::PacketAnalyzer() {

}
/* PacketAnalyzer Destructor */
PacketAnalyzer::~PacketAnalyzer() {

}
void PacketAnalyzer::loadPacket(unsigned char * newPacket) {
    currentPacket = newPacket;
}
/*****************************************************************************
 * METHODS FOR EXTRACTING RAW DATA FROM THE PACKET
 *****************************************************************************/
DataPacketInfo PacketAnalyzer::extractDataPacketInfo() {
    DataPacketInfo extractedInfo;
    // first 42 bytes are header
    //unsigned int packetIndex = 42;
    // there is no UDP header with the new code...
    unsigned int packetIndex = 0;
    // next 1200 bytes make up the data
    for(int i = 0; i < 12; ++i) {
        extractedInfo.blocks[i] = extractDataBlockInfo(packetIndex);
        packetIndex += 100;
    }
    // next 4 bytes are timestamp
    extractedInfo.timestamp = calculateTimestamp(packetIndex);
    packetIndex += 4;
    // last 2 bytes are factory bytes
    extractedInfo.returnMode = calculateReturnMode(packetIndex);
    // After everything is calculated, interpolate the azimuth to get the azimuth for the second firing sequence in each block
    interpolateSecondAzimuth(extractedInfo);
    return extractedInfo;
}

PositionPacketInfo PacketAnalyzer::extractPositionPacketInfo(){
    PositionPacketInfo extractedInfo;
    // first 42 bytes are ethernet header

    // next 198 bytes are unused

    // next 4 bytes are timestamp

    // next 4 bytes are unused

    // next 72 bytes are NMEA $GPRMC sentence

    // next 234 bytes are unused
    return extractedInfo;
}

DataBlockInfo PacketAnalyzer::extractDataBlockInfo(unsigned int dbIndex){
    DataBlockInfo db;
    // first 2 bytes are the flag; can skip them
    dbIndex += 2;
    // next 2 bytes are azimuth
    db.azimuth1 = calculateFirstAzimuth(dbIndex);
    dbIndex += 2;
    // next 96 bytes are the channels
    for(int i = 0; i < 32; ++i) {
        db.channels[i] = extractChannelInfo(dbIndex);
        dbIndex += 3;
    }
    return db;
}

ChannelInfo PacketAnalyzer::extractChannelInfo(unsigned int chIndex){
    ChannelInfo ci;
    ci.distance = calculateDistance(chIndex);
    ci.reflectivity = calculateReflectivity(chIndex+2);
    return ci;
}

/*****************************************************************************
 * METHODS FOR CALCULATING SPECIFIC VALUES FROM THE RAW DATA
 *****************************************************************************/

/* Returns the azimuth contained in two bytes
 * Note: This will only return the azimuth for the first firing sequence.
 * Note: Azimuth values range from 0 to 359.99 degrees */
float PacketAnalyzer::calculateFirstAzimuth(unsigned int azIndex) {
    // reverse the bytes and combine into 2 byte uint
    unsigned int byteCombo = currentPacket[azIndex+1];
    byteCombo = byteCombo << 8;
    byteCombo = byteCombo | currentPacket[azIndex];
    return (float) (byteCombo / 100.0); // convert to decimal
}

// also calculating average interpolation amount in order to calculate interpolation for last data block's second azimuth
void PacketAnalyzer::interpolateSecondAzimuth(DataPacketInfo& packet) {
    float averageInterpolation = 0.0;
    for (int i = 0; i < 11; ++i) {
        float startAzimuth = packet.blocks[i].azimuth1;
        float endAzimuth = packet.blocks[i+1].azimuth1;
        // adjust for rollover from 359.99 to 0 degrees
        if (endAzimuth < startAzimuth)
            endAzimuth += 360;
        // perform interpolation
        float interpolationAmount = ((endAzimuth - startAzimuth) / 2);
        packet.blocks[i].azimuth2 = startAzimuth + interpolationAmount;
        averageInterpolation += interpolationAmount;
        // correct for rollover from 359.99 to 0 degrees
        if (packet.blocks[i].azimuth2 > 360)
            packet.blocks[i].azimuth2 -= 360;
    }
    // calculate interpolation for the last block
    averageInterpolation /= 11.0;
    packet.blocks[11].azimuth2 = packet.blocks[11].azimuth1 + averageInterpolation;
    if (packet.blocks[11].azimuth2 > 360)
        packet.blocks[11].azimuth2 -= 360;
}

float PacketAnalyzer::calculateDistance(unsigned int distIndex){
    unsigned int byteCombo = currentPacket[distIndex+1];
    byteCombo = byteCombo << 8;
    byteCombo = byteCombo | currentPacket[distIndex];
    return (float) (byteCombo * 2);
}

unsigned char PacketAnalyzer::calculateReflectivity(unsigned int refIndex){
    return currentPacket[refIndex];
}

// timestamp is given in microseconds, then converted to seconds
float PacketAnalyzer::calculateTimestamp(unsigned int tsIndex){            // NEED TO CALCULATE OFFSETS AND ADD TO THE TIME
    unsigned int byteCombo = currentPacket[tsIndex];
    for(int i = 1; i < 4; ++i) {
        byteCombo = byteCombo << 8;
        byteCombo += currentPacket[tsIndex + i];
    }
    return (float) (byteCombo / 1000000.0); // convert to seconds
}

// first byte is return mode | second byte is sensor model key
// 37 = strongest return | 38 = last return | 39 = dual return
unsigned char PacketAnalyzer::calculateReturnMode(unsigned int retIndex){
    return currentPacket[retIndex];
}

/*****************************************************************************
 * METHODS FOR INTERPRETING EXTRACTED DATA
 *****************************************************************************/
/* Returns the CartesianPoint values for the data in the packet. */
std::vector<CartesianPoint> PacketAnalyzer::getCartesianPoints() {
    float laserElevationAngles[] = {-15, 1, -13, 3, -11, 5, -9, 7, -7, 9, -5, 11, -3, 13, -1, 15};
    DataPacketInfo data = this->extractDataPacketInfo();
    std::vector<CartesianPoint> cartesianPoints;
    /* Full view (normal) code: */
    for(int i = 0; i < 12; ++i) {
        // first firing sequence
        for(int j = 0; j < 16; ++j) {
            if (data.blocks[i].channels[j].distance > 0) // throw out 0 points
                cartesianPoints.push_back(getSingleXYZ(data.blocks[i].channels[j].distance, laserElevationAngles[j], data.blocks[i].azimuth1));
        }
        // second firing sequence
        for(int j = 16; j < 32; ++j) {
            if (data.blocks[i].channels[j].distance > 0) // throw out 0 points
                cartesianPoints.push_back(getSingleXYZ(data.blocks[i].channels[j].distance, laserElevationAngles[j%16], data.blocks[i].azimuth2));
        }
    }
    /* half-view code */
    /*for(int i = 0; i < 12; ++i) {
        // first firing sequence
        for(int j = 0; j < 16; ++j) {
            if (data.blocks[i].channels[j].distance > 0) // throw out 0 points
                if (data.blocks[i].azimuth1 < 90 || data.blocks[i].azimuth1 > 270)
                    cartesianPoints.push_back(getSingleXYZ(data.blocks[i].channels[j].distance,
                                                           laserElevationAngles[j], data.blocks[i].azimuth1));
        }
        // second firing sequence
        for(int j = 16; j < 32; ++j) {
            if (data.blocks[i].channels[j].distance > 0) // throw out 0 points
                if (data.blocks[i].azimuth2 < 90 || data.blocks[i].azimuth2 > 270)
                    cartesianPoints.push_back(getSingleXYZ(data.blocks[i].channels[j].distance,
                                                           laserElevationAngles[j%16], data.blocks[i].azimuth2));
        }
    }*/
    /* Demo Code: */
    // grabbing a single data point from each firing sequence for speed/testing purposes
//    for(int i = 0; i < 1; ++i) {
//        // first firing sequence
//        for(int j = 1; j < 2; ++j) {
//            if (data.blocks[i].channels[j].distance > 0) // throw out 0 points
//                cartesianPoints.push_back(getSingleXYZ(data.blocks[i].channels[j].distance, laserElevationAngles[j], data.blocks[i].azimuth1));
//        }
//    }

    return cartesianPoints;
}

/* VeloDyne Documentation: distance == R | elevationAngle == omega | azimuth == alpha */
CartesianPoint PacketAnalyzer::getSingleXYZ(float distance, float elevationAngle, float azimuth) {
    CartesianPoint p;
    // convert angles to radians
    elevationAngle = (float) (elevationAngle * RAD_CONVERSION);
    azimuth = (float) (azimuth * RAD_CONVERSION);
    p.x = (float) (distance * cos(elevationAngle) * sin(azimuth));
    p.y = (float) (distance * cos(elevationAngle) * cos(azimuth));
    p.z = (float) (distance * sin(elevationAngle));
    return p;
}