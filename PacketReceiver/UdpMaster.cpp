//
// Created by adayoldbagel on 2/12/16.
//

#include <SDL_net.h>
#include "UdpMaster.h"

namespace LaserMappingDrone {

    bool UdpMaster::sdlNetHasInitialized = false;
    int UdpMaster::needyMasterCount = 0;

    UdpMaster::UdpMaster() : instanceHasInitialized(false) {

    }

    UdpMaster::~UdpMaster() {
        deInitMaster();
    }

    bool UdpMaster::init() {
        return initMaster();
    }

    std::string UdpMaster::dumpLog() {
        std::string log = errorLog.str();
        errorLog.clear();
        return log;
    }

    std::string UdpMaster::peekLog() {
        return errorLog.str();
    }

    int UdpMaster::sendOne(UDPsocket& localSocket, UDPpacket* packet) {
        // -1 indicates that it is sent only to the address specified in the packet
        int HowManyWereSent = SDLNet_UDP_Send(localSocket, -1, packet);
        if (!HowManyWereSent) {
            errorLog << "Packet was not sent: " << SDLNet_GetError() << std::endl;
            verifyInitStatus();
            if (packet->address.host == 0) {
                errorLog << "[ Packet was to be sent to address 0 - was not set up correctly ]" << std::endl;
            }
            if (packet->address.host == 0) {
                errorLog << "[ Packet was to be sent to port 0 - was not set up correctly ]" << std::endl;
            }
        }
        return HowManyWereSent;
    }

    int UdpMaster::tryReceiveOne(UDPsocket& localSocket, UDPpacket* packet) {
        // 0 if nothing to receive, 1 if received, -1 if error.
        int worked = SDLNet_UDP_Recv(localSocket, packet);
        if (worked == -1) {
            errorLog << "Error receiving packet: " << SDLNet_GetError() << std::endl;
            verifyInitStatus();
        }
        return worked;
    }

    bool UdpMaster::initMaster() {
        if (instanceHasInitialized) {
            return true;
        }
        if (!sdlNetHasInitialized) {
            if (SDLNet_Init() == -1) {
                errorLog << "Could not initialized UdpMaster object because SDL_Net could not initialize: "
                         << SDLNet_GetError() << std::endl;
                return false;
            }
            sdlNetHasInitialized = true;
        }
        needyMasterCount += 1;
        instanceHasInitialized = true;
        return true;
    }

    bool UdpMaster::deInitMaster() {
        if (!instanceHasInitialized) {
            return false;
        }
        instanceHasInitialized = false;
        needyMasterCount -= 1;
        if (sdlNetHasInitialized && needyMasterCount <= 0) {
            SDLNet_Quit();
            sdlNetHasInitialized = false;
            needyMasterCount = 0;
            return true;
        }
        return false;
    }

    void UdpMaster::verifyInitStatus() {
        if (!instanceHasInitialized) {
            errorLog << "[ This instance of UdpMaster has not been initialized! ]" << std::endl;
        }
    }

    bool UdpMaster::openLocalSocket(UDPsocket& localSocket, uint16_t port /* = 0 */) {
//        SDLNet_UDP_Close(localSocket);
        localSocket = SDLNet_UDP_Open(port);
        if (!localSocket) {
            errorLog << "Failed to open local socket: " << SDLNet_GetError() << std::endl;
            verifyInitStatus();
            return false;
        }
        return true;
    }

    bool UdpMaster::openRemoteSocket(IPaddress& remoteSocket, uint16_t port, const std::string &host) {
        if (SDLNet_ResolveHost(&remoteSocket, host.c_str(), port) == -1) {
            errorLog << "Failed to resolve host: " << SDLNet_GetError() << std::endl;
            verifyInitStatus();
            return false;
        }
        return true;
    }

    bool UdpMaster::setUpPacket(UDPpacket* packet, uint32_t packetSize, const IPaddress& targetRemoteSocket) {
        if (setUpPacket(packet, packetSize)) {
            return false;
        }
        packet->address.host = targetRemoteSocket.host;
        packet->address.port = targetRemoteSocket.port;
        return true;
    }

    bool UdpMaster::setUpPacket(UDPpacket* packet, uint32_t packetSize) {
//        SDLNet_FreePacket(packet);
        packet = SDLNet_AllocPacket(packetSize);
        if (packet == nullptr) {
            errorLog << "Packet allocation failed : " << SDLNet_GetError() << std::endl;
            verifyInitStatus();
            return false;
        }
        packet->address.host = 0;
        packet->address.port = 0;
        return true;
    }

    void UdpMaster::freePacket(UDPpacket* packet) {
        SDLNet_FreePacket(packet);
    }

    void UdpMaster::closeLocalSocket(UDPsocket& localSocket) {
        SDLNet_UDP_Close(localSocket);
    }


    UdpListener::UdpListener(const packetReceptionCallback& receive)
            : receive(receive), hasInitialized(false) { }

    UdpListener::~UdpListener() {
        if (hasInitialized) {
            master.freePacket(packet);
            master.closeLocalSocket(localSocket);
        }
    }

    bool UdpListener::init(uint16_t port, uint32_t packetSize) {
        if (hasInitialized) {
            return false;
        }
        if (! master.init()){
            return false;
        }
        if (! master.openLocalSocket(localSocket, port)) {
            return false;
        }
        if (! master.setUpPacket(packet, packetSize)) {
            return false;
        }
        hasInitialized = true;
        return true;

    }

    int UdpListener::processNewPackets(void* userData /* = NULL */) {
        int receivedOne;
        int totalReceived = 0;
        do {
            receivedOne = master.tryReceiveOne(localSocket, packet);
            if (receivedOne < 0) {
                return receivedOne;
            }
            totalReceived += receivedOne;
        } while (receivedOne > 0);
        return totalReceived;
    }

    std::string UdpListener::dumpLog() {
        return master.dumpLog();
    }

    std::string UdpListener::peekLog() {
        return master.peekLog();
    }


}