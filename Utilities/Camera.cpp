//
// Created by volundr on 4/4/16.
//

#include <iostream>
#include "Camera.h"

namespace LaserMappingDrone {
    Camera::Camera(float fovY, float near, float far, float aspect,
                   float theta, float phi, float dist, float distMin, float distMax) :
                    fovY(fovY), near(near), far(far), aspect(aspect),
                    theta(theta), phi(phi), dist(dist), distMin(distMin), distMax(distMax) {
        calculateInitialValues();
    }

    void Camera::calculateInitialValues() {
        thetaTarget = theta;
        thetaSpeed = 0.004f;
        phiTarget = phi;
        phiSpeed = 0.004;
        phiMin = -1.5f;
        phiMax = 1.5f;
        distTarget = dist;
        distSpeed = (distMax - distMin) * 0.0000005f;
        physicsLastDt = 1.f;
        zoomFocusSpeed = 0.01f;

        oldVp = true;
        oldVpInv = true;
        oldProj = true;
        oldProjInv = true;
        oldView = true;
        oldViewInv = true;

        up = glm::vec3(0, 0, 1);
    }

    void Camera::calcCamVectors() {
        focus = zoomFocusCurrent;
        float z = dist * sinf(phi);
        float horizDist = dist * cosf(phi);
        float xDist = horizDist * cosf(theta);
        float yDist = horizDist * sinf(theta);
        eye = glm::vec3(xDist + focus[0], yDist + focus[1], z + focus[2]);
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

    float Camera::getFovY() {
        return fovY;
    }

    float Camera::getAspect() {
        return aspect;
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
        glm::vec3 zoomFocusTravel = zoomFocusTarget - zoomFocusCurrent;
        if ((float)glm::length(zoomFocusTravel) > zoomFocusSpeed * physicsLastDt * 0.1) {
            zoomFocusCurrent += zoomFocusSpeed * dt * zoomFocusTravel;
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
        oldProj = true;
    }

    void Camera::setNear(float near) {
        this->near = near;
        oldProj = true;
    }

    void Camera::setFar(float far) {
        this->far = far;
        oldProj = true;
    }

    int Camera::getHorizIntersectionFromScreenSpace(const glm::vec2& ndcClick, glm::vec2& result) {
        // this first part finds the intersection of your ray with the horizontal z = 0 plane, whether in front of you
        // or behind you.
        glm::vec4 rayClip = getProjInv() * glm::vec4(ndcClick.x, ndcClick.y, -1.f, 1.f);
        glm::vec4 rayWorld = getViewInv() * glm::vec4(rayClip.x, rayClip.y, -1.f, 0.f);
        if (rayWorld.z) {
            glm::vec4 ray = glm::normalize(rayWorld);
            if (ray.x) {
                float slopeX = ray.z / ray.x;
                result.x = eye.x + (-eye.z / slopeX);
            } else {
                result.x = eye.x;
            }
            if (ray.y) {
                float slopeY = ray.z / ray.y;
                result.y = eye.y + (-eye.z / slopeY);
            } else {
                result.y = eye.y;
            }
        }
        // the rest is to make sure the ray actually hits the horizontal plane (not the horizon) and that
        // it hits somewhere in the camera's field of view (that it hits in front of you)
        int clickedSkyOrGround = (rayWorld.z > 0) - (rayWorld.z < 0); // results 1 for sky, -1 for ground, 0 for horizon
        int cameraAboveOrBelow = (eye.z > 0) - (eye.z < 0); // results 1 for above horizon, -1 for below, 0 for horizon
        if (cameraAboveOrBelow) {
            if (cameraAboveOrBelow == -clickedSkyOrGround) {
                return clickedSkyOrGround;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
        // so finally, it returns 1 if you hit the horizontal plane from below (meaning the z = 0 plane was your sky)
        // or -1 if you hit the same z = 0 plane from above (you hit the ground)
        // or 0 if you never hit the z = 0 plane (like if you are above it and also shoot above it,
        // or you shoot the horizon line or something.
    }

    void Camera::dragHorizPlaneFromNdcSpace(const glm::vec2 &ndcStart, const glm::vec2 &ndcEnd) {
        glm::vec2 worldStart, worldEnd;
        int startIntersection = getHorizIntersectionFromScreenSpace(ndcStart, worldStart);
        int endIntersection = getHorizIntersectionFromScreenSpace(ndcEnd, worldEnd);
        if (startIntersection && endIntersection && startIntersection == endIntersection) {
            zoomFocusTarget += glm::vec3(worldEnd - worldStart, 0.f);
            std::cout << worldStart.x << " " << worldStart.y << " -> " << worldEnd.x << " " << worldEnd.y << std::endl;
        }
    }

    void Camera::moveBackward(float distance) {
        glm::vec2 horizVector;
        horizVector.x = cosf(theta);
        horizVector.y = sinf(theta);
        horizVector *= distance;
        zoomFocusTarget += glm::vec3(horizVector, 0.0f);
    }

    void Camera::moveLeft(float distance) {
        glm::vec2 horizVector;
        horizVector.x = cosf(theta - 1.57079632679f);
        horizVector.y = sinf(theta - 1.57079632679f);
        horizVector *= distance;
        zoomFocusTarget += glm::vec3(horizVector, 0.0f);
    }

    void Camera::setAspect(float aspect) {
        this->aspect = aspect;
        oldProj = true;
    }

    void Camera::changeZoomFocus(const glm::vec3 &focus) {
        zoomFocusTarget = focus;
    }

    int Camera::lookingUpOrDown() {
        return (phi > 0) - (phi < 0);
    }
}

