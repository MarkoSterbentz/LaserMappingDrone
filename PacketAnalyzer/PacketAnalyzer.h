
#ifndef LASERMAPPINGDRONE_PACKETANALYZER_H
#define LASERMAPPINGDRONE_PACKETANALYZER_H

/*********************************************************************
 * PACKET ANALYZER | Marko Sterbentz
 * This class is designed to take in a packet or series of packets output
 * from the VeloDyne VLP-16 and convert it to a variety of useful three
 * dimensional data points.
 */

#include <cmath>
#include <iostream>
#include <vector>

struct CartesianPoint {
    double x;
    double y;
    double z;
};

struct ChannelInfo {
    double distance;
    double reflectivity;
};

struct DataBlockInfo {
    float azimuth1; // for the first firing sequence
    float azimuth2; // for the second firing sequence
    ChannelInfo channels[32];
};

struct DataPacketInfo {
    DataBlockInfo blocks[12];
    double timestamp;
    unsigned returnMode;
};

struct PositionPacketInfo {
    // needs to be implemented...
};

/******************ANALYZER HEADER*********************/
class PacketAnalyzer {
private:
    unsigned char* currentPacket;

public:
    PacketAnalyzer();
    ~PacketAnalyzer();
    void loadPacket(unsigned char* newPacket);
    // THESE NEED TO BE MADE PRIVATE AFTER TESTING!
    CartesianPoint getXYZ(float distance, float elevationAngle, float azimuth);
    PositionPacketInfo extractPositionPacketInfo();
    DataPacketInfo extractDataPacketInfo();
    DataBlockInfo extractDataBlockInfo(unsigned int dbIndex);
    ChannelInfo extractChannelInfo(unsigned int chIndex);
    void interpolateSecondAzimuth(DataPacketInfo& packetInfo);
    float calculateFirstAzimuth(unsigned int azIndex);
    double calculateTimestamp(unsigned int tsIndex);
    double calculateDistance(unsigned int distIndex);
    unsigned char calculateReflectivity(unsigned int refIndex);
    unsigned char calculateReturnMode(unsigned int retIndex);
};

#endif //LASERMAPPINGDRONE_PACKETANALYZER_H