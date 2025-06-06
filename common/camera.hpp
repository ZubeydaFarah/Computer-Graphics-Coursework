#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

struct Camera {
    glm::vec3 position;
    glm::vec3 forward;
    glm::vec3 up;
    glm::mat4 view;
    glm::mat4 projection;
    float yaw;
    float pitch;

    Camera(glm::vec3 pos, glm::vec3 lookAt) {
        position = pos;
        forward = glm::normalize(lookAt - pos);
        up = glm::vec3(0.0f, 1.0f, 0.0f);
        yaw = -90.0f;
        pitch = 0.0f;
        updateViewMatrix();
    }

    void updateViewMatrix() {
        view = glm::lookAt(position, position + forward, up);
    }

    void calculateMatrices() {
        updateViewMatrix();
    }
};
