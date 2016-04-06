#version 130

in vec3 vertex;
out float height;
uniform mat4 modelMat;

void main(){
    height = vertex.z;
    gl_Position = modelMat * vec4(vertex.xyz, 1.0);

}