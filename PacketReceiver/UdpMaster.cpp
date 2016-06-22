//
// Created by adayoldbagel on 2/12/16.
//

#include "UdpMaster.h"

namespace LaserMappingDrone {

    bool UdpMaster::sdlNetHasInitialized = false;
    int UdpMaster::needyMasterCount = 0;

    UdpMaster::UdpMaster() {
        hasInitialized = false;
    }

    UdpMaster::~UdpMaster() {
        freeResources();
        quitSdlNetIfUnused();
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
        initSdlNetIfNeeded();
        if (hasInitialized) {
            freeResources();
        }
        if (!openPort(localPort)) {
            return false;
        }
        if (!setUpPort(remoteIp, remotePort)) {
            return false;
        }
        if (!allocPacket(packetSize)) {
            return false;
        }

        hasInitialized = true;
        return true;
    }

    bool UdpMaster::initSdlNetIfNeeded() {
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

    bool UdpMaster::allocPacket(uint32_t packetSize) {
        // free old packet memory
        SDLNet_FreePacket(packet);
        // allocate new packet memory
        packet = SDLNet_AllocPacket(packetSize);
        if (packet == nullptr) {
            std::cout << "\tSDLNet_AllocPacket failed : " << SDLNet_GetError() << std::endl;
            return false;
        }
        packet->address.host = serverIP.host;
        packet->address.port = serverIP.port;
        return true;
    }

    bool UdpMaster::openPort(uint16_t port) {
        socket = SDLNet_UDP_Open(port);
        if (!socket) {
            std::cout << "Failed to open socket: " << SDLNet_GetError() << std::endl;
            return false;
        }
        return true;
    }

    bool UdpMaster::setUpPort(const std::string &ip, uint16_t port) {
        if (SDLNet_ResolveHost(&serverIP, ip.c_str(), port) == -1) {
            std::cout << "Failed to resolve host: " << SDLNet_GetError() << std::endl;
            return false;
        }
        return true;
    }

    bool UdpMaster::send() {
        // returns number of packets sent - 0 is error.
        if (SDLNet_UDP_Send(socket, -1, packet) == 0 ) {
            std::cout << "Failed to send packet: " << SDLNet_GetError() << "\n";
            return false;
        }
        return true;
    }

    void UdpMaster::recv()
    {
        if (SDLNet_UDP_Recv(socket, packet)) {
            std::cout << "Packet received: " << packet->data << "\n";\
        }
    }

    void UdpMaster::freeResources() {
        SDLNet_FreePacket(packet);
    }

}
