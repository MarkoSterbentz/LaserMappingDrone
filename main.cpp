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

#define KEY_MOVE_SENSITIVITY 100.f
#define KEY_ROTATE_SENSITIVITY 0.01f
#define MOUSE_SENSITIVITY_X -0.006f
#define MOUSE_SENSITIVITY_Y 0.006f
#define MOUSE_SENSITIVITY_WHEEL -800.f
#define DATAFILE "dataOutputFile.dat"
#define POSFILE "positionOutputFile.dat"

using namespace LaserMappingDrone;

// These regard the handling of incoming data from the LIDAR device
PacketAnalyzer* analyzer;
PacketReceiver* receiver;
bool packetHandlerQuit;
SDL_Thread* packetListeningThread;

// The grid and drawer
// constructor min/max arguments are in millimeters (the LIDAR device is at the origin)
// Arguments are: minX, maxX, minY, maxY, resX, resY, max number of points present
Grid<CartesianPoint> grid(-3000.f, 3000.f, -3000.f, 50000.f, 10, 40, 100000);
GridDrawer<CartesianPoint> gridDrawer;

// Arguments: Vertical FOV, Near Plane, Far Plane, Aspect, Theta, Phi, Distance, DistMin, DistMax
Camera camera(1.0, 10.0f, 100000.0, 1, 0.0, 1.2, 2000.0, 100.f, 10000.f);

// The graphics backend
Graphics graphics;

// This is a thread safe queue designed for one producer and one consumer
moodycamel::ReaderWriterQueue<CartesianPoint> queue(10000);

// Some things helpful to controls
long double zoomLevel;
unsigned previousTime, currentTime, deltaTime; // Used to regulate controls time step

/* Flag Booleans: */
bool graphicsModeEnabled, streamModeEnabled, writeModeEnabled;
StreamingMedium streamMedium;
std::string dataFileName;

// prototypes
void mainLoop();
void initPacketHandling(std::string filename);
void stopPacketHandling();
void initKernel();
int initGraphics();
int handleControls();
int listeningThreadFunction(void* listeningThreadData);
void enableGraphicsMode();
void disableGraphicsMode();
void enableStreamMode();
void disableStreamMode();
void getStreamDevice();
void enableWriteMode();
void disableWriteMode();

int main(int argc, char* argv[]) {
    /* Deal with the command line flags: */
    if (argc == 1) {
        /* User gave no flags, so prompt the user for the flags they would like to use: */
        char input = '0';
        /* Check for graphics flag: */
        while (input != 'y' && input != 'Y' && input != 'n' && input != 'N') {
            std::cout << "Enable graphical display? (y/n) ";
            std::cin.get(input);
            std::cin.ignore(256, '\n');
            if (input == 'y' || input == 'Y') {
                enableGraphicsMode();
            } else if (input == 'n' || input == 'N') {
                disableGraphicsMode();
            } else {
                std::cout << "Please enter either 'y' or 'n'." << std::endl;
            }
        }
        input = '0';
        while (input != 'y' && input != 'Y' && input != 'n' && input != 'N') {
            std::cout << "Enable data streaming? (y/n) ";
            std::cin.get(input);
            std::cin.ignore(256, '\n');
            if (input == 'y' || input == 'Y') {
                enableStreamMode();
            } else if (input == 'n' || input == 'N') {
                disableStreamMode();
            } else {
                std::cout << "Please enter either 'y' or 'n'." << std::endl;
            }
        }
        if (streamModeEnabled) {
            while (input != 'y' && input != 'Y' && input != 'n' && input != 'N') {
                std::cout << "Enable writing data to a file? (y/n) ";
                std::cin.get(input);
                std::cin.ignore(256, '\n');
                if (input == 'y' || input == 'Y') {
                    enableWriteMode();
                } else if (input == 'n' || input == 'N') {
                    disableWriteMode();
                } else {
                    std::cout << "Please enter either 'y' or 'n'." << std::endl;
                }
            }
        }
    } else {
        /* Handle the user specified flags: */
        /* Default flag values are set to false: */
        graphicsModeEnabled = false;
        streamModeEnabled = false;
        writeModeEnabled = false;
        for (int fc = 1; fc < argc; ++fc) {
            if (std::string(argv[fc]) == "-g") {
                enableGraphicsMode();
            } else if (std::string(argv[fc]) == "-s") {
                enableStreamMode();
            } else if (std::string(argv[fc]) == "-sw"){
                enableStreamMode();
                enableWriteMode();
            } else if (std::string(argv[fc]) == "-h") {
                std::cout << "HELP" << std::endl;
            } else {
                std::cout << argv[fc] << " is an invalid flag." << std::endl;
            }
        }
    }

    receiver = new PacketReceiver();
    analyzer = new PacketAnalyzer();

    /* TESTING READING PACKETS FROM DATA FILE: */
//    receiver->openInputFile("oneMinuteCapture.dat");
//    // load k number of packets from the data file
//    for (int k = 0; k < 10000; ++k) {
//        //receiver->inputFile.seekg(DATABUFLEN, std::ios::cur);   // move the current position in the ifstream to the next packet
//        //receiver->readSingleDataPacketFromFile();
//        receiver->readDataPacketsFromFile(1);
//        if (receiver->getPacketQueueSize() > 0) {
//            analyzer->loadPacket(receiver->getNextQueuedPacket());
//            receiver->popQueuedPacket(); // this packet will be analyzed, get it out of the queue
//            std::vector<CartesianPoint> newPoints(analyzer->getCartesianPoints());
//            std::cout << "Number of points: " << newPoints.size() << std::endl;
//            for (unsigned j = 0; j < newPoints.size(); ++j) {
//                queue.enqueue(newPoints[j]);
//            }
//        }
//     }

    /* END TESTING */

    /* Initialize components based on the flags: */
    initKernel();

    if (graphicsModeEnabled) {
        if (initGraphics() == 1) {
            return 1;
        }
    }

    if (streamModeEnabled) {
        initPacketHandling(dataFileName);
    }

    /* Begin the main loop on this thread: */
    mainLoop();

    if (streamModeEnabled) {
        stopPacketHandling();
    }

    /* Memory Cleanup: */
    delete analyzer;
    delete receiver;

    return 0;
}

void mainLoop() {
    previousTime = SDL_GetTicks();
    bool loop = true;
    while (loop) {
        CartesianPoint p;
        while (queue.try_dequeue(p)) {
            grid.addPoint(p);
        }

        if (graphicsModeEnabled) {
            /**************************** HANDLE CONTROLS ********************************/
            int timeToQuit = handleControls(); // returns non-zero if quit events happen
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
    while (!packetHandlerQuit) {
        /*************************** HANDLE PACKETS *********************************/
        if (streamMedium == Velodyne) {
            receiver->listenForDataPacket(); // make sure to take the lack of UDP header into account
            if (receiver->getPacketQueueSize() > 0) {
                if (writeModeEnabled) {
                    receiver->writePacketToFile(receiver->getNextQueuedPacket());
                }
                analyzer->loadPacket(receiver->getNextQueuedPacket());
                receiver->popQueuedPacket();    // packet has been read, get rid of it
                std::vector<CartesianPoint> newPoints(analyzer->getCartesianPoints());
                for (unsigned j = 0; j < newPoints.size(); ++j) {
                    queue.enqueue(newPoints[j]);
                }
            }
        } else if (streamMedium == file) {
//            receiver->openInputFile("oneMinuteCapture.dat");
//            // load k number of packets from the data file
//            for (int k = 0; k < 10000; ++k) {
//                //receiver->inputFile.seekg(DATABUFLEN, std::ios::cur);   // move the current position in the ifstream to the next packet
//                //receiver->readSingleDataPacketFromFile();
//                receiver->readDataPacketsFromFile(1);
//                if (receiver->getPacketQueueSize() > 0) {
//                    analyzer->loadPacket(receiver->getNextQueuedPacket());
//                    receiver->popQueuedPacket(); // this packet will be analyzed, get it out of the queue
//                    std::vector<CartesianPoint> newPoints(analyzer->getCartesianPoints());
//                    std::cout << "Number of points: " << newPoints.size() << std::endl;
//                    for (unsigned j = 0; j < newPoints.size(); ++j) {
//                        queue.enqueue(newPoints[j]);
//                    }
//                }
//             }
        }
    }
    std::cout << "Packet handling thread is dying.\n";
    return 0;
}

int handleControls() {
    /**************************** HANDLE EVENTS *********************************/
    SDL_Event event;
    while (SDL_PollEvent(&event)) { // process all accumulated events
        switch(event.type) {
            case SDL_MOUSEMOTION:
                if (event.button.button & SDL_BUTTON_RMASK) {
                    if (event.button.button & SDL_BUTTON_LMASK) {
                        camera.dragHorizPlaneFromScreenSpace(
                                {event.motion.x - event.motion.xrel, event.motion.y - event.motion.yrel},
                                {event.motion.x, event.motion.y});
                    } else {
                        camera.rotatePhi(event.motion.yrel * MOUSE_SENSITIVITY_Y);
                        camera.rotateTheta(event.motion.xrel * MOUSE_SENSITIVITY_X);
                    }
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                if (event.button.button == SDL_BUTTON_LEFT && !(event.button.button & SDL_BUTTON_RMASK)) {   // add point to grid
                    float xPos = (float)event.button.x / (graphics.getResX() * 0.5f) - 1.0f;
                    float yPos = -(float)event.button.y / (graphics.getResY() * 0.5f) + 1.0f;
                    glm::vec4 scrSpaceClick(xPos, yPos, 0.0, 1.0);
                    glm::vec2 horizCoord{0.f, 0.f};
                    if (camera.getHorizIntersectionFromScreenSpace({scrSpaceClick.x, scrSpaceClick.y}, horizCoord)) {
                        grid.addPoint({horizCoord.x, horizCoord.y, 0.f});
                    }
                }
//                else if (event.button.button == SDL_BUTTON_RIGHT ) {   // add point to grid
//                    float xPos = (float)event.button.x / (graphics.getResX() * 0.5f) - 1.0f;
//                    float yPos = -(float)event.button.y / (graphics.getResY() * 0.5f) + 1.0f;
//                    glm::vec4 scrSpaceClick(xPos, yPos, 0.0, 1.0);
//                    glm::vec2 horizCoord{0.f, 0.f};
//                    if (camera.getHorizIntersectionFromScreenSpace({scrSpaceClick.x, scrSpaceClick.y}, horizCoord)) {
//                        float result = 0;
//                        if (!grid.getKernelOutput(horizCoord.x, horizCoord.y, result)) {
//                            std::cout << result << std::endl;
//                        }
//                    }
//                }
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
    if (keyStates[SDL_SCANCODE_W]) {
        camera.rotatePhi(keyRotate);
    }
    if (keyStates[SDL_SCANCODE_S]) {
        camera.rotatePhi(-keyRotate);
    }
    if (keyStates[SDL_SCANCODE_A]) {
        camera.rotateTheta(-keyRotate);
    }
    if (keyStates[SDL_SCANCODE_D]) {
        camera.rotateTheta(keyRotate);
    }
    return 0;
}

void initPacketHandling(std::string filename) {
    // packet handler setup
    receiver->openOutputFile(filename);
    receiver->bindSocket();

    // spawn the listening thread, passing it information in "data"
    packetHandlerQuit = false;
    packetListeningThread = SDL_CreateThread (listeningThreadFunction, "listening thread", NULL);
}

void stopPacketHandling() {
    // once the main loop has exited, set the listening thread's "quit" to true and wait for the thread to die.
    packetHandlerQuit = true;
    SDL_WaitThread(packetListeningThread, NULL);
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
                if (ccIndex >= 0 && ccIndex < pGrid->cells.size()) {
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

int initGraphics() {
    zoomLevel = 0.01f;
    std::stringstream log;
    if (!graphics.init(log)) { // if init fails, exit
        std::cout << log.str();
        return 1;
    }
    camera.setAspect(graphics.getAspectRatio());
    gridDrawer.init(&grid, &camera, 0, log);
    std::cout << log.str();

    grid.addPoint({1500.f, 1500.f});
    return 0;
}

void enableGraphicsMode() {
    graphicsModeEnabled = true;
    std::cout << "Graphical display ENABLED." << std::endl;
}

void disableGraphicsMode() {
    graphicsModeEnabled = false;
    std::cout << "Graphical display DISABLED" << std::endl;
}

void enableStreamMode() {
    streamModeEnabled = true;
    std::cout << "Data streaming ENABLED." << std::endl;
    getStreamDevice();
}

void disableStreamMode() {
    streamModeEnabled = false;
    std::cout << "Data streaming DISABLED." << std::endl;
}

void getStreamDevice() {
    std::cout << "Select the device you are streaming data from (enter the associated number):" << std::endl;
    std::cout << "1. Velodyne" << std::endl;
    std::cout << "2. File" << std::endl;
    std::string input;
    std::getline(std::cin, input);
    int inputInt = -1;
    while (inputInt == -1) {
        inputInt = std::stoi(input);
        switch (inputInt) {
            case (1):
                streamMedium = Velodyne;
                std::cout << "Selected streaming medium: VELODYNE." << std::endl;
                break;
            case (2):
                streamMedium = file;
                std::cout << "Selected streaming medium: FILE." << std::endl;
                break;
            default:
                std::cout << "Invalid input. Please select a valid number." << std::endl;
                inputInt = -1;
                break;
        }
    }
}

void enableWriteMode() {
    writeModeEnabled = true;
    std::cout << "Data writing ENABLED." << std::endl;
    std::cout << "What would you like to name the output data file? ";
    std::getline(std::cin, dataFileName);
    dataFileName.append(".dat");
    std::cout << "Data will be written to: " << dataFileName << std::endl;
}

void disableWriteMode() {
    writeModeEnabled = false;
    std::cout << "Data writing DISABLED." << std::endl;
}