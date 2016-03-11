//
// Created by marko sterbentz on 2/5/16.
//

#ifndef PACKETANALYZER_PACKETRECEIVER_H
#define PACKETANALYZER_PACKETRECEIVER_H

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

#define DATAPORT "2368"    // the Data Packet is broadcasted to this port
#define POSITIONPORT "8308" // the Position Packet is broadcasted to this port

#define DATABUFLEN 1249  //size of the data packet
#define POSBUFLEN 554   // size of the position packet


class PacketReceiver {
private:
    std::ofstream file;
    int sockfd;

public:
    unsigned char dataBuf[DATABUFLEN];
    unsigned char posBuf[POSBUFLEN];
    std::queue <unsigned char*> packetQueue;
    std::string filename;

    PacketReceiver(std::string outputFileName);
    ~PacketReceiver();
    int bindSocket();
    void listenForDataPacket();
    void writePacketToFile(unsigned char* packet);
};

#endif //PACKETANALYZER_PACKETRECEIVER_H
