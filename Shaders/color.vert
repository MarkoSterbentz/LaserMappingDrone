#version 130

in vec3 vertex;
uniform mat4 modelMat;

void main(){
    gl_Position = modelMat * vec4(vertex.xy, 0.5, 1.0);
}