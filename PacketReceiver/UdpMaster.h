//
// Created by adayoldbagel on 2/12/16.
//

#ifndef LASERMAPPINGDRONE_UDPCONNECTION_H
#define LASERMAPPINGDRONE_UDPCONNECTION_H

#include <stdint.h>
#include <string>
#include <sstream>
#include <iostream>
#include <functional>
#include "SDL_net.h"

namespace LaserMappingDrone {

    class UdpMaster
    {
    public:

        UdpMaster();
        bool init();
        bool openLocalSocket(UDPsocket& localSocket, uint16_t port = 0);
        bool openRemoteSocket(IPaddress& remoteSocket, uint16_t port, const std::string &host);
        bool setUpPacket(UDPpacket* packet, uint32_t packetSize, const IPaddress& targetRemoteSocket);
        bool setUpPacket(UDPpacket* packet, uint32_t packetSize);

        int sendOne(UDPsocket& localSocket, UDPpacket* packet);
        int tryReceiveOne(UDPsocket& localSocket, UDPpacket* packet);
        std::string dumpLog();
        std::string peekLog();

        void freePacket(UDPpacket* packet);
        void closeLocalSocket(UDPsocket& localSocket);
        ~UdpMaster();

    private:

        static bool sdlNetHasInitialized;
        static int needyMasterCount;
        bool instanceHasInitialized;
        std::stringstream errorLog;
        bool initMaster();
        bool deInitMaster();
        void verifyInitStatus();
    };


    typedef std::function<void(UDPpacket*, void*)> packetReceptionCallback;
    typedef void(*packetReceptionCallbackPtr)(UDPpacket*, void*);

    class UdpListener {
    public:

        UdpListener(const packetReceptionCallback& receive);
        ~UdpListener();
        bool init(uint16_t port, uint32_t packetSize);
        int processNewPackets(void* userData = NULL);
        std::string dumpLog();
        std::string peekLog();

    private:

        UdpMaster master;
        UDPsocket localSocket;
        UDPpacket* packet;
        packetReceptionCallback receive;
        bool hasInitialized;

    };
}

#endif //LASERMAPPINGDRONE_UDPCONNECTION_H
