//
// Created by volundr on 7/23/16.
//

#ifndef LASERMAPPINGDRONE_SCREENSHOT_H
#define LASERMAPPINGDRONE_SCREENSHOT_H

#include <GL/glew.h>
#include <SDL.h>
#include "Camera.h"

namespace LaserMappingDrone {
    struct ScreenShotTaker {
        GLuint fbo, colorBuffer, depthBuffer;
        uint32_t width, height;
        struct {
            int x, y, w, h;
        } savedViewPort;
        struct {
            Camera* camera;
            float fovY, aspect;
        } savedCamera;
        int init(uint32_t width, uint32_t height);
        int injectScreenShotState(Camera& camera);
        int retrieveImage(uint8_t** emptyPixBuf);
        int retrieveAndWriteImageToFile(const char* fileName);
        int revertScreenShotState();
    };
}

#endif //LASERMAPPINGDRONE_SCREENSHOT_H
