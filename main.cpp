//
// Created by Galen on 1/13/16.
//

#include <iostream>
#include <SDL_timer.h>
#include <SDL_events.h>

#include "Graphics.h"
#include "QuadTree.h"
#include "QuadTreeDrawer.h"
#include "Grid.h"
#include "GridDrawer.h"

//#define BENCHMARK_QUADTREE_POINT_INSERTION

using namespace LaserMappingDrone;

// placeholder struct that represents the eventual data received from the lidar device
struct DummyPoint {
    float x, y;
};

// The quadtree and drawer
QuadTree<DummyPoint> quadTree(1);   // The quad tree
QuadTreeDrawer treeDrawer;

// The grid and drawer
Grid<DummyPoint> grid(-10.f, 10.f, -10.f, 10.f, 10, 10);
GridDrawer<DummyPoint> gridDrawer;

// The graphics backend
Graphics graphics;

// Some things helpful to controls
long double zoomLevel;
unsigned previousTime, currentTime, deltaTime; // Used to regulate controls/physics time step

// Function prototypes
void mainLoop();
int handleEvents();

int main(int argc, char* argv[]) {

    zoomLevel = 0.01f;
    std::stringstream log;
    if (!graphics.initGL(log)) { // if init fails, exit
        std::cout << log.str();
        return 1;
    }
    std::cout << log.str();
    std::cout << treeDrawer.init(graphics.getAspectRatio());
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

    previousTime = SDL_GetTicks();
    mainLoop();
    return 0;
}

void mainLoop() {
    bool loop = true;
    while (loop) {

        /**************************** HANDLE CONTROLS ********************************/
        int timeToQuit = handleEvents(); // returns non-zero if quit events happen
        if (timeToQuit) {
            loop = false;
        }

        /**************************** DO THE DRAWING *********************************/
        // draw the tree
        treeDrawer.drawQuadTree(quadTree, (float) zoomLevel);
        // draw the grid
        gridDrawer.drawGrid();
        // update the screen
        graphics.render();
    }
}

int handleEvents() {
    /**************************** HANDLE EVENTS *********************************/
    SDL_Event event;
    while (SDL_PollEvent(&event)) { // process all accumulated events
        if (event.type == SDL_QUIT) { // quit events (like if you press the x)
            return 1;
        } else if (event.type == SDL_KEYDOWN) { // keydown events (generated only once per key press)
            switch (event.key.keysym.sym) {
                case SDLK_ESCAPE:
                    return 1;
                case SDLK_SPACE:	// turn on or off the small-node culling optimization for the quad tree
                    treeDrawer.toggleOptimization();
                    break;
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
                grid.addPoint({(float) gridSpaceClick.x, (float) gridSpaceClick.y});
            } else if (event.button.button == SDL_BUTTON_RIGHT) {   // add point to quad tree
                float xPos = (float)event.button.x / (graphics.getResX() * 0.5f) - 1.0f;
                float yPos = -(float)event.button.y / (graphics.getResY() * 0.5f) + 1.0f;
                glm::dmat4 invMat = glm::inverse(treeDrawer.getTransformMat());
                glm::dvec4 scrSpaceClick(xPos, yPos, 0.0, 1.0);
                glm::dvec4 treeSpaceClick = invMat * scrSpaceClick;
                quadTree.addPoint({(float)treeSpaceClick.x, (float)treeSpaceClick.y});
            }
        }
    }
    /**************************** HANDLE KEY STATE *********************************/
    // Determine the time step since last time
    currentTime = SDL_GetTicks();
    deltaTime = currentTime - previousTime;
    previousTime = currentTime;
    // Get current keyboard state ( this is used for smooth controls rather than key press event controls above )
    const Uint8* keyStates = SDL_GetKeyboardState(NULL);
    // this is a "sensitivity" value
    float moveSpeed = 0.2f * deltaTime;
    // apply movement according to which keys are down
    if (keyStates[SDL_SCANCODE_UP]) {
        treeDrawer.translate(-0.0f, -moveSpeed * (float) zoomLevel);
        gridDrawer.translate(-0.0f, -moveSpeed * gridDrawer.getMovementScaleY() * (float) zoomLevel);
    }
    if (keyStates[SDL_SCANCODE_DOWN]) {
        treeDrawer.translate(-0.0f, moveSpeed * (float) zoomLevel);
        gridDrawer.translate(-0.0f, moveSpeed * gridDrawer.getMovementScaleY() * (float) zoomLevel);
    }
    if (keyStates[SDL_SCANCODE_LEFT]) {
        treeDrawer.translate(moveSpeed * (float) zoomLevel, -0.0f);
        gridDrawer.translate(moveSpeed * gridDrawer.getMovementScaleX() * (float) zoomLevel, -0.0f);
    }
    if (keyStates[SDL_SCANCODE_RIGHT]) {
        treeDrawer.translate(-moveSpeed * (float) zoomLevel, -0.0f);
        gridDrawer.translate(-moveSpeed * gridDrawer.getMovementScaleX() * (float) zoomLevel, -0.0f);
    }
    if (keyStates[SDL_SCANCODE_LSHIFT]) {
        float zoomSpeed = 1.f + moveSpeed * 0.005f;
        zoomLevel /= zoomSpeed;
        treeDrawer.scale(zoomSpeed, zoomSpeed);
        gridDrawer.scale(zoomSpeed, zoomSpeed);
    }
    if (keyStates[SDL_SCANCODE_LCTRL]) {
        float zoomSpeed = 1.f - moveSpeed * 0.005f;
        zoomLevel /= zoomSpeed;
        treeDrawer.scale(zoomSpeed, zoomSpeed);
        gridDrawer.scale(zoomSpeed, zoomSpeed);
    }
    return 0;
}