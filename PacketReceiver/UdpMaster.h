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

        bool init();

        bool send();
        void receiveOne();

    private:

        static bool sdlNetHasInitialized;
        static int needyMasterCount;

        UDPsocket localSocket;
        IPaddress remoteSocket;
        UDPpacket *packet;
        std::stringstream errorLog;

        // todo: go into inheriting classes
        bool initListener(const std::string &localIp, uint16_t localPort, uint32_t packetSize);
        bool initSender(const std::string &remoteIp, uint16_t remotePort, uint32_t packetSize);
        bool initTwoWay(const std::string &remoteIp, uint16_t remotePort,
                        uint16_t localPort,
                        uint32_t packetSize);

        bool initSdlNetIfNotDone();
        bool quitSdlNetIfUnused();
        bool setUpPacket(uint32_t packetSize);
        bool openLocalSocket(uint16_t port);
        bool openRemoteSocket(const std::string &host, uint16_t port);
        void freeResources();
    };

    UdpMaster udpConnection;
}

#endif //LASERMAPPINGDRONE_UDPCONNECTION_H
