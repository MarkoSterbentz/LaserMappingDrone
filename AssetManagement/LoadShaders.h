//
// Created by adayoldbagel on 1/15/16.
//

#include <GL/glew.h>

#ifndef OPENGL_LOADSHADERS_H
#define OPENGL_LOADSHADERS_H

GLuint loadShaders(const char * vertFilePath, const char * fragFilePath, std::stringstream& out);

#endif //OPENGL_LOADSHADERS_H
