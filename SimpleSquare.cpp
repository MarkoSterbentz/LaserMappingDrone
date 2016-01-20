//
// Created by adayoldbagel on 1/15/16.
//

#include <sstream>
#include "SimpleSquare.h"
#include "LoadShaders.h"

std::string SimpleSquare::init() {

    std::stringstream log;

    // Create and bind a VAO
    GLuint VAO;
    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);

    // set up a simple shader that shades any triangle a single solid color.
    shader = loadShaders("colorShader.vert", "colorShader.frag", log);
    GLint shader_vertex = glGetAttribLocation(shader, "vertex");
    shader_modelMat = glGetUniformLocation(shader, "modelMat");
    shader_color = glGetUniformLocation(shader, "color");

    // Create the vertex buffer in GPU memory (nothing in it yet)
    GLuint vertices;
    glGenBuffers(1, &vertices);

    // this is the data that will be buffered up as vertices
    float corners[24] = {-0.5f, -0.5f, 0.5f, 0.5f,
                         0.5f, -0.5f, 0.5f, 0.5f,
                         0.5f,  0.5f, 0.5f, 0.5f,
                         0.5f,  0.5f, 0.5f, 0.5f,
                         -0.5f,  0.5f, 0.5f, 0.5f,
                         -0.5f, -0.5f, 0.5f, 0.5f};

    // Fill the vertex buff in GPU memory with the data from corners
    glBindBuffer(GL_ARRAY_BUFFER, vertices);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 24, corners, GL_STATIC_DRAW);
    glEnableVertexAttribArray((GLuint)shader_vertex);
    glVertexAttribPointer((GLuint)shader_vertex, 4, GL_FLOAT, GL_FALSE, 0, 0);

    return log.str();
}

void SimpleSquare::draw() {
    // Tell GPU to use the colorShader program for following draw calls
    glUseProgram (shader);
    // Upload the model matrix to the colorShader program on the GPU
    glUniformMatrix4fv (shader_modelMat, 1, GL_FALSE, &modelMatrix[0]);
    // Upload the color you want to the colorShader program on the GPU
    glUniform3f (shader_color, 0.0, 1.0, 0.0);
    // Execute the shader on the GPU (draw)
    glDrawArrays(GL_TRIANGLES, 0, 6);
}

void SimpleSquare::translate(float x, float y, float z) {
    modelMatrix[12] += x;
    modelMatrix[13] += y;
    modelMatrix[14] += z;
}
