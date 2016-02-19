//
// Created by Galen on 1/13/16.
//

#include <iostream>
#include <SDL_timer.h>
#include <SDL_events.h>
#include <SDL_thread.h>

#include "Graphics.h"
#include "Grid.h"
#include "GridDrawer.h"
#include "readerwriterqueue.h"
#include "PacketAnalyzer.h"
#include "PacketReceiver.h"

#define SCROLL_ZOOM_SENSITIVITY 0.08f
#define KEY_ZOOM_EXTRA_SENSITIVITY 0.005f
#define KEY_MOVE_SENSITIVITY 0.2f
#define DATAFILE "dataOutputFile.dat"
#define POSFILE "positionOutputFile.dat"

using namespace LaserMappingDrone;

// These regard the handling of incoming data from the LIDAR device
PacketAnalyzer* analyzer;
PacketReceiver* receiver;
bool packetHandlerQuit;

// The grid and drawer
// constructor min/max arguments are in meters (the LIDAR device is at the origin)
Grid<CartesianPoint> grid(-1.f, 1.f, -1.f, 1.f, 10, 10, 1000000);
GridDrawer<CartesianPoint> gridDrawer;

// The graphics backend
Graphics graphics;

// This is a thread safe queue designed for one producer and one consumer
moodycamel::ReaderWriterQueue<CartesianPoint> queue(10000);

// Some things helpful to controls
long double zoomLevel;
unsigned previousTime, currentTime, deltaTime; // Used to regulate controls time step

// prototypes
void mainLoop();
int handleControls();
int listeningThreadFunction(void* listeningThreadData);

int main(int argc, char* argv[]) {

    int kernelError = grid.specifyStdDevKernel({
            0, 1, 0,
            1, 1, 1,
            0, 1, 0,
    });
    if (kernelError) {
        std::cout << "KERNEL FAILURE!\n";
    }

    zoomLevel = 0.01f;
    std::stringstream log;
    if (!graphics.init(log)) { // if init fails, exit
        std::cout << log.str();
        return 1;
    }
    std::cout << log.str();
    std::cout << gridDrawer.init(graphics.getAspectRatio(), &grid);

    #ifdef BENCHMARK_QUADTREE_POINT_INSERTION
	// Benchmark point insertion
	quadTree.setMaxPointsPerNode(50);
    float invPi = 1.f / 3.14159265358979f;
    float startTime = SDL_GetTicks();
    for (unsigned i = 0; i < 1000000; ++i) {
        quadTree.addPoint({(float)i * (float)sin(i * invPi) * 0.1f, (float)i * (float)cos(i * invPi) * 0.1f});
    }
    std::cout << SDL_GetTicks() - startTime;
    #endif

    // packet handler setup
    receiver = new PacketReceiver();
    receiver->bindSocket();
    analyzer = new PacketAnalyzer();

    // spawn the listening thread, passing it information in "data"
    packetHandlerQuit = false;
    SDL_Thread* listeningThread = SDL_CreateThread (listeningThreadFunction, "listening thread", NULL);

    // begin the main loop on this thread
    mainLoop();

    // once the main loop has exited, set the listening thread's "quit" to true and wait for the thread to die.
    packetHandlerQuit = true;
    SDL_WaitThread(listeningThread, NULL);

    // free packet handler memory
    delete analyzer;
    delete receiver;

    return 0;
}

void mainLoop() {
    previousTime = SDL_GetTicks();
    bool loop = true;
    while (loop) {
        CartesianPoint p;
        while(queue.try_dequeue(p)) {
            grid.addPoint(p);
        }

        /**************************** HANDLE CONTROLS ********************************/
        int timeToQuit = handleControls(); // returns non-zero if quit events happen
        if (timeToQuit) {
            loop = false;
        }

        /**************************** DO THE DRAWING *********************************/
        // draw the tree
//        treeDrawer.drawQuadTree(quadTree, (float) zoomLevel);
        // draw the grid
        gridDrawer.drawGrid();
        // update the screen
        graphics.render();
    }
}

// This function runs inside the listeningThread.
int listeningThreadFunction(void* arg) {
    std::cout << "\nPacket handling thread is active.\n";
    while (!packetHandlerQuit) {
        /*************************** HANDLE PACKETS *********************************/
        for (unsigned i = 0; i < 10; ++i) {
            receiver->listenForDataPacket(); // make sure to take the lack of UDP header into account
            if (receiver->packetQueue.size() > 0) {
//                receiver->writePacketToFile(receiver->packetQueue.front(), DATAFILE);
                analyzer->loadPacket(receiver->packetQueue.front());

                std::vector<CartesianPoint> newPoints(analyzer->getCartesianPoints());
                for (unsigned j = 0; j < newPoints.size(); ++j) {
                    queue.enqueue(newPoints[j]);
                }
            }
        }
    }
    std::cout << "Packet handling thread is dying.\n";
    return 0;
}

int handleControls() {
    /**************************** HANDLE EVENTS *********************************/
    SDL_Event event;
    while (SDL_PollEvent(&event)) { // process all accumulated events
        if (event.type == SDL_QUIT) { // quit events (like if you press the x)
            return 1;
        } else if (event.type == SDL_KEYDOWN) { // keydown events (generated only once per key press)
            switch (event.key.keysym.sym) {
                case SDLK_ESCAPE:
                    return 1;
                default:
                    break;
            }
        } else if (event.type == SDL_MOUSEBUTTONDOWN) {
            if (event.button.button == SDL_BUTTON_LEFT) {   // add point to grid
                float xPos = (float)event.button.x / (graphics.getResX() * 0.5f) - 1.0f;
                float yPos = -(float)event.button.y / (graphics.getResY() * 0.5f) + 1.0f;
                glm::dmat4 invMat = glm::inverse(gridDrawer.getTransformMat());
                glm::dvec4 scrSpaceClick(xPos, yPos, 0.0, 1.0);
                glm::dvec4 gridSpaceClick = invMat * scrSpaceClick;
                grid.addPoint({(float) gridSpaceClick.x, (float) gridSpaceClick.y, 0.f});
            }
        } else if (event.type == SDL_MOUSEWHEEL) {
            int xPosInt, yPosInt;
            SDL_GetMouseState(&xPosInt, &yPosInt);
            float xPos = (float)xPosInt / (graphics.getResX() * 0.5f) - 1.0f;
            float yPos = -(float)yPosInt / (graphics.getResY() * 0.5f) + 1.0f;
            glm::dvec4 scrSpacePos(xPos, yPos, 0.0, 1.0);
            float zoomSpeed = 1.f + event.wheel.y * SCROLL_ZOOM_SENSITIVITY;
            zoomLevel /= zoomSpeed;
            gridDrawer.zoomAtPoint((float)scrSpacePos.x, (float)scrSpacePos.y, zoomSpeed);
        }
    }
    /**************************** HANDLE KEY STATE *********************************/
    // Determine the time step since last time
    currentTime = SDL_GetTicks();
    deltaTime = currentTime - previousTime;
    previousTime = currentTime;
    // Get current keyboard state ( this is used for smooth controls rather than key press event controls above )
    const Uint8* keyStates = SDL_GetKeyboardState(NULL);
    float moveSpeed = KEY_MOVE_SENSITIVITY * deltaTime;
    // apply movement according to which keys are down
    if (keyStates[SDL_SCANCODE_UP]) {
        gridDrawer.translate(0.0f, -moveSpeed * gridDrawer.getMovementScaleY() * (float) zoomLevel);
    }
    if (keyStates[SDL_SCANCODE_DOWN]) {
        gridDrawer.translate(0.0f, moveSpeed * gridDrawer.getMovementScaleY() * (float) zoomLevel);
    }
    if (keyStates[SDL_SCANCODE_LEFT]) {
        gridDrawer.translate(moveSpeed * gridDrawer.getMovementScaleX() * (float) zoomLevel, 0.0f);
    }
    if (keyStates[SDL_SCANCODE_RIGHT]) {
        gridDrawer.translate(-moveSpeed * gridDrawer.getMovementScaleX() * (float) zoomLevel, 0.0f);
    }
    if (keyStates[SDL_SCANCODE_LSHIFT]) {
        float zoomSpeed = 1.f + moveSpeed * KEY_ZOOM_EXTRA_SENSITIVITY;
        zoomLevel /= zoomSpeed;
        gridDrawer.scale(zoomSpeed, zoomSpeed);
    }
    if (keyStates[SDL_SCANCODE_LCTRL]) {
        float zoomSpeed = 1.f - moveSpeed * KEY_ZOOM_EXTRA_SENSITIVITY;
        zoomLevel /= zoomSpeed;
        gridDrawer.scale(zoomSpeed, zoomSpeed);
    }
    return 0;
}