//
// Created by adayoldbagel on 2/4/16.
//

#ifndef LASERMAPPINGDRONE_GRIDDRAWER_H
#define LASERMAPPINGDRONE_GRIDDRAWER_H

#include <GL/glew.h>
#include <string>
#include <sstream>
#include <vector>
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include "Grid.h"
#include "LoadShaders.h"

namespace LaserMappingDrone {

    template<class P>
    struct GridDrawer {

        std::string init(float aspectRatio, Grid<P>* grid);
        void drawGrid();
        void translate(float x, float y);
        void scale (float x, float y);
        glm::dmat4 getTransformMat();
        float getMovementScaleX();
        float getMovementScaleY();

    private:
        Grid<P>* grid;

        GLuint shader;
        GLuint vao;
        GLint shader_modelMat;
        GLint shader_color;
        float currentColor[3];
        float dotScale;
        std::vector<glm::dmat4> matrixStack;
        glm::dmat4 localModelMat;
        unsigned long numGridVerts;
        float pointSizeX, pointSizeY;

        void addPoint(P& point);

        void pushMat(glm::dmat4&& mat);
        void popMat();
        void setColor(float r, float g, float b);
        void preDrawCommon();
        void drawBorders();
        void drawPoints();
    };

    template <class P>
    std::string GridDrawer<P>::init(float aspectRatio, Grid<P> *grid) {
        this->grid = grid;
        //grid->specifyPointAdditionCallback(DELEGATE(&GridDrawer<P>::addPoint, this));

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
        std::vector<float> verts = {
                0.0f, -0.01f, 0.5f, 1.0f,
                0.0f, 0.01f, 0.5f, 1.0f,        // these four verts make up the cross that draws the points
                -0.01f, 0.0f, 0.5f, 1.0f,
                0.01f, 0.0f, 0.5f, 1.0f
        };
        float xStep = 2.f / grid->xRes;
        for (unsigned x = 0; x <= grid->xRes; ++x) {
            verts.emplace_back(x * xStep - 1.f);
            verts.emplace_back(-1.f);
            verts.emplace_back(0.5f);
            verts.emplace_back(1.f);

            verts.emplace_back(x * xStep - 1.f);
            verts.emplace_back(1.f);
            verts.emplace_back(0.5f);
            verts.emplace_back(1.f);
        }
        float yStep = 2.f / grid->yRes;
        for (unsigned y = 0; y <= grid->yRes; ++y) {
            verts.emplace_back(-1.f);
            verts.emplace_back(y * yStep - 1.f);
            verts.emplace_back(0.5f);
            verts.emplace_back(1.f);

            verts.emplace_back(1.f);
            verts.emplace_back(y * yStep - 1.f);
            verts.emplace_back(0.5f);
            verts.emplace_back(1.f);
        }

        numGridVerts = verts.size() - 4;

        // Fill the vertex buff in GPU memory with the data from corners
        glBindBuffer(GL_ARRAY_BUFFER, vertices);
        glBufferData(GL_ARRAY_BUFFER, sizeof(float) * verts.size(), &verts[0], GL_STATIC_DRAW);
        glEnableVertexAttribArray((GLuint) shader_vertex);
        glVertexAttribPointer((GLuint) shader_vertex, 4, GL_FLOAT, GL_FALSE, 0, 0);

        currentColor[0] = 0.f;
        currentColor[1] = 1.f;
        currentColor[2] = 1.f;

        localModelMat = glm::dmat4();
        localModelMat = glm::scale(localModelMat, {aspectRatio * (1.9f / (grid->yMax - grid->yMin)),
                                                   (1.9f / (grid->yMax - grid->yMin)),
                                                   1.f});
        float xScale = (grid->xMax - grid->xMin) * 0.5f;
        float yScale = (grid->yMax - grid->yMin) * 0.5f;
        float xCenter = grid->xMin + (xScale);
        float yCenter = grid->yMin + (yScale);
        localModelMat = glm::translate(localModelMat, {-xCenter, -yCenter, 0.f});

        pointSizeX = (grid->xMax - grid->xMin) * 0.5f;
        pointSizeY = (grid->yMax - grid->yMin) * 0.5f;

        return log.str();
    }

    template <class P>
    void GridDrawer<P>::drawGrid() {
        matrixStack.clear();
        float xScale = (grid->xMax - grid->xMin) * 0.5f;
        float yScale = (grid->yMax - grid->yMin) * 0.5f;
        float xCenter = grid->xMin + (xScale);
        float yCenter = grid->yMin + (yScale);
        glm::dmat4 sizingMat = {{xScale,  0.f,     0.f, 0.f},
                                {0.f,     yScale,  0.f, 0.f},
                                {0.f,     0.f,     1.f, 0.f},
                                {xCenter, yCenter, 0.f, 1.f}};
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
    glm::dmat4 GridDrawer<P>::getTransformMat() {
        return localModelMat;
    }

    template <class P>
    void GridDrawer<P>::addPoint(P &point) {
        // NOT IMPLEMENTED - GOING TO BE USED FOR OPTIMIZATION
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
        preDrawCommon();
        glDrawArrays(GL_LINES, 4, (GLsizei)numGridVerts);
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
        for (unsigned i = 0; i < grid->cells.size(); ++i) {
            for (unsigned j = 0; j < grid->cells[i].points.size(); ++j) {
                pushMat(localModelMat *
                        glm::dmat4{{pointSizeX,                  0.f,                          0.f,    0.f},
                                   {0.f,                         pointSizeY,                   0.f,    0.f},
                                   {0.f,                         0.f,                          1.f,    0.f},
                                   {grid->cells[i].points[j].x,  grid->cells[i].points[j].y,   0.f,    1.f} });
                preDrawCommon();
                glDrawArrays(GL_LINES, 0, 4);
                popMat();
            }
        }
        setColor(0.f, 1.f, 1.f);
    }

    template<class P>
    float GridDrawer<P>::getMovementScaleX() {
        return pointSizeX;
    }

    template<class P>
    float GridDrawer<P>::getMovementScaleY() {
        return pointSizeY;
    }
}

#endif //LASERMAPPINGDRONE_GRIDDRAWER_H
