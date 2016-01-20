//
// Created by adayoldbagel on 1/15/16.
//

#ifndef OPENGL_SIMPLEOBJECT_H
#define OPENGL_SIMPLEOBJECT_H


#include <GL/glew.h>
#include <string>
#include <vector>
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include "QuadTree.h"

namespace LaserMappingDrone {

    struct QuadTreeDrawer {

        std::string init(float aspectRatio);
        template<class P>
        void drawQuadTree(QuadTree<P>& tree, float dotScale);
        void translate(float x, float y);
        void scale(float x, float y);
        template<class P>
        void clickEventHandler(QuadTree<P>& tree, float x, float y);

    private:
        GLuint shader;
        GLuint vao;
        GLint shader_modelMat;
        GLint shader_color;
        float currentColor[3];
        std::vector<glm::mat4> matrixStack;
        glm::mat4 localModelMat;

        void pushMat(glm::mat4&& mat);
        void popMat();
        void setColor(float r, float g, float b);
        void preDrawCommon();
        void drawBorder();
        void drawCross();
        void drawDot();
        void enterBranch(int whichQuadrant);

        template<class P>
        void drawNode(Node<P>* node, float dotScale);
    };

    template<class P>
    void QuadTreeDrawer::drawQuadTree(QuadTree<P>& tree, float dotScale) {
        matrixStack.clear();
        float xScale = (tree.head->xMax - tree.head->xMin) * 0.5f;
        float yScale = (tree.head->yMax - tree.head->yMin) * 0.5f;
        float xCenter = tree.head->xMin + (xScale);
        float yCenter = tree.head->yMin + (yScale);
        glm::mat4 sizingMat = {{xScale,  0.f,     0.f,     0.f},
                               {0.f,     yScale,  0.f,     0.f},
                               {0.f,     0.f,     1.f,     0.f},
                               {xCenter, yCenter, 0.f,     1.f}};
        matrixStack.push_back(localModelMat * sizingMat);
        drawBorder();
        drawNode(tree.head, dotScale);
    }

    template<class P>
    void QuadTreeDrawer::drawNode(Node<P> *node, float dotScale) {
        if (!node->isEndNode()) {
            drawCross();
            for (unsigned i = 0; i < 4; ++i) {
                enterBranch(i);
                drawNode(node->children[i], dotScale);
                popMat();
            }
        } else if (!node->points.empty()) {
            setColor(1.f, 0.f, 1.f);
            for (auto point: node->points) {
                pushMat(localModelMat * glm::mat4{{dotScale, 0.f, 0.f, 0.f},
                                                  {0.f, dotScale, 0.f, 0.f},
                                                  {0.f, 0.f, 1.f, 0.f},
                                                  {point.x, point.y, 0.f, 1.f}});
            }
            drawCross();
            popMat();
            setColor(0.f, 1.f, 0.f);
        }
    }

    template<class P>
    void QuadTreeDrawer::clickEventHandler(QuadTree<P> &tree, float x, float y) {
        glm::mat4 invMat = glm::inverse(localModelMat);
        glm::vec4 scrSpaceClick = {x, y, 0.f, 1.f};
        glm::vec4 treeSpaceClick = invMat * scrSpaceClick;
        tree.addPoint(P{treeSpaceClick.x, treeSpaceClick.y});

    }
}

#endif //OPENGL_SIMPLEOBJECT_H
