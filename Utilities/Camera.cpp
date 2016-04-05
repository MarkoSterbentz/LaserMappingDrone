//
// Created by volundr on 4/4/16.
//

#include <iostream>
#include "Camera.h"

namespace LaserMappingDrone {
    Camera::Camera(float fovY, float near, float far, int resX, int resY, float theta, float phi, float dist) :
                    fovY(fovY), near(near), far(far), resX(resX), resY(resY), theta(theta), phi(phi), dist(dist) {
        calculateInitialValues();
    }

    void Camera::calculateInitialValues() {
        aspect = (float)resX / (float)resY;
        thetaTarget = theta;
        thetaSpeed = 0.004f;
        phiTarget = phi;
        phiSpeed = 0.004;
        phiMin = -1.5f;
        phiMax = 1.5f;
        distTarget = dist;
        distSpeed = 0.004f;
        distMin = 100.f;
        distMax = 3000.f;
        physicsLastDt = 1.f;
        zoomFocusSpeed = 4.f;
        zoomFocusTravelDist = 1.f;

        oldVp = true;
        oldVpInv = true;
        oldProj = true;
        oldProjInv = true;
        oldView = true;
        oldViewInv = true;
        zoomFocusIsMoving = false;

        up = glm::vec3(0, 0, 1);
        zoomFocusTravel = glm::vec3(0, 0, 0);
    }

    void Camera::calcCamVectors() {
        focus = zoomFocusCurrent;
        float z = dist * sinf(phi);
        float horizDist = dist * cosf(phi);
        float xDist = horizDist * cosf(theta);
        float yDist = horizDist * sinf(theta);
        eye = glm::vec3(xDist + focus[0], yDist + focus[1], z + focus[2]);
    }

    bool Camera::calcZoomFocus(float dt) {
        if(zoomFocusIsMoving) {
            float currentShmoozeLength = (float)glm::length(zoomFocusTravel);
            if (currentShmoozeLength < 0.001f) {
                zoomFocusCurrent = zoomFocusTarget;
                zoomFocusIsMoving = false;
            } else {
                float interp = powf((1.f - (currentShmoozeLength / zoomFocusTravelDist)
                                           * 2.f), 2) * -1 + 1.001f;
                zoomFocusCurrent += interp * zoomFocusSpeed * dt * zoomFocusTravel;
            }
            return true;
        } else {
            return false;
        }
    }

    void Camera::changeZoomFocus(const glm::vec3& focus) {
        zoomFocusTarget = focus;
        zoomFocusOld = zoomFocusCurrent;
        zoomFocusTravel = zoomFocusTarget - zoomFocusOld;
        zoomFocusTravelDist = (float)glm::length(zoomFocusTravel);
        if (zoomFocusTravelDist > 0) {
            zoomFocusIsMoving = true;
        }
    }

    void Camera::updateVpMat() {
        if(oldProj) {
            proj = glm::perspective(fovY, aspect, near, far);
            oldProj = false;
            oldProjInv = true;
            oldVp = true;
        }
        if (oldView) {
            calcCamVectors();
            view = glm::lookAt(eye, focus, up);
            oldView = false;
            oldViewInv = true;
            oldVp = true;
        }
        if (oldVp) {
            vp = proj * view;
            oldVp = false;
            oldVpInv = true;
        }
    }

    glm::mat4 Camera::getView() {
        if (oldView) {
            updateVpMat();
        }
        return view;
    }

    glm::mat4 Camera::getProj() {
        if (oldProj) {
            updateVpMat();
        }
        return proj;
    }

    glm::mat4 Camera::getVp() {
        if (oldVp || oldView || oldProj) {
            updateVpMat();
        }
        return vp;
    }

    glm::mat4 Camera::getViewInv() {
        if (oldViewInv) {
            viewInv = glm::inverse(view);
            oldViewInv = false;
        }
        return viewInv;
    }

    glm::mat4 Camera::getProjInv() {
        if (oldProjInv) {
            projInv = glm::inverse(proj);
            oldProjInv = false;
        }
        return projInv;
    }

    glm::mat4 Camera::getVpInv() {
        if (oldVpInv) {
            vpInv = glm::inverse(vp);
            oldVpInv = false;
        }
        return vpInv;
    }

    glm::mat4 Camera::getRotMat() {
        float cosX = cosf(phi);
        float sinX = sinf(phi);
        float cosY = cosf(theta);
        float sinY = sinf(theta);
        return glm::mat4(
                cosY, 0.f, -sinY, 0.f,
                -sinX * sinY, cosX, -sinX * cosY, 0.0,
                cosX * sinY, sinX, cosX * cosY, 0.0,
                0.0, 0.0, 0.0, 1.0);
    }

    void Camera::tickShmooze(float dt) {
        if (fabs(dist - distTarget) > distSpeed * physicsLastDt * 0.2f) {
            dist += distSpeed * dt * (distTarget - dist);
            oldView = true;
        }
        if (fabs(theta - thetaTarget) > thetaSpeed * physicsLastDt * 0.2 ||
                fabs(phi - phiTarget) > phiSpeed * physicsLastDt * 0.2) {
            theta += thetaSpeed * dt * (thetaTarget - theta);
            phi += phiSpeed * dt * (phiTarget - phi);
            oldView = true;
        }
        if (calcZoomFocus(dt)) {
            oldView = true;
        }
        physicsLastDt = dt;
    }

    void Camera::zoom(float distChange) {
        distTarget += distChange;
        if (distTarget > distMax) {
            distTarget = distMax;
        } else if (distTarget < distMin) {
            distTarget = distMin;
        }
    }

    void Camera::rotateTheta(float angle) {
        thetaTarget += angle;
    }

    void Camera::rotatePhi(float angle) {
        phiTarget += angle;
        if (phiTarget > phiMax) {
            phiTarget = phiMax;
        } else if (phiTarget < phiMin) {
            phiTarget = phiMin;
        }
    }

    void Camera::setFovY(float fovY) {
        this->fovY = fovY;
    }

    void Camera::setNear(float near) {
        this->near = near;
    }

    void Camera::setFar(float far) {
        this->far = far;
    }

    void Camera::setResX(int resX) {
        this->resX = resX;
        aspect = this->resX / resY;
    }

    void Camera::setResY(int resY) {
        this->resY = resY;
        aspect = resX / this->resY;
    }


}

