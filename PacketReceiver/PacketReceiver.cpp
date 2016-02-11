//
// Created by marko on 2/5/16.
//

#include "PacketReceiver.h"


PacketReceiver::PacketReceiver() {

};

PacketReceiver::~PacketReceiver() {

};

int PacketReceiver::bindSocket() {
    struct addrinfo hints, *servinfo, *p;
    int rv;

    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC; // set to AF_INET to force IPv4
    hints.ai_socktype = SOCK_DGRAM;
    hints.ai_flags = AI_PASSIVE; // use my IP

    if ((rv = getaddrinfo(NULL, DATAPORT, &hints, &servinfo)) != 0) {
        fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(rv));
        return 1;
    }

    // loop through all the results and bind to the first we can
    for(p = servinfo; p != NULL; p = p->ai_next) {
        if ((sockfd = socket(p->ai_family, p->ai_socktype, p->ai_protocol)) == -1) {
            perror("listener: socket");
            continue;
        }

        if (bind(sockfd, p->ai_addr, p->ai_addrlen) == -1) {
            close(sockfd);
            perror("listener: bind");
            continue;
        }
        break;
    }

    if (p == NULL) {
        fprintf(stderr, "listener: failed to bind socket\n");
        return 2;
    }

    freeaddrinfo(servinfo);
    return 0;
}

/* Pushes the next arriving packet onto the packetQueue */
void PacketReceiver::listenForDataPacket() {
    ssize_t numbytes;
    struct sockaddr_storage their_addr;
    socklen_t addr_len;

    addr_len = sizeof their_addr;
    if ((numbytes = recvfrom(sockfd, dataBuf, DATABUFLEN-1 , 0, (struct sockaddr *)&their_addr, &addr_len)) == -1) {
        perror("recvfrom");
        exit(1);
    }
    packetQueue.push(dataBuf);
}

void PacketReceiver::writePacketToFile(unsigned char* packet, std::string fileName)
{
    std::ofstream file;
    file.open(fileName, std::ios::binary | std::ios::app);
    file.write((char*) &packet[0], DATABUFLEN);
    file.close();
}
