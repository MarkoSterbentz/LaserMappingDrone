//
// Created by volundr on 4/4/16.
//

#ifndef LASERMAPPINGDRONE_CAMERA_H
#define LASERMAPPINGDRONE_CAMERA_H

#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>

namespace LaserMappingDrone {
    class Camera {
        float fovY, near, far, aspect;
        float theta, thetaTarget, thetaSpeed;
        float phi, phiTarget, phiSpeed, phiMin, phiMax;
        float dist, distTarget, distSpeed, distMin, distMax;
        float physicsLastDt;
        float zoomFocusSpeed, zoomFocusTravelDist;
        int resX, resY;

        glm::mat4 proj, view, vp, projInv, viewInv, vpInv;
        glm::vec3 eye, focus, up, zoomFocusCurrent, zoomFocusOld, zoomFocusTarget, zoomFocusTravel;

        bool oldVp, oldVpInv, oldProj, oldProjInv, oldView, oldViewInv, zoomFocusIsMoving;

        void calculateInitialValues();
        void calcCamVectors();
        bool calcZoomFocus(float dt);
        void updateVpMat();

    public:
        Camera(float fovY, float near, float far, int resX, int resY, float theta, float phi, float dist);
        glm::mat4 getView();
        glm::mat4 getProj();
        glm::mat4 getVp();
        glm::mat4 getViewInv();
        glm::mat4 getProjInv();
        glm::mat4 getVpInv();
        glm::mat4 getRotMat();
        void zoom(float distChange);
        void rotateTheta(float angle);
        void rotatePhi(float angle);
        void setFovY(float fovY);
        void setNear(float near);
        void setFar(float far);
        void setResX(int resX);
        void setResY(int resY);
        void changeZoomFocus(const glm::vec3& focus);
        void tickShmooze(float dt);

    };
}


#endif //LASERMAPPINGDRONE_CAMERA_H
