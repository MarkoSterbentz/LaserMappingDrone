#ifndef PACKETANALYZER_PACKETRECEIVER_H
#define PACKETANALYZER_PACKETRECEIVER_H

/**
 * Packet Receiver | Marko Sterbentz 2/5/2016
 * This class will receieve/read data from outside the application.
 * Supported sources include: VeloDyne VLP-16, binary data file
 *
 * Galen Cochrane - Last modified 2016 June 15
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <fcntl.h>
#include <iostream>
#include <fstream>
#include <queue>
#include <string>
#include <stdexcept>

#define DATAPORT "2368"    // the Data Packet is broadcasted to this port
#define POSITIONPORT "8308" // the Position Packet is broadcasted to this port

#define DATABUFLEN 1249  //size of the data packet
#define POSBUFLEN 554   // size of the position packet

namespace LaserMappingDrone {

    enum StreamingMedium {
        VELODYNE, INPUTFILE
    };
    enum OptionsState {
        OFF = -1, UNKNOWN = 0, ON = 1
    };
    enum Options {
        GRAPHICS = 0, STREAM = 1, WRITE = 2, FORWARD = 3
    };

    class PacketReceiver {
    private:
        std::ofstream outputFileStream;
        std::ifstream inputFile;

        std::string outputDataFileName;
        std::string inputDataFileName;
        int sockfd;
        unsigned char dataBuf[DATABUFLEN];
        unsigned char posBuf[POSBUFLEN];
        std::queue<unsigned char*> packetQueue;

        void readSingleDataPacketFromFile();

        int cmdOptions[4];

        StreamingMedium streamMedium;
        int numPacketsToRead;

        int extractIntegerInput(std::string input);

        void getStreamDevice();                                                     // NEEDS TO BE RENAMED
        int getNumberOfPacketsToRead();                                             // NEEDS TO BE RENAMED
        std::string getInputFileName();                                             // NEEDS TO BE RENAMED

    public:
        PacketReceiver();
        ~PacketReceiver();
        void openOutputFile();
        void openInputFile();
        int bindSocket();
        void listenForDataPacket();
        void writePacketToFile(unsigned char* packet);
        bool endOfInputDataFile();
        void readDataPacketsFromFile(int numPackets);

        unsigned long getPacketQueueSize();
        unsigned char* getNextQueuedPacket();
        void popQueuedPacket();

        std::string getOptDesc(int option);
        void enableOption(int option);
        void disableOption(int option);
        void increaseNumPacketsToRead(int num);
        long getFileSize(std::string fileName);

        /* Getters for private variables: */
        bool isOptionSpecified(int option);
        bool isOptionEnabled(int option);
        StreamingMedium getStreamMedium();
        int getNumPacketsToRead();
    };

}

#endif //PACKETANALYZER_PACKETRECEIVER_H
