//
// Created by Galen on 2/6/2016.
//

#include <iostream>
#include <SDL.h>
#include "Graphics.h"

#define RESOLUTION_X 1200
#define RESOLUTION_Y 700
#define GLVERSION_MAJOR 3
#define GLVERSION_MINOR 0
//#define FULLSCREEN
/*******************************/
#ifdef FULLSCREEN
#define SCREENOPTIONS SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN_DESKTOP
#else
#define SCREENOPTIONS SDL_WINDOW_OPENGL
#endif
/*******************************/
#define USE_VSYNC
#define CLEARCOLOR 0.0f,0.0f,0.0f,1.0f
#define USE_TRANSPARENCY
#define USE_DEPTHBUFFER
#define USE_BACKFACE_CULLING
//#define DEBUG_DRIVERS

namespace LaserMappingDrone {

    Graphics::Graphics() {
        xRes = RESOLUTION_X;
        yRes = RESOLUTION_Y;
    }

    Graphics::~Graphics() {
        // Delete OpengL context
        SDL_GL_DeleteContext(context);
        // Destroy window
        SDL_DestroyWindow(pWindow);
        // Shutdown SDL 2
        SDL_Quit();
    }

    bool Graphics::init(std::stringstream &log) {
        #ifdef DEBUG_DRIVERS /************ DEBUG DRIVERS ********************************/
        // Identify video drivers (this is for debug)
        OUTSTREAM << "\nSDL found the following video drivers:\n";
        int numdrivers = SDL_GetNumVideoDrivers();
        const char* drivername;
        for (int i = 0; i < numdrivers; ++i) {
            drivername = SDL_GetVideoDriver(i);
            if (SDL_VideoInit(drivername) == 0) {
                SDL_VideoQuit();
                OUTSTREAM << "\t\t   Driver " << drivername << " works.\n";
            }
            else {
                OUTSTREAM << "\t<!>\tDriver " << drivername << " DOES NOT WORK!\n";
            }
        }
        // Identify render drivers (this is for debug)
        OUTSTREAM << "SDL found the following render drivers: ";
        numdrivers = SDL_GetNumRenderDrivers();
        for (int i = 0; i < numdrivers; ++i) {
            SDL_RendererInfo info;
            SDL_GetRenderDriverInfo(i, &info);
            OUTSTREAM << info.name << ((i < numdrivers - 1)? ", " : "\n");
        }
        #endif /************************** DEBUG DRIVERS ********************************/

        // Initialize SDL overall.
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            log << "<!>    SDL did not initialize! SDL Error: " << SDL_GetError() << std::endl;
            return false;
        }

        #ifdef FULLSCREEN /************ GET ASPECT RATIO ********************************/
        // struct for holding sdl display information
        SDL_DisplayMode current;
        if(!SDL_GetCurrentDisplayMode(0, &current)) {
            aspectRatio = (float)current.w / (float)current.h;
            xRes = current.w;
            yRes = current.h;
        } else {
            log << "<!>    Could not get display information!\n";
            aspectRatio = 1.f;
        }
        #else /************************** GET ASPECT RATIO ******************************/
        aspectRatio = (float)xRes / (float)yRes;
        #endif /************************** GET ASPECT RATIO *****************************/

        // SDL_GL_CONTEXT_CORE gives us only the newer version, deprecated functions are disabled
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

        // Specify OpenGL version
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, GLVERSION_MAJOR);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, GLVERSION_MINOR);

        // Turn on double buffering with a 24bit Z buffer.
        // You may need to change this to 16 or 32 for your system
        SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

        // Create the SDL window
        pWindow = SDL_CreateWindow("Laser Mapping Drone",	    // name of window
                                   SDL_WINDOWPOS_CENTERED,		// x position of window
                                   SDL_WINDOWPOS_CENTERED,		// y position of window
                                   (int)xRes, (int)yRes,	    // x and y width of window
                                   SCREENOPTIONS);    			// options (fullscreen, etc)

        // If the window couldn't be created for whatever reason
        if (pWindow == NULL) {
            log << "<!>    SDL window was not created! SDL Error: " << SDL_GetError() << std::endl;
            return false;
        } else {
            log << "SDL window created.\n";
        }

        //Create context
        context = SDL_GL_CreateContext(pWindow);    //context is the place where openGL can draw
        if(context == NULL) {
            log << "<!>    OpenGL context was not created! SDL Error: " << SDL_GetError() << std::endl;
            return false;
        } else {
            log << "GL context created.\n";
        }

        checkGlError(log, __LINE__);

        //Initialize GLEW (openGL Extensions Wrangler)
        glewExperimental = GL_TRUE;     // Sometimes things wont work without this line
        GLenum glewError = glewInit();  // GL enumerator error is thrown here when using openGL versions 3.2+ It's fine.
        // see https://www.opengl.org/wiki/OpenGL_Loading_Library
        if(glewError != GLEW_OK) {
            log << "<!>    Could not initialize GLEW! " << glewGetErrorString(glewError) << std::endl;
            return false;
        } else {
            log << "GLEW initialized.\n";
        }

        checkGlError(log, __LINE__);

        #ifdef USE_VSYNC /************ USE VSYNC ********************************/
        if (SDL_GL_SetSwapInterval(1) < 0) {
            log << "<!>    Warning: Unable to set VSync! SDL Error: " << SDL_GetError() << std::endl;
            // Do not return. This is not an essential functionality.
        } else {
            log << "VSync enabled.\n";
        }
        #endif /********************** USE VSYNC ********************************/

        // set openGL clear color
        glClearColor(CLEARCOLOR);

        // set openGL point size
        glPointSize(3.f);

        #ifdef USE_DEPTHBUFFER
        // enable the occlusion of objects hidden behind other objects (using the depth buffer)
        glEnable(GL_DEPTH_TEST);
        // set the test for that occlusion to: "draw if distance of new fragment is less than or equal to old fragment"
        glDepthFunc(GL_LEQUAL);
        #endif

        #ifdef USE_BACKFACE_CULLING
        // enable the culling of back faces (back faces will not be drawn)
        glEnable(GL_CULL_FACE);
        #endif

        #ifdef USE_TRANSPARENCY
        // enable transparency
        glEnable (GL_BLEND);
        // set transparency function (this is standard transparency)
        glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        #endif

        checkGlError(log, __LINE__);
        checkSDLError(log, __LINE__);

        return true;
    }

    void Graphics::render() {
        // ...Stuff has been drawn for this frame
        // swap frame buffers (back buffer was drawn, will now be shown)
        SDL_GL_SwapWindow(pWindow);
        // clear the buffer for next frame
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
        // Stuff gets drawn in other places for next frame...
    }

    /**
     * DO NOT call this function before the gl context has initialized.  It will make an infinite loop.
     * This is because glGetError always returns GL_INVALID_OPERATION before there exists a context. There's
     * code in here to catch the loop and stop, but it will still produce unnecessary scary output.
     */
    void Graphics::checkGlError(std::stringstream& log, int line /*= -1*/) {
        GLenum glErr = glGetError();
        if (glErr != GL_NO_ERROR) {
            log << "<!>    GL error(s) detected";
            if (line > 0) {
                log << " at line " << line;
            }
            log << ":\n";
            int loopGuard = 0;
            while (glErr != GL_NO_ERROR) {
                if (++loopGuard <= 10) {
                    log << "\t\t\t" << gluErrorString(glErr) << std::endl;
                    glErr = glGetError();
                } else {
                    log << "\t\t\t<!> Suppressing further errors...\n";
                    break;
                }
            }
        }
    }

    void Graphics::checkSDLError(std::stringstream& log, int line /*= -1*/) {
        std::string error = SDL_GetError();
        if (error != "") {
            log << "<!>    SDL Error";
            if (line > 0) {
                log << " at line " << line;
            }
            log << ": " << error << std::endl;
            SDL_ClearError();
        }
    }

}   // namespace LaserMappingDrone