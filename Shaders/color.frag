#version 130

uniform vec3 color;
in float height;
out vec4 fragColor;

void main()
{
    fragColor = vec4(1.0 - height/500.0, abs(height/500.0), height/500.0 + 1.0, 1.0);
}