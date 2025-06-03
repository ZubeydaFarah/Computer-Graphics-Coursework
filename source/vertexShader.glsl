#version 330 core

layout(location = 0) in vec3 position;
layout(location = 1) in vec3 colour;

out vec3 fragmentColour;

void main()
{
    // Output vertex position
    gl_Position = vec4(position, 1.0);

    // Output fragment colour
    fragmentColour = colour;

}