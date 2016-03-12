#ifndef LASERMAPPINGDRONE_PACKETANALYZER_H
#define LASERMAPPINGDRONE_PACKETANALYZER_H

/* PACKET ANALYZER | Marko Sterbentz
 * This class is designed to take in a packet or series of packets output
 * from the VeloDyne VLP-16 and convert it to a variety of useful three
 * dimensional data points.
 */

#include <cmath>
#include <iostream>
#include <vector>

#define RAD_CONVERSION 0.01745329251

struct CartesianPoint {
    float x, y, z;
};

struct ChannelInfo {
    float distance;
    float reflectivity;
};

struct DataBlockInfo {
    float azimuth1; // for the first firing sequence
    float azimuth2; // for the second firing sequence
    ChannelInfo channels[32];
};

struct DataPacketInfo {
    DataBlockInfo blocks[12];
    float timestamp;
    unsigned returnMode;
};

struct PositionPacketInfo {
    // needs to be implemented...
};

/******************ANALYZER HEADER*********************/
class PacketAnalyzer {
private:
    unsigned char* currentPacket;
    CartesianPoint getSingleXYZ(float distance, float elevationAngle, float azimuth);
    PositionPacketInfo extractPositionPacketInfo();
    DataPacketInfo extractDataPacketInfo();
    DataBlockInfo extractDataBlockInfo(unsigned int dbIndex);
    ChannelInfo extractChannelInfo(unsigned int chIndex);
    void interpolateSecondAzimuth(DataPacketInfo& packetInfo);
    float calculateFirstAzimuth(unsigned int azIndex);
    float calculateTimestamp(unsigned int tsIndex);
    float calculateDistance(unsigned int distIndex);
    unsigned char calculateReflectivity(unsigned int refIndex);
    unsigned char calculateReturnMode(unsigned int retIndex);
public:
    PacketAnalyzer();
    ~PacketAnalyzer();
    void loadPacket(unsigned char* newPacket);
    std::vector<CartesianPoint> getCartesianPoints();
};

#endif //LASERMAPPINGDRONE_PACKETANALYZER_H