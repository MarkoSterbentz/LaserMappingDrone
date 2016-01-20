#version 150

in vec3 vertex;
uniform mat4 modelMat;

void main(){
    gl_Position = modelMat * vec4(vertex, 1.0);
}