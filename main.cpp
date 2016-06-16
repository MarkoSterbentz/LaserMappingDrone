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
#include "Camera.h"
#include "readerwriterqueue.h"
#include "PacketAnalyzer.h"
#include "PacketReceiver.h"

#define EIGEN_STACK_ALLOCATION_LIMIT 200000
#include "ICP.h"

#define KEY_MOVE_SENSITIVITY 100.f
#define KEY_ROTATE_SENSITIVITY 0.01f
#define MOUSE_SENSITIVITY_X -0.006f
#define MOUSE_SENSITIVITY_Y 0.006f
#define MOUSE_SENSITIVITY_WHEEL -800.f
#define MOUSE_SENSITIVITY_PAN 10.f

using namespace LaserMappingDrone;

struct ListeningThreadData {
    PacketReceiver* receiver;
    PacketAnalyzer* analyzer;
    bool packetHandlerQuit;
};

// The grid and drawer
// constructor min/max arguments are in millimeters (the LIDAR device is at the origin)
// Arguments are: minX, maxX, minY, maxY, resX, resY, max number of points present
Grid<CartesianPoint> grid(-3000.f, 3000.f, -3000.f, 3000.f, 10, 10, 100000);
GridDrawer<CartesianPoint> gridDrawer;

// The graphics backend
Graphics graphics;

// This is a thread safe queue designed for one producer and one consumer
moodycamel::ReaderWriterQueue<CartesianPoint> queue(10000);

// Some things helpful to controls
unsigned previousTime, currentTime, deltaTime; // Used to regulate controls time step

// prototypes
void mainLoop(PacketReceiver& receiver, Camera& camera);
void initPacketHandling(ListeningThreadData& ltd, SDL_Thread** packetListeningThread);
void stopPacketHandling(ListeningThreadData& ltd, SDL_Thread** packetListeningThread);
void initKernel();
bool flagIsValid(char flag);
void checkOptionInput(char &input, PacketReceiver &receiver, int option);
int handleCommandLineFlags(int argc, char* argv[], PacketReceiver& receiver);
int initGraphics(Camera& camera);
int handleControls(PacketReceiver& receiver, Camera& camera);
int listeningThreadFunction(void* listeningThreadData);

int main(int argc, char* argv[]) {

    PacketReceiver receiver;
    PacketAnalyzer analyzer;
    
    ListeningThreadData ltd = {&receiver, &analyzer};
    SDL_Thread* packetListeningThread;

    // Arguments: Vertical FOV, Near Plane, Far Plane, Aspect, Theta, Phi, Distance, DistMin, DistMax
    Camera camera(1.0, 10.0f, 100000.0, 1, 0.0, 1.2, 2000.0, 100.f, 10000.f);

    handleCommandLineFlags(argc, argv, receiver);

    receiver.openInputFile();

    /* Initialize components based on the flags: */
    initKernel();

    if (receiver.isOptionEnabled(GRAPHICS)) {
        if (initGraphics(camera) == 1) {
            return 1;
        }
    }

    if (receiver.isOptionEnabled(STREAM)) {
        initPacketHandling(ltd, &packetListeningThread);
    }

    /* Begin the main loop on this thread: */
    mainLoop(receiver, camera);

    if (receiver.isOptionEnabled(STREAM)) {
        stopPacketHandling(ltd, &packetListeningThread);
    }

    return 0;
}

#define POINTS_PER_CLOUD 14592 // 583 // when div by 24
struct Cloud {
    int head;
    Eigen::Matrix<double, 3, POINTS_PER_CLOUD> points;
    Cloud() : head(0) { }
};

void mainLoop(PacketReceiver& receiver, Camera& camera) {

//    int counter = 0;

    // ~38 packets per revolution, ~1 revolutions = 38 packets * 384 points/packet = 14592 points
    Cloud cloud0, cloud1;
    Cloud* oldCloud = &cloud0;
    Cloud* newCloud = &cloud1;
    Eigen::Affine3d worldTrans;
    worldTrans.setIdentity();
    bool firstCloudIn = false;
    previousTime = SDL_GetTicks();
    bool loop = true;

    while (loop) {
        CartesianPoint p;
        while (queue.try_dequeue(p)) {
            grid.addPoint(p);
        }

        if (receiver.isOptionEnabled(GRAPHICS)) {
            /**************************** HANDLE CONTROLS ********************************/
            int timeToQuit = handleControls(receiver, camera); // returns non-zero if quit events happen
            if (timeToQuit) {
                loop = false;
            }

            /**************************** DO THE DRAWING *********************************/
            // draw the grid
            gridDrawer.drawGrid();
            // update the screen
            graphics.render();
        }
    }
}

// This function runs inside the listeningThread.
int listeningThreadFunction(void* arg) {
    std::cout << "\nPacket handling thread is active.\n";

    ListeningThreadData* ltd = (ListeningThreadData*) arg;
    int packetsReadCount = 0;
    while (!ltd->packetHandlerQuit) {
        /*************************** HANDLE PACKETS *********************************/
        if (ltd->receiver->getStreamMedium() == VELODYNE) {
            ltd->receiver->listenForDataPacket();
        } else if (ltd->receiver->getStreamMedium() == INPUTFILE
                   && !ltd->receiver->endOfInputDataFile()
                   && packetsReadCount < ltd->receiver->getNumPacketsToRead()) {
            ltd->receiver->readDataPacketsFromFile(1);
            ++packetsReadCount;
        }
        // handle any incoming packet
        if (ltd->receiver->getPacketQueueSize() > 0) {
            if (ltd->receiver->isOptionEnabled(WRITE)) {
                ltd->receiver->writePacketToFile(ltd->receiver->getNextQueuedPacket());
            }
            ltd->analyzer->loadPacket(ltd->receiver->getNextQueuedPacket());
            ltd->receiver->popQueuedPacket();    // packet has been read, get rid of it
            std::vector<CartesianPoint> newPoints(ltd->analyzer->getCartesianPoints());
            for (unsigned j = 0; j < newPoints.size(); ++j) {
                queue.enqueue(newPoints[j]);
            }
        }
    }

    std::cout << "Packet handling thread is dying.\n";
    return 0;
}

int handleControls(PacketReceiver& receiver, Camera& camera) {
    /**************************** HANDLE EVENTS *********************************/
    SDL_Event event;
    while (SDL_PollEvent(&event)) { // process all accumulated events
        switch(event.type) {
            case SDL_MOUSEMOTION:
                if (event.button.button & SDL_BUTTON_RMASK) {
                    camera.rotatePhi(event.motion.yrel * MOUSE_SENSITIVITY_Y);
                    camera.rotateTheta(event.motion.xrel * MOUSE_SENSITIVITY_X);
                } else if (event.button.button & SDL_BUTTON_LMASK) {
                    camera.moveBackward(-event.motion.yrel * MOUSE_SENSITIVITY_PAN * camera.lookingUpOrDown());
                    camera.moveLeft(event.motion.xrel * MOUSE_SENSITIVITY_PAN);
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                if (event.button.button == SDL_BUTTON_LEFT && !(event.button.button & SDL_BUTTON_RMASK)) {

                }
                else if (event.button.button == SDL_BUTTON_RIGHT ) {

                }
                break;
            case SDL_MOUSEWHEEL:
                camera.zoom(event.wheel.y * MOUSE_SENSITIVITY_WHEEL);
                break;
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {
                    case SDLK_ESCAPE:
                        return 1;
                    default:
                        break;
                }
                break;
            case SDL_QUIT:
                std::cout << "Received Quit Event.\n";
                return 1;
            default:
                break;
        }
    }
    /**************************** HANDLE KEY STATE *********************************/
    // Determine the time step since last time
    currentTime = SDL_GetTicks();
    deltaTime = currentTime - previousTime;
    previousTime = currentTime;
    // Get current keyboard state ( this is used for smooth controls rather than key press event controls above )
    const Uint8* keyStates = SDL_GetKeyboardState(NULL);
    float keyRotate = KEY_ROTATE_SENSITIVITY * deltaTime;
    float keyMove = KEY_MOVE_SENSITIVITY * deltaTime;
    if (keyStates[SDL_SCANCODE_W]) {
        camera.moveBackward(-keyMove);
    }
    if (keyStates[SDL_SCANCODE_S]) {
        camera.moveBackward(keyMove);
    }
    if (keyStates[SDL_SCANCODE_A]) {
        camera.moveLeft(keyMove);
    }
    if (keyStates[SDL_SCANCODE_D]) {
        camera.moveLeft(-keyMove);
    }
    if (keyStates[SDL_SCANCODE_I]) {
        receiver.increaseNumPacketsToRead(1);
    }
    return 0;
}

void initPacketHandling(ListeningThreadData& ltd, SDL_Thread** packetListeningThread) {
    // packet handler setup
    ltd.receiver->openOutputFile();
    ltd.receiver->bindSocket();

    // spawn the listening thread, passing it information in "data"
    ltd.packetHandlerQuit = false;
    *packetListeningThread = SDL_CreateThread (listeningThreadFunction, "listening thread", (void *) &ltd);
}

void stopPacketHandling(ListeningThreadData& ltd, SDL_Thread** packetListeningThread) {
    // once the main loop has exited, set the listening thread's "quit" to true and wait for the thread to die.
    ltd.packetHandlerQuit = true;
    SDL_WaitThread(*packetListeningThread, NULL);
}

void initKernel() {
    /* KERNEL IMPLEMENTATIONS: */
    auto avgKernel = [] (Grid<CartesianPoint>* pGrid, int x, int y){ // x and y determine which grid cell is being operated on
        int totalPointsCounted = 0;
        float average = 0;
        int gridIndex = y * pGrid->getXRes() + x; // index into the vector of GridCells
        for (unsigned i = 0; i < pGrid->kernel.contributingCells.size(); ++i) {
            if (x + pGrid->kernel.contributingCells[i].xOffset >= 0 && x + pGrid->kernel.contributingCells[i].xOffset < pGrid->getXRes()) {
                int gridIndexOffset = pGrid->kernel.contributingCells[i].yOffset * pGrid->getXRes(); // offset from the gridIndex to the current contributing cell
                gridIndexOffset += pGrid->kernel.contributingCells[i].xOffset;
                int ccIndex = gridIndex + gridIndexOffset; // contributingCellIndex
                if (ccIndex >= 0 && ccIndex < (int) pGrid->cells.size()) {
                    for (unsigned j = 0; j < pGrid->cells[ccIndex].points.size(); ++j) {
                        average += pGrid->cells[ccIndex].points[j].y;
                    }
                    totalPointsCounted += pGrid->cells[ccIndex].points.size();
                }
            }
        }
        if (totalPointsCounted > 0) {
            average /= totalPointsCounted;
        }
        pGrid->cells[gridIndex].kernelOutput = average;
    };

    avgKernel(&grid, 0, 0);

    int kernelError = grid.specifyKernel(
            {
                    0, 1, 0,
                    1, 1, 1,
                    0, 1, 0,
            }, avgKernel);
    if (kernelError) {
        std::cout << "KERNEL FAILURE!\n";
    }
}

int initGraphics(Camera& camera) {
    std::stringstream log;
    if (!graphics.init(log)) { // if init fails, exit
        std::cout << log.str();
        return 1;
    }
    camera.setAspect(graphics.getAspectRatio());
    gridDrawer.init(&grid, &camera, 0, log);
    std::cout << log.str();

    return 0;
}

bool flagIsValid(char flag) {
    switch (flag) {
        case 'g':
        case 's':
        case 'f':
        case 'w':
        case 'h':
            return true;
        default:
            return false;
    }
}

void checkOptionInput(char &input, PacketReceiver &receiver, int option) {
    std::cin.get(input);
    std::cin.ignore(256, '\n');
    if (input == 'y' || input == 'Y') {
        receiver.enableOption(option);
    } else if (input == 'n' || input == 'N') {
        receiver.disableOption(option);
    } else {
        std::cout << "Please enter either 'y' or 'n'." << std::endl;
    }
}

int handleCommandLineFlags(int argc, char* argv[], PacketReceiver& receiver) {
    /* Deal with the command line flags: */
    /* Validate flags: */
    for (int fc = 1; fc < argc; ++fc) {
        std::string arg = std::string(argv[fc]);
        /* Handle multiple flags in one argument: */
        if (arg[0] == '-') {
            for (int i = 1; i < arg.length(); ++i) {
                if (! flagIsValid(arg[i])) {
                    std::cout << arg[i] << " is an invalid flag. Ending program." << std::endl;
                    return 1;
                }
            }
        } else {
            std::cout << arg << " is an invalid flag." << std::endl;
        }
    }
    /* Default flag values are set to false: */
    for (int fc = 1; fc < argc; ++fc) {
        std::string arg = std::string(argv[fc]);
        /* Handle multiple flags in one argument: */
        if (arg[0] == '-') {
            for(int i = 1; i < arg.length(); ++i) {
                switch(arg[i]) {
                    case 'g':
                        receiver.enableOption(GRAPHICS);
                        break;
                    case 's':
                        receiver.enableOption(STREAM);
                        break;
                    case 'f':
                        receiver.enableOption(FORWARD);
                        break;
                    case 'w':
                        receiver.enableOption(WRITE);
                        break;
                    case 'h':
                        std::cout << "HELP ME PLEASE!" << std::endl; //enableHelp();                      // ADD HELP FLAG
                        break;
                    default:
                        std::cout << arg[i] << " is an invalid flag. Ending program." << std::endl;
                        return 1;
                }
            }
        } else {
            std::cout << arg << " is an invalid flag." << std::endl;
        }
    }

    /* For the necessary options that the user did not specify with flags, prompt. */
    char input;
    /* Check for graphics flag: */
    while (!receiver.isOptionSpecified(GRAPHICS)) {
        std::cout << "Enable graphical display? (y/n) ";
        checkOptionInput(input, receiver, GRAPHICS);
    }
    while (!receiver.isOptionSpecified(STREAM)) {
        std::cout << "Enable data streaming? (y/n) ";
        checkOptionInput(input, receiver, STREAM);
    }
    if (receiver.isOptionEnabled(STREAM)) {
        while (!receiver.isOptionSpecified(WRITE)) {
            std::cout << "Enable writing data to a file? (y/n) ";
            checkOptionInput(input, receiver, WRITE);
        }
        while (!receiver.isOptionSpecified(FORWARD)) {
            std::cout << "Enable forwarding of data to a different location? (y/n) ";
            checkOptionInput(input, receiver, FORWARD);
        }
    }
    return 0;
}