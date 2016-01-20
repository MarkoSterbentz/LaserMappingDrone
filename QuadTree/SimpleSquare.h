//
// Created by adayoldbagel on 1/15/16.
//

#ifndef OPENGL_SIMPLEOBJECT_H
#define OPENGL_SIMPLEOBJECT_H


#include <GL/glew.h>
#include <string>

struct SimpleSquare {

    GLuint shader;
    GLint shader_modelMat;
    GLint shader_color;

    float modelMatrix[16] = {1.f, 0.f, 0.f, 0.f,
                             0.f, 1.f, 0.f, 0.f,
                             0.f, 0.f, 1.f, 0.f,
                             0.f, 0.f, 0.f, 1.f};

    std::string init();
    void draw();
    void translate(float x, float y, float z);
};

#endif //OPENGL_SIMPLEOBJECT_H
