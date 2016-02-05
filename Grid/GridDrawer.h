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
        void drawGrid(float dotScale);
        void translate(float x, float y);
        void scale (float x, float y);
        glm::dmat4 getTransformMat();

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

        void addPoint(P& point);

        void pushMat(glm::dmat4&& mat);
        void popMat();
        void setColor(float r, float g, float b);
        void preDrawCommon();
        void drawBorders();
        void drawPoints();
    };

    template <class P>
    std::string GridDrawer::init(float aspectRatio, Grid<P> *grid) {
        this->grid = grid;
        grid->specifyPointAdditionCallback(DELEGATE(&GridDrawer::addPoint, this));

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
        float xStep = 1.f / grid->resX;
        for (unsigned x = 0; x < grid->resX; ++x) {
            verts.emplace_back(x * xStep);
            verts.emplace_back(-1.f);
            verts.emplace_back(0.5f);
            verts.emplace_back(1.f);

            verts.emplace_back(x * xStep);
            verts.emplace_back(1.f);
            verts.emplace_back(0.5f);
            verts.emplace_back(1.f);
        }
        float yStep = 1.f / grid->resY;
        for (unsigned y = 0; y < grid->resY; ++y) {
            verts.emplace_back(-1.f);
            verts.emplace_back(1.f / y);
            verts.emplace_back(0.5f);
            verts.emplace_back(1.f);

            verts.emplace_back(1.f);
            verts.emplace_back(1.f / y);
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
        currentColor[2] = 0.f;

        localModelMat = glm::dmat4();
        localModelMat = glm::scale(localModelMat, {aspectRatio, 1.f, 1.f});

        return log.str();
    }

    void GridDrawer::drawGrid(float dotScale) {

    }

    void GridDrawer::translate(float x, float y) {

    }

    void GridDrawer::scale(float x, float y) {

    }

    glm::dmat4 GridDrawer::getTransformMat() {
        return glm::dmat4();
    }

    template <class P>
    void GridDrawer::addPoint(P &point) {

    }

    void GridDrawer::pushMat(glm::dmat4 &&mat) {

    }

    void GridDrawer::popMat() {

    }

    void GridDrawer::setColor(float r, float g, float b) {

    }

    void GridDrawer::drawBorders() {

    }

    void GridDrawer::preDrawCommon() {

    }

    void GridDrawer::drawPoints() {

    }
}

#endif //LASERMAPPINGDRONE_GRIDDRAWER_H
