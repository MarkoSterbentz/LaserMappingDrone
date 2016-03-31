//
// Created by marko on 2/5/16.
//

#include "PacketReceiver.h"


PacketReceiver::PacketReceiver() {

};

PacketReceiver::~PacketReceiver() {
    if (outputFile.is_open()) {
        outputFile.close();
    }
    if (inputFile.is_open()) {
        inputFile.close();
    }
};

/* Opens the output file stream in order to save collected packet data. */
void PacketReceiver::openOutputFile(std::string newOutputFileName) {
    if (outputFile.is_open()) {
        outputFile.close();
    }
    outputFileName = newOutputFileName;
    outputFile.open(outputFileName, std::ios::binary | std::ios::app);
}

/* Opens the input file stream in order to read stored packet data. */
void PacketReceiver::openInputFile(std::string newInputFileName) {
    if (inputFile.is_open()) {
        inputFile.close();
    }
    inputFileName = newInputFileName;
    inputFile.open(inputFileName, std::ios::binary | std::ios::app);
}

/* Creates a socket that can listen for incoming data.  */
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

        fcntl(sockfd, F_SETFL, O_NONBLOCK);

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

/* Pushes the next arriving packet onto the packetQueue. */
void PacketReceiver::listenForDataPacket() {
    ssize_t numbytes;
    struct sockaddr_storage their_addr;
    socklen_t addr_len;

    addr_len = sizeof their_addr;
    if ((numbytes = recvfrom(sockfd, dataBuf, DATABUFLEN-1 , 0, (struct sockaddr *)&their_addr, &addr_len)) == -1) {
        //perror("recvfrom");
        //exit(1);
    } else {
        packetQueue.push(dataBuf);
    }
}

/* Writes the given packet data to the current output file. */
void PacketReceiver::writePacketToFile(unsigned char* packet) {
    outputFile.write((char*) &packet[0], DATABUFLEN);
}

/* Read all data packets from the input file into packetQueue. */
void PacketReceiver::readAllDataPacketsFromFile() {

}

/* Reads a given number of packets from the inputFile. */
void PacketReceiver::readDataPacketsFromFile(int numPackets) {
    if (inputFile.is_open()) {
        for (int i = 0; i < numPackets; ++i) {
            readSingleDataPacketFromFile();
//            if (inputFile.eof()) {
//                break;
//            }
        }
    }
}

/* Read a single packet from the input file into packetQueue. */
void PacketReceiver::readSingleDataPacketFromFile() {
    if (inputFile.is_open() && inputFile.read((char*)dataBuf, DATABUFLEN)) {
        packetQueue.push(dataBuf);
        inputFile.seekg(DATABUFLEN, std::ios::cur);   // move the current position in the ifstream to the next packet
    } else {
        std::cout << "No longer reading packets file." << std::endl;
    }
}

/* Getter for packetQueue's size. */
unsigned long PacketReceiver::getPacketQueueSize() {
    return packetQueue.size();
}

/* Getter for the next packet in packetQueue. */
unsigned char* PacketReceiver::getNextQueuedPacket() {
    return packetQueue.front();
}

void PacketReceiver::popQueuedPacket() {
    if (packetQueue.size() > 0) {
        packetQueue.pop();
    }
}
