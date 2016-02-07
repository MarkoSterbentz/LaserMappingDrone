//
// Created by adayoldbagel on 1/15/16.
//

#include <sstream>
#include "QuadTreeDrawer.h"
#include "LoadShaders.h"

namespace LaserMappingDrone {

    std::string QuadTreeDrawer::init(float aspectRatio) {

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
        float corners[44] = {-1.0f, -1.0f, 0.5f, 1.0f,
                             1.0f, -1.0f, 0.5f, 1.0f,
                             1.0f, 1.0f, 0.5f, 1.0f,  // This part forms the corners of a square
                             -1.0f, 1.0f, 0.5f, 1.0f,

                             0.0f, -1.0f, 0.5f, 1.0f,
                             0.0f, 1.0f, 0.5f, 1.0f,  // This part forms the endpoints of a cross
                             -1.0f, 0.0f, 0.5f, 1.0f, // that subdivides the above square
                             1.0f, 0.0f, 0.5f, 1.0f };

        // Fill the vertex buff in GPU memory with the data from corners
        glBindBuffer(GL_ARRAY_BUFFER, vertices);
        glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 44, corners, GL_STATIC_DRAW);
        glEnableVertexAttribArray((GLuint) shader_vertex);
        glVertexAttribPointer((GLuint) shader_vertex, 4, GL_FLOAT, GL_FALSE, 0, 0);

        currentColor[0] = 0.f;
        currentColor[1] = 1.f;
        currentColor[2] = 0.f;

        localModelMat = glm::dmat4();
        localModelMat = glm::scale(localModelMat, {aspectRatio, 1.f, 1.f});

		useOptimization = true;

        return log.str();
    }

    void QuadTreeDrawer::preDrawCommon() {
        // Upload the model matrix to the colorShader program on the GPU
        glUniformMatrix4fv(shader_modelMat, 1, GL_FALSE, &((glm::mat4)(matrixStack.back()))[0][0]);
        // Upload the color you want to the colorShader program on the GPU
        glUniform3f(shader_color, currentColor[0], currentColor[1], currentColor[2]);
    }

    void QuadTreeDrawer::drawBorder() {
        preDrawCommon();
        glDrawArrays(GL_LINE_LOOP, 0, 4);
    }

    void QuadTreeDrawer::drawCross() {
        preDrawCommon();
        glDrawArrays(GL_LINES, 4, 4);
    }

    void QuadTreeDrawer::translate(float x, float y) {
        localModelMat *= glm::dmat4{{1.f, 0.f, 0.f, 0.f}, {0.f, 1.f, 0.f, 0.f}, {0.f, 0.f, 1.f, 0.f}, {x, y, 0.f, 1.f}};
    }

    void QuadTreeDrawer::scale(float x, float y) {
        localModelMat = glm::dmat4{{x, 0.f, 0.f, 0.f}, {0.f, y, 0.f, 0.f}, {0.f, 0.f, 1.f, 0.f}, {0.f, 0.f, 0.f, 1.f}} *
                        localModelMat;
    }

    void QuadTreeDrawer::zoomAtPoint(float x, float y, float amount) {
        glm::dmat4 transToCenter = glm::translate(glm::dmat4(), {-x, -y, 0.0});
        glm::dmat4 transBackOut  = glm::translate(glm::dmat4(), {x, y, 0.0});
        glm::dmat4 scale = glm::scale(glm::dmat4(), {amount, amount, 1.0});

        localModelMat = transBackOut * scale * transToCenter * localModelMat;
    }

    void QuadTreeDrawer::setColor(float r, float g, float b) {
        currentColor[0] = r;
        currentColor[1] = g;
        currentColor[2] = b;
    }

    void QuadTreeDrawer::pushMat(glm::dmat4&& mat) {
        matrixStack.push_back(mat);
    }

    void QuadTreeDrawer::popMat() {
        matrixStack.pop_back();
    }

    void QuadTreeDrawer::enterBranch(int whichQuadrant) {
        float x, y;
        switch(whichQuadrant) {
            case UP_L:
                x = -0.5f;
                y =  0.5f;
                break;
            case UP_R:
                x =  0.5f;
                y =  0.5f;
                break;
            case DN_L:
                x = -0.5f;
                y = -0.5f;
                break;
            case DN_R:
                x =  0.5f;
                y = -0.5f;
                break;
            default:
                x = 1.f;
                y = 1.f;
                break;
        }
        glm::dmat4 scaleMat(0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
        glm::dmat4 transMat(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, x, y, 0.0, 1.0);
        pushMat(matrixStack.back() * transMat * scaleMat);
    }

    glm::dmat4 QuadTreeDrawer::getTransformMat() {
        return localModelMat;
    }

	void QuadTreeDrawer::toggleOptimization() {
		useOptimization = !useOptimization;
	}
}
