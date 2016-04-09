//
// Created by marko on 2/5/16.
//

#include "PacketReceiver.h"


PacketReceiver::PacketReceiver() {
    graphicsModeEnabled = false;
    streamModeEnabled = false;
    writeModeEnabled = false;
};

PacketReceiver::~PacketReceiver() {
    if (outputFileStream.is_open()) {
        outputFileStream.close();
    }
    if (inputFile.is_open()) {
        inputFile.close();
    }
};

/* Opens the output file stream in order to save collected packet data. */
void PacketReceiver::openOutputFile() {
    if (outputFileStream.is_open()) {
        outputFileStream.close();
    }
    if (!outputDataFileName.empty()) {
        outputFileStream.open(outputDataFileName, std::ios::binary | std::ios::app);
    } else {
        std::cout << "There is no output data file selected." << std::endl;
    }

}

/* Opens the input file stream in order to read stored packet data. */
void PacketReceiver::openInputFile() {
    if (inputFile.is_open()) {
        inputFile.close();
    }
    if (!inputDataFileName.empty()) {
        inputFile.open(inputDataFileName, std::ios::binary | std::ios::app);
    } else {
        std::cout << "There is no input data file selected." << std::endl;
    }

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
    outputFileStream.write((char*) &packet[0], DATABUFLEN);
}

/* Reads a given number of packets from the inputFile. */
void PacketReceiver::readDataPacketsFromFile(int numPackets) {
    if (inputFile.is_open()) {
        for (int i = 0; i < numPackets; ++i) {
            readSingleDataPacketFromFile();
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

/* Returns a boolean of whether or not end of the data file has been reached. */
bool PacketReceiver::endOfInputDataFile() {
    return inputFile.eof();
}

/* Getter for packetQueue's size. */
unsigned long PacketReceiver::getPacketQueueSize() {
    return packetQueue.size();
}

/* Getter for the next packet in packetQueue. */
unsigned char* PacketReceiver::getNextQueuedPacket() {
    return packetQueue.front();
}

/* Removes the next packet in the packetQueue. */
void PacketReceiver::popQueuedPacket() {
    if (packetQueue.size() > 0) {
        packetQueue.pop();
    }
}

// METHODS FROM MAIN.CPP
/* Handles necessary functions associated with enabling graphics mode. */
void PacketReceiver::enableGraphicsMode() {
    graphicsModeEnabled = true;
    std::cout << "Graphical display ENABLED." << std::endl;
}

/* Handles necessary functions associated with disabling graphics mode. */
void PacketReceiver::disableGraphicsMode() {
    graphicsModeEnabled = false;
    std::cout << "Graphical display DISABLED" << std::endl;
}

/* Handles necessary functions associated with enabling stream mode. */
void PacketReceiver::enableStreamMode() {
    streamModeEnabled = true;
    std::cout << "Data streaming ENABLED." << std::endl;
    getStreamDevice();
}

/* Handles necessary functions associated with disabling stream mode. */
void PacketReceiver::disableStreamMode() {
    streamModeEnabled = false;
    std::cout << "Data streaming DISABLED." << std::endl;
}

/* Prompts the user for the desired method of streaming. */
void PacketReceiver::getStreamDevice() {
    int inputInt = -1;
    while (inputInt == -1) {
        std::cout << "Select the device you are streaming data from (enter the associated number):" << std::endl;
        std::cout << "1. Velodyne" << std::endl;
        std::cout << "2. File" << std::endl;
        std::string input;
        std::getline(std::cin, input);
        inputInt = extractIntegerInput(input);
        switch (inputInt) {
            case (1): {
                streamMedium = Velodyne;
                std::cout << "Selected streaming medium: VELODYNE." << std::endl;
                break;
            }
            case (2): {
                streamMedium = file;
                std::cout << "Selected streaming medium: FILE." << std::endl;
                inputDataFileName = getInputFileName();
                numPacketsToRead = getNumberOfPacketsToRead();
                break;
            }
            default: {
                std::cout << "Invalid input. Please select a valid number." << std::endl;
                inputInt = -1;
                break;
            }
        }
    }
}

/* Prompts user for the desired number of packets to be read from the input file. */
int PacketReceiver::getNumberOfPacketsToRead() {
    std::cout << "How many packets should be read in from this file?" << std::endl;
    std::string input;
    std::getline(std::cin, input);
    int count = extractIntegerInput(input);
    if (count < 1) {
        count = 0;
    }
    std::cout << count<< " packets will be read from the file." << std::endl;
    return count;
}

/* Converts a string to an int with necessary exception handling. */
int PacketReceiver::extractIntegerInput(std::string input) {
    int ret = -1;
    try {
        ret = std::stoi(input);
    } catch (const std::invalid_argument& ia) {
        std::cout << "Invalid input. Please select a valid number." << std::endl;
    } catch (const std::out_of_range& oor) {
        std::cout << "Input was out of range. Please select a valid number." << std::endl;
    }
    return ret;
}

/* Prompts the user for the input file they would like to use. */
std::string PacketReceiver::getInputFileName() {
    std::string name = "";
    std::cout << "Please enter the name of the file to use (be sure to include .dat): " << std::endl;
    std::getline(std::cin, name);
    long numBytes = getFileSize(name);
    std::cout << "The file \"" << name << "\" (" << numBytes << " bytes | " << numBytes/1206 << " packets) " << "will be used as input." << std::endl;
    return name;
}

/* Returns the size of the given file in bytes. */
long PacketReceiver::getFileSize(std::string fileName) {
    std::ifstream in(fileName, std::ios::binary | std::ios::ate);
    return in.tellg();
}

/* Handles necessary functions associated with enabling write mode. */
void PacketReceiver::enableWriteMode() {
    writeModeEnabled = true;
    std::cout << "Data writing ENABLED." << std::endl;
    std::cout << "What would you like to name the output data file? ";
    std::getline(std::cin, outputDataFileName);
    outputDataFileName.append(".dat");
    std::cout << "Data will be written to: " << outputDataFileName << std::endl;
}

/* Handles necessary functions associated with disabling write mode. */
void PacketReceiver::disableWriteMode() {
    writeModeEnabled = false;
    std::cout << "Data writing DISABLED." << std::endl;
}

/* Used to read more of the input data file. */
void PacketReceiver::increaseNumPacketsToRead(int num) {
    numPacketsToRead += num;
}

/*********************************************************************************
 * GETTERS FOR PACKETRECEIVER
 ********************************************************************************/
bool PacketReceiver::isGraphicsModeEnabled() {
    return graphicsModeEnabled;
}

bool PacketReceiver::isWriteModeEnabled() {
    return writeModeEnabled;
}

bool PacketReceiver::isStreamModeEnabled() {
    return streamModeEnabled;
}

StreamingMedium PacketReceiver::getStreamMedium() {
    return streamMedium;
}

int PacketReceiver::getNumPacketsToRead() {
    return numPacketsToRead;
}


