//
// Created by adayoldbagel on 2/12/16.
//

#ifndef LASERMAPPINGDRONE_UDPCONNECTION_H
#define LASERMAPPINGDRONE_UDPCONNECTION_H

#include <stdint.h>
#include <string>
#include <sstream>
#include <iostream>
#include "SDL_net.h"

namespace LaserMappingDrone {
    class UdpMaster
    {
    public:
        UdpMaster();
        ~UdpMaster();
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
        static bool sdlNetHasInitialized;
        static int needyMasterCount;

        bool initSdlNetIfNeeded();
        bool quitSdlNetIfUnused();
        bool allocPacket(uint32_t packetSize);
        bool openPort(uint16_t port);
        bool setUpPort(const std::string &ip, uint16_t port);
        void freeResources();
    };

    UdpMaster udpConnection;
}

#endif //LASERMAPPINGDRONE_UDPCONNECTION_H
