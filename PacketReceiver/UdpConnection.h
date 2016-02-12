//
// Created by adayoldbagel on 2/12/16.
//

#ifndef LASERMAPPINGDRONE_UDPCONNECTION_H
#define LASERMAPPINGDRONE_UDPCONNECTION_H

#include <stdint.h>
#include <string>
#include <iostream>
#include "SDL_net.h"

namespace LaserMappingDrone {
    struct UdpConnection
    {
        UdpConnection();
        ~UdpConnection();
        bool initListener(const std::string &localIp, uint16_t localPort, uint32_t packetSize);
        bool initSender(const std::string &remoteIp, uint16_t remotePort, uint32_t packetSize);
        bool initTwoWay(const std::string &remoteIp, uint16_t remotePort,
                        uint16_t localPort,
                        uint32_t packetSize);
        bool send();
        void recv();

    private:
        UDPsocket socket;
        IPaddress serverIP;
        UDPpacket *packet;
        bool hasInitialized;

        bool initSdlNet();
        bool allocPacket(uint32_t packetSize);
        bool openPort(uint16_t port);
        bool setUpPort(const std::string &ip, uint16_t port);
        void freeResources();
    };

    UdpConnection udpConnection;
}

#endif //LASERMAPPINGDRONE_UDPCONNECTION_H
