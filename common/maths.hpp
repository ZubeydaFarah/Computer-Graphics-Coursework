#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <cmath>

class Maths
{
public:
    static float radians(float angle)
    {
        return angle * 3.1415926f / 180.0f;
    }

    static glm::mat4 translate(const glm::vec3 &v)
    {
        glm::mat4 translate(1.0f);
        translate[3][0] = v.x;
        translate[3][1] = v.y;
        translate[3][2] = v.z;
        return translate;
    }

    static glm::mat4 scale(const glm::vec3 &v)
    {
        glm::mat4 scale(1.0f);
        scale[0][0] = v.x;
        scale[1][1] = v.y;
        scale[2][2] = v.z;
        return scale;
    }

    static glm::mat4 rotate(const float &angle, glm::vec3 axis)
    {
        return glm::rotate(glm::mat4(1.0f), angle, glm::normalize(axis));
    }
};

