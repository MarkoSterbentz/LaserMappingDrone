//
// Created by adayoldbagel on 2/12/16.
//

#include "UdpConnection.h"

namespace LaserMappingDrone {

    UdpConnection::UdpConnection() {
        hasInitialized = false;
    }

    UdpConnection::~UdpConnection() {
        freeResources();
        SDLNet_Quit();
    }

    bool UdpConnection::initListener(const std::string &localIp, uint16_t localPort, uint32_t packetSize) {
        return false;
    }

    bool UdpConnection::initSender(const std::string &remoteIp, uint16_t remotePort, uint32_t packetSize) {
        return false;
    }

    bool UdpConnection::initTwoWay(const std::string &remoteIp, uint16_t remotePort,
                                   uint16_t localPort,
                                   uint32_t packetSize) {
        if (hasInitialized) {
            freeResources();
        }

        bool worked = true;
        worked &= initSdlNet();
        worked &= openPort(localPort);
        worked &= setUpPort(remoteIp, remotePort);
        worked &= allocPacket(packetSize);

        hasInitialized = worked;
        return worked;
    }

    bool UdpConnection::initSdlNet() {
        if (SDLNet_Init() == -1) {
            std::cout << "SDL_Net could not initialize: " << SDLNet_GetError() << std::endl;
            return false;
        }
        return true;
    }

    bool UdpConnection::allocPacket(uint32_t packetSize) {
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

    bool UdpConnection::openPort(uint16_t port) {
        socket = SDLNet_UDP_Open(port);
        if (!socket) {
            std::cout << "Failed to open socket: " << SDLNet_GetError() << std::endl;
            return false;
        }
        return true;
    }

    bool UdpConnection::setUpPort(const std::string &ip, uint16_t port) {
        if (SDLNet_ResolveHost(&serverIP, ip.c_str(), port) == -1) {
            std::cout << "Failed to resolve host: " << SDLNet_GetError() << std::endl;
            return false;
        }
        return true;
    }

    bool UdpConnection::send() {
        // returns number of packets sent - 0 is error.
        if (SDLNet_UDP_Send(socket, -1, packet) == 0 ) {
            std::cout << "Failed to send packet: " << SDLNet_GetError() << "\n";
            return false;
        }
        return true;
    }

    void UdpConnection::recv()
    {
        if (SDLNet_UDP_Recv(socket, packet)) {
            std::cout << "Packet received: " << packet->data << "\n";\
        }
    }

    void UdpConnection::freeResources() {
        SDLNet_FreePacket(packet);
    }
}
