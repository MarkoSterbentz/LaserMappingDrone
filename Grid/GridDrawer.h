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
#include "LoadShaders.h"

namespace LaserMappingDrone {

    template<class P>
    struct GridDrawer {

        std::string init(float aspectRatio, Grid<P>* grid);
        void drawGrid();
        void translate(float x, float y);
        void scale (float x, float y);
        void transform(glm::dmat4& transform);
        void zoomAtPoint(float x, float y, float amount);
        glm::dmat4 getTransformMat();
        inline float getMovementScaleX() { return pointSizeX; }
        inline float getMovementScaleY() { return pointSizeY; }

    private:
        GLuint shader;
        GLuint vao;
        GLint shader_modelMat;
        GLint shader_color;
        float currentColor[3];
        std::vector<glm::dmat4> matrixStack;
        glm::dmat4 localModelMat;
        int gridVertStart;
        long int pointsVertStart, pointsByteStart;
        unsigned long gridVertCount, pointsVertCount, pointsByteCount, pointsByteVboHead;
        float pointSizeX, pointSizeY, centerX, centerY, scaleX, scaleY;

        std::deque<float> pointBuffer;

        void pushMat(glm::dmat4&& mat);
        void popMat();
        void setColor(float r, float g, float b);
        void preDrawCommon();
        void drawBorders();
        void drawPoints();
    };

    template <class P>
    std::string GridDrawer<P>::init(float aspectRatio, Grid<P> *grid) {
        std::stringstream log;

        // Create and bind a VAO
        glGenVertexArrays(1, &vao);
        glBindVertexArray(vao);

        // set up a simple shader that shades any triangle a single solid color.
        shader = loadShaders("Shaders/color.vert", "Shaders/color.frag", log);
        GLint shader_vertex = glGetAttribLocation(shader, "vertex");
        shader_modelMat = glGetUniformLocation(shader, "modelMat");
        shader_color = glGetUniformLocation(shader, "color");

        // Create the vertex buffer in GPU memory (nothing in it yet)
        GLuint vertices;
        glGenBuffers(1, &vertices);

        // this is the data that will be buffered up as vertices
        std::vector<float> verts;

        // Here the vertices for the grid are generated
        float xStep = 2.f / grid->xRes;
        for (unsigned x = 0; x <= grid->xRes; ++x) {
            verts.emplace_back(x * xStep - 1.f);
            verts.emplace_back(-1.f);
            verts.emplace_back(0.5f);

            verts.emplace_back(x * xStep - 1.f);
            verts.emplace_back(1.f);
            verts.emplace_back(0.5f);
        }
        float yStep = 2.f / grid->yRes;
        for (unsigned y = 0; y <= grid->yRes; ++y) {
            verts.emplace_back(-1.f);
            verts.emplace_back(y * yStep - 1.f);
            verts.emplace_back(0.5f);

            verts.emplace_back(1.f);
            verts.emplace_back(y * yStep - 1.f);
            verts.emplace_back(0.5f);
        }

        gridVertStart = 0;
        gridVertCount = verts.size() / 3;

        pointsVertStart = gridVertCount;
        pointsByteStart = pointsVertStart * 3 * sizeof(float);
        pointsVertCount = grid->cycles;
        pointsByteCount = pointsVertCount * 3 * sizeof(float);
        pointsByteVboHead = 0;

        unsigned long bufferSizeInBytes = (verts.size() + grid->cycles * 3) * sizeof(float);

        // Generate the empty VBO on the GPU, to be filled with glBufferSubArray
        glBindBuffer(GL_ARRAY_BUFFER, vertices);
        glBufferData(GL_ARRAY_BUFFER, bufferSizeInBytes, NULL, GL_STREAM_DRAW);
        glEnableVertexAttribArray((GLuint) shader_vertex);
        glVertexAttribPointer((GLuint) shader_vertex, 3, GL_FLOAT, GL_FALSE, 0, 0);

        // Put the grid's vertices into the VBO
        glBufferSubData(GL_ARRAY_BUFFER, gridVertStart, verts.size() * sizeof(float), &verts[0]);

        // Set up the grid to automagically do the following every time a point is added to it.
        // This will put each point's data on the VBO as it comes in.
        grid->specifyPointAdditionCallback( [&] (P& p) {
            if (pointsByteVboHead >= pointsByteCount) {
                pointsByteVboHead = 0;
            }
            float vertex[3] = {p.x, p.y, p.z};
//                glBindBuffer(GL_ARRAY_BUFFER, vertices);
            glBufferSubData(GL_ARRAY_BUFFER, pointsByteStart + pointsByteVboHead,
                            3 * sizeof(float), &vertex[0]);
            pointsByteVboHead += 3 * sizeof(float);


//            pointBuffer.push_back(p.x);
//            pointBuffer.push_back(p.y);
//            pointBuffer.push_back(p.z);
//            if (pointBuffer.size() * sizeof(float) >= 18000) {
//                unsigned long bytesTillEnd = pointsByteCount - pointsByteVboHead;
//                if (bytesTillEnd < 18000) {
//                    unsigned long bytesFromBeginning = 18000 - bytesTillEnd;
//                    glBufferSubData(GL_ARRAY_BUFFER, pointsByteStart + pointsByteVboHead,
//                                    bytesTillEnd, &pointBuffer[0]);
//                    glBufferSubData(GL_ARRAY_BUFFER, pointsByteStart,
//                                    bytesFromBeginning, &pointBuffer[0]);
//                    pointBuffer.clear();
//                    pointsByteVboHead = bytesFromBeginning;
//                } else {
//                    glBufferSubData(GL_ARRAY_BUFFER, pointsByteStart + pointsByteVboHead,
//                                    pointBuffer.size() * sizeof(float), &pointBuffer[0]);
//                    pointBuffer.clear();
//                    pointsByteVboHead += pointBuffer.size() * sizeof(float);
//                }
//            }

        });

        currentColor[0] = 0.f;
        currentColor[1] = 1.f;
        currentColor[2] = 1.f;

        scaleX = (grid->xMax - grid->xMin) * 0.5f;
        scaleY = (grid->yMax - grid->yMin) * 0.5f;
        centerX = grid->xMin + (scaleX);
        centerY = grid->yMin + (scaleY);

        localModelMat = glm::dmat4();
        localModelMat = glm::scale(localModelMat, {aspectRatio * (1.9f / (grid->yMax - grid->yMin)),
                                                   (1.9f / (grid->yMax - grid->yMin)),
                                                   1.f});

        localModelMat = glm::translate(localModelMat, {-centerX, -centerY, 0.f});

        centerX = grid->xMin + ((grid->xMax - grid->xMin) * 0.5f);
        centerY = grid->yMin + ((grid->yMax - grid->yMin) * 0.5f);

        pointSizeX = scaleX;
        pointSizeY = scaleY;

        return log.str();
    }

    template <class P>
    void GridDrawer<P>::drawGrid() {
        matrixStack.clear();
        glm::dmat4 sizingMat = {{scaleX,  0.f,     0.f, 0.f},
                                {0.f,     scaleY,  0.f, 0.f},
                                {0.f,     0.f,     1.f, 0.f},
                                {centerX, centerY, 0.f, 1.f}};
        matrixStack.push_back(localModelMat * sizingMat);

        // Bind the VAO
        glBindVertexArray(vao);
        // Tell GPU to use the colorShader program for following draw calls
        glUseProgram(shader);

        drawBorders();
        drawPoints();
    }

    template <class P>
    void GridDrawer<P>::translate(float x, float y) {
        localModelMat *= glm::dmat4{{1.f, 0.f, 0.f, 0.f}, {0.f, 1.f, 0.f, 0.f}, {0.f, 0.f, 1.f, 0.f}, {x, y, 0.f, 1.f}};
    }

    template <class P>
    void GridDrawer<P>::scale(float x, float y) {
        localModelMat = glm::dmat4{{x, 0.f, 0.f, 0.f}, {0.f, y, 0.f, 0.f}, {0.f, 0.f, 1.f, 0.f}, {0.f, 0.f, 0.f, 1.f}} *
                        localModelMat;
    }

    template <class P>
    void GridDrawer<P>::transform(glm::dmat4 &transform) {
        localModelMat = localModelMat * transform;
    }

    template <class P>
    void GridDrawer<P>::zoomAtPoint(float x, float y, float amount) {
        glm::dmat4 transToCenter = glm::translate(glm::dmat4(), {-x, -y, 0.0});
        glm::dmat4 transBackOut  = glm::translate(glm::dmat4(), {x, y, 0.0});
        glm::dmat4 scale = glm::scale(glm::dmat4(), {amount, amount, 1.0});

        localModelMat = transBackOut * scale * transToCenter * localModelMat;
    }

    template <class P>
    glm::dmat4 GridDrawer<P>::getTransformMat() {
        return localModelMat;
    }

    template <class P>
    void GridDrawer<P>::pushMat(glm::dmat4 &&mat) {
        matrixStack.push_back(mat);
    }

    template <class P>
    void GridDrawer<P>::popMat() {
        matrixStack.pop_back();
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
        pushMat(glm::dmat4(localModelMat));
        preDrawCommon();
        glDrawArrays(GL_POINTS, (GLint)pointsVertStart, (GLsizei)pointsVertCount);
        popMat();
    }
}

#endif //LASERMAPPINGDRONE_GRIDDRAWER_H
