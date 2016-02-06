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
#include <iostream>

#define DATAPORT "2368"    // the Data Packet is broadcasted to this port
#define POSITIONPORT "8308" // the Position Packet is broadcasted to this port

#define MAXBUFLEN 1249


class PacketReceiver {
private:


public:
    int sockfd;
    unsigned char buf[MAXBUFLEN];

    PacketReceiver();
    ~PacketReceiver();
    int bindSocket();
    void listen();
    void init();
};

#endif //PACKETANALYZER_PACKETRECEIVER_H
