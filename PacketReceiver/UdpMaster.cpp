//
// Created by adayoldbagel on 2/12/16.
//

#include "UdpMaster.h"

namespace LaserMappingDrone {

    bool UdpMaster::sdlNetHasInitialized = false;
    int UdpMaster::needyMasterCount = 0;

    UdpMaster::UdpMaster() {

    }

    UdpMaster::~UdpMaster() {
        freeResources();
        quitSdlNetIfUnused();
    }

    bool UdpMaster::init() {
        return false;
    }

    bool UdpMaster::initListener(const std::string &localIp, uint16_t localPort, uint32_t packetSize) {
        return false;
    }

    bool UdpMaster::initSender(const std::string &remoteIp, uint16_t remotePort, uint32_t packetSize) {
        return false;
    }

    bool UdpMaster::initTwoWay(const std::string &remoteIp, uint16_t remotePort,
                                   uint16_t localPort,
                                   uint32_t packetSize)
    {
        freeResources();
        initSdlNetIfNotDone();
        if (!openLocalSocket(localPort)) {
            return false;
        }
        if (!openRemoteSocket(remoteIp, remotePort)) {
            return false;
        }
        return setUpPacket(packetSize);
    }

    bool UdpMaster::initSdlNetIfNotDone() {
        needyMasterCount += 1;
        if (!sdlNetHasInitialized) {
            if (SDLNet_Init() == -1) {
                std::cout << "SDL_Net could not initialize: " << SDLNet_GetError() << std::endl;
                return false;
            }
            sdlNetHasInitialized = true;
        }
        return true;
    }

    bool UdpMaster::quitSdlNetIfUnused() {
        needyMasterCount -= 1;
        if (sdlNetHasInitialized && needyMasterCount <= 0) {
            SDLNet_Quit();
            sdlNetHasInitialized = false;
            needyMasterCount = 0;
            return true;
        }
        return false;
    }

    bool UdpMaster::setUpPacket(uint32_t packetSize) {
        // free old packet memory
        SDLNet_FreePacket(packet);
        // allocate new packet memory
        packet = SDLNet_AllocPacket(packetSize);
        if (packet == nullptr) {
            std::cout << "\tSDLNet_AllocPacket failed : " << SDLNet_GetError() << std::endl;
            return false;
        }
        packet->address.host = remoteSocket.host;
        packet->address.port = remoteSocket.port;
        return true;
    }

    bool UdpMaster::openLocalSocket(uint16_t port) {
        localSocket = SDLNet_UDP_Open(port);
        if (!localSocket) {
            std::cout << "Failed to open local socket: " << SDLNet_GetError() << std::endl;
            return false;
        }
        return true;
    }

    bool UdpMaster::openRemoteSocket(const std::string &host, uint16_t port) {
        if (SDLNet_ResolveHost(&remoteSocket, host.c_str(), port) == -1) {
            std::cout << "Failed to resolve host: " << SDLNet_GetError() << std::endl;
            return false;
        }
        return true;
    }

    bool UdpMaster::send() {
        // returns number of packets sent - 0 is error.
        if (SDLNet_UDP_Send(localSocket, -1, packet) == 0 ) {
            std::cout << "Failed to send packet: " << SDLNet_GetError() << "\n";
            return false;
        }
        return true;
    }

    void UdpMaster::receiveOne()
    {
        if (SDLNet_UDP_Recv(localSocket, packet)) {
            std::cout << "Packet received: " << packet->data << "\n";\
        }
    }

    void UdpMaster::freeResources() {
        SDLNet_FreePacket(packet);
        packet = NULL;
    }

}
