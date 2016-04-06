//
// Created by Galen on 2/6/2016.
//

#ifndef LASERMAPPINGDRONE_GL_BACKEND_H
#define LASERMAPPINGDRONE_GL_BACKEND_H

#include <sstream>
#include <SDL_video.h>
#include <GL/glew.h>

namespace LaserMappingDrone {
    class Graphics {
        SDL_Window* pWindow;                // The SDL window
        SDL_GLContext context;              // The openGL context
        float aspectRatio;
        int xRes, yRes;

        void checkGlError(std::stringstream& log, int line = -1);
        void checkSDLError(std::stringstream& log, int line = -1);

    public:
        Graphics();
        ~Graphics();
        bool init(std::stringstream &log);
        void render();
        inline float getAspectRatio()   { return aspectRatio; };
        inline int getResX()            { return xRes; }
        inline int getResY()            { return yRes; }
    };
}

#endif //LASERMAPPINGDRONE_GL_BACKEND_H
