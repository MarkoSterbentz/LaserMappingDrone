//
// Created by adayoldbagel on 2/4/16.
//

#ifndef LASERMAPPINGDRONE_GRIDDRAWER_H
#define LASERMAPPINGDRONE_GRIDDRAWER_H

#include <GL/glew.h>
#include <string>
#include <sstream>
#include <vector>
#include <deque>
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <PacketAnalyzer.h>
#include "Grid.h"
#include "Camera.h"
#include "LoadShaders.h"
#include "ScreenShot.h"
#include <ctime>
#include <iomanip>

#define SCREEN_SHOT_W 4000
#define SCREEN_SHOT_H 2000

namespace LaserMappingDrone {

    template<class P>
    struct GridDrawer {

        int init(Grid <P> *grid, Camera* camera, unsigned additionBufferSize, std::stringstream& log);
        void drawGrid();
        void takeScreenShot();

    private:
        GLuint shader;
        GLuint vao;
        GLuint vertices;
        GLint shader_modelMat;
        GLint shader_color;
        float currentColor[3];
        std::vector<glm::dmat4> matrixStack;
        int gridVertStart;
        long int pointsVertStart, pointsByteStart;
        unsigned long gridVertCount, pointsVertCount, pointsByteCount, pointsByteVboHead;
        Camera* camera;
        uint32_t lastTime;

        std::vector<float> buffer;
        unsigned long addBufferSize, addBufferSizeElem;

        ScreenShotTaker screenShotTaker;
        bool screenShotCurrentFrame = false;

        void setColor(float r, float g, float b);
        void preDrawCommon();
        void drawBorders();
        void drawPoints();
    };

    template <class P>
    int GridDrawer<P>::init(Grid <P> *grid, Camera* camera, unsigned additionBufferSize, std::stringstream& log) {
        addBufferSize = additionBufferSize;
        this->camera = camera;
        lastTime = SDL_GetTicks();

        // Create and bind a VAO
        glGenVertexArrays(1, &vao);
        glBindVertexArray(vao);

        // set up a simple shader that shades any primitive a single solid color.
        shader = loadShaders("Shaders/color.vert", "Shaders/color.frag", log);
        GLint shader_vertex = glGetAttribLocation(shader, "vertex");
        shader_modelMat = glGetUniformLocation(shader, "modelMat");
        shader_color = glGetUniformLocation(shader, "color");

        // Create the vertex buffer in GPU memory (nothing in it yet)
        glGenBuffers(1, &vertices);

        // this is the data that will be buffered up as vertices
        std::vector<float> verts;

        // Here the vertices for the grid are generated
        float sclX = (grid->xMax - grid->xMin) * .5f;
        float sclY = (grid->yMax - grid->yMin) * .5f;
        float ctrX = grid->xMin + sclX;
        float ctrY = grid->yMin + sclY;
        float xStep = 2.f / grid->xRes;
        for (unsigned x = 0; x <= grid->xRes; ++x) {
            verts.emplace_back(ctrX + (x * xStep * sclX - sclX));
            verts.emplace_back(ctrY + -sclY);
            verts.emplace_back(0.0f);

            verts.emplace_back(ctrX + (x * xStep * sclX - sclX));
            verts.emplace_back(ctrY + sclY);
            verts.emplace_back(0.0f);
        }
        float yStep = 2.f / grid->yRes;
        for (unsigned y = 0; y <= grid->yRes; ++y) {
            verts.emplace_back(ctrX + -sclX);
            verts.emplace_back(ctrY + (y * yStep * sclY - sclY));
            verts.emplace_back(0.0f);

            verts.emplace_back(ctrX + sclX);
            verts.emplace_back(ctrY + (y * yStep * sclY - sclY));
            verts.emplace_back(0.0f);
        }

        gridVertStart = 0;
        gridVertCount = verts.size() / 3;

        pointsVertStart = gridVertCount;
        pointsByteStart = pointsVertStart * 3 * sizeof(float);
        pointsVertCount = grid->capacity;
        pointsByteCount = pointsVertCount * 3 * sizeof(float);
        pointsByteVboHead = 0;

        unsigned long bufferSizeInBytes = (verts.size() + grid->capacity * 3) * sizeof(float);

        // Generate the empty VBO on the GPU, to be filled with glBufferSubArray
        glBindBuffer(GL_ARRAY_BUFFER, vertices);
        glBufferData(GL_ARRAY_BUFFER, bufferSizeInBytes, NULL, GL_STREAM_DRAW);
        glEnableVertexAttribArray((GLuint) shader_vertex);
        glVertexAttribPointer((GLuint) shader_vertex, 3, GL_FLOAT, GL_FALSE, 0, 0);

        // Put the grid's vertices into the VBO
        glBufferSubData(GL_ARRAY_BUFFER, gridVertStart, verts.size() * sizeof(float), &verts[0]);

        // Set up the grid to automagically do the following every time a point is added to it.
        // This will put each point's data on the VBO as it comes in.
        if (addBufferSize <= 1) {
            log << "No GPU addition buffering will be used.\n";
            grid->specifyPointAdditionCallback([&](P &p) {
                if (pointsByteVboHead >= pointsByteCount) {
                    pointsByteVboHead = 0;
                }
                float vertex[3] = {p.x, p.y, p.z};
                glBindBuffer(GL_ARRAY_BUFFER, vertices);
                glBufferSubData(GL_ARRAY_BUFFER, pointsByteStart + pointsByteVboHead,
                                3 * sizeof(float), &vertex[0]);
                pointsByteVboHead += 3 * sizeof(float);
            });
        } else if (grid->capacity % addBufferSize == 0) {
            log << addBufferSize << " points will be buffered before each transfer to GPU.\n";
            addBufferSizeElem = addBufferSize * 3;
            buffer.reserve(addBufferSizeElem);
            grid->specifyPointAdditionCallback([&](P &p) {
                buffer.push_back(p.x);
                buffer.push_back(p.y);
                buffer.push_back(p.z);
                if (buffer.size() >= addBufferSizeElem) {
                    if (pointsByteVboHead >= pointsByteCount) {
                        pointsByteVboHead = 0;
                    }
                    glBindBuffer(GL_ARRAY_BUFFER, vertices);
                    glBufferSubData(GL_ARRAY_BUFFER, pointsByteStart + pointsByteVboHead,
                                    addBufferSizeElem * sizeof(float), &buffer[0]);
                    buffer.clear();
                    pointsByteVboHead += addBufferSizeElem * sizeof(float);
                }
            });
        } else {
            log << "FAIL: (GPU addition buffer) Grid Drawer buffer size MUST be a factor of Grid capacity. ";
            log << "This error is due to a bad GridDrawer constructor argument.\n";
            return 1;
        }

        currentColor[0] = 0.f;
        currentColor[1] = 1.f;
        currentColor[2] = 1.f;

        screenShotTaker.init(SCREEN_SHOT_W, SCREEN_SHOT_H);

        return 0;
    }

    template <class P>
    void GridDrawer<P>::drawGrid() {
        if (screenShotCurrentFrame) {
            screenShotTaker.injectScreenShotState(*camera);
        }

        uint32_t currentTime = SDL_GetTicks();
        camera->tickShmooze(currentTime - lastTime);
        lastTime = currentTime;
        matrixStack.clear();
        matrixStack.push_back(camera->getVp());

        // Bind the VAO
        glBindVertexArray(vao);
        // Tell GPU to use the colorShader program for following draw calls
        glUseProgram(shader);

        drawBorders();
        drawPoints();

        if (screenShotCurrentFrame) {
            auto t = std::time(nullptr);
            auto tm = *std::localtime(&t);
            std::stringstream fileNameStream;
            fileNameStream << "screenshot" << std::put_time(&tm, "%Y%m%d%H%M%S") << ".png";
            screenShotTaker.retrieveAndWriteImageToFile(fileNameStream.str().c_str());
            screenShotTaker.revertScreenShotState();
            screenShotCurrentFrame = false;
        }
    }

    template <class P>
    void GridDrawer<P>::setColor(float r, float g, float b) {
        currentColor[0] = r;
        currentColor[1] = g;
        currentColor[2] = b;
    }

    template <class P>
    void GridDrawer<P>::drawBorders() {
        setColor(0.f, 1.f, 1.f);
        preDrawCommon();
        glDrawArrays(GL_LINES, gridVertStart, (GLsizei) gridVertCount);
    }

    template <class P>
    void GridDrawer<P>::preDrawCommon() {
        // Upload the model matrix to the colorShader program on the GPU
        glUniformMatrix4fv(shader_modelMat, 1, GL_FALSE, &((glm::mat4)(matrixStack.back()))[0][0]);
        // Upload the color you want to the colorShader program on the GPU
        glUniform3f(shader_color, currentColor[0], currentColor[1], currentColor[2]);
    }

    template <class P>
    void GridDrawer<P>::drawPoints() {
        setColor(1.f, 1.f, 0.f);
        preDrawCommon();
        glDrawArrays(GL_POINTS, (GLint)pointsVertStart, (GLsizei)pointsVertCount);
    }

    template <class P>
    void GridDrawer<P>::takeScreenShot() {
        screenShotCurrentFrame = true;
    }

}

#endif //LASERMAPPINGDRONE_GRIDDRAWER_H
