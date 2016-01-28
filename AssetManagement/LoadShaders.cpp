//
// Created by adayoldbagel on 1/15/16.
//

#include <fstream>
#include <vector>
#include <sstream>
#include "LoadShaders.h"

GLuint loadShaders(const char * vertFilePath,const char * fragFilePath, std::stringstream& out) {
    out << std::endl; // Just some spacing for console output.

    // Create the empty shaders
    GLuint vertShaderID = glCreateShader(GL_VERTEX_SHADER);
    GLuint fragShaderID = glCreateShader(GL_FRAGMENT_SHADER);
    GLuint progID = glCreateProgram();

    // These are for validating shaders and checking errors
    GLint result = GL_FALSE;
    int infoLogLength;

    std::string vertShaderCode;
    std::ifstream vertShaderStream(vertFilePath, std::ios::in);
    if(vertShaderStream.is_open()) {
        std::string Line = "";
        while(getline(vertShaderStream, Line))
            vertShaderCode += "\n" + Line;
        vertShaderStream.close();
    } else {
        out << "\n<!>    Cannot open " << vertFilePath << std::endl;
        return GL_FALSE;
    }

    std::string fragShaderCode;
    std::ifstream fragShaderStream(fragFilePath, std::ios::in);
    if(fragShaderStream.is_open()) {
        std::string Line = "";
        while(getline(fragShaderStream, Line))
            fragShaderCode += "\n" + Line;
        fragShaderStream.close();
    } else {
        out << "\n<!>    Cannot open " << fragFilePath << std::endl;
        return GL_FALSE;
    }

    // Compile Vertex Shader
    out << "Compiling vertex shader : " << vertFilePath;
    char const * vertSourcePointer = vertShaderCode.c_str();
    glShaderSource(vertShaderID, 1, &vertSourcePointer , NULL);
    glCompileShader(vertShaderID);

    // Check Vertex Shader
    glGetShaderiv(vertShaderID, GL_COMPILE_STATUS, &result);
    glGetShaderiv(vertShaderID, GL_INFO_LOG_LENGTH, &infoLogLength);
    if (infoLogLength > 0) {
        std::vector<char> vertShaderErrorMessage((unsigned long)(infoLogLength + 1));
        glGetShaderInfoLog(vertShaderID, infoLogLength, NULL, &vertShaderErrorMessage[0]);
        out << std::endl << &vertShaderErrorMessage[0];
    }
    if (result == GL_FALSE) {
        out << vertFilePath << "\n<!>    VERTEX SHADER DID NOT COMPILE!\n\n";
        glDeleteShader(vertShaderID);
        return GL_FALSE;
    } else {
        out << vertFilePath << " compiled successfully.\n";
    }

    // Compile Fragment Shader
    out << "Compiling fragment shader : " << fragFilePath;
    char const * fragSourcePointer = fragShaderCode.c_str();
    glShaderSource(fragShaderID, 1, &fragSourcePointer , NULL);
    glCompileShader(fragShaderID);

    // Check Fragment Shader
    glGetShaderiv(fragShaderID, GL_COMPILE_STATUS, &result);
    glGetShaderiv(fragShaderID, GL_INFO_LOG_LENGTH, &infoLogLength);
    if (infoLogLength > 0) {
        std::vector<char> fragShaderErrorMessage((unsigned long)(infoLogLength + 1));
        glGetShaderInfoLog(fragShaderID, infoLogLength, NULL, &fragShaderErrorMessage[0]);
        out << std::endl << &fragShaderErrorMessage[0];
    }
    if (result == GL_FALSE) {
        out << fragFilePath << "\n<!>    FRAGMENT SHADER DID NOT COMPILE!\n\n";
        glDeleteShader(vertShaderID);
        glDeleteShader(fragShaderID);
        return GL_FALSE;
    } else {
        out << fragFilePath << " compiled successfully.\n";
    }

    out << "Linking Program...";

    glAttachShader(progID, vertShaderID);
    glAttachShader(progID, fragShaderID);
    glLinkProgram(progID);

    // Check the program
    glGetProgramiv(progID, GL_LINK_STATUS, &result);
    glValidateProgram(progID);
    glGetProgramiv(progID, GL_INFO_LOG_LENGTH, &infoLogLength);
    if (infoLogLength > 0) {
        std::vector<char> progErrorMessage((unsigned long)(infoLogLength + 1));
        glGetProgramInfoLog(progID, infoLogLength, NULL, &progErrorMessage[0]);
        out << std::endl << &progErrorMessage[0];
    }

    glDeleteShader(vertShaderID);
    glDeleteShader(fragShaderID);

    out << "shader program successfully loaded.\n";
    return progID;
}