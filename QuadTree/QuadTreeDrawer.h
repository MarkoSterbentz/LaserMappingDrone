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

#define OPTIMIZATION_THRESHOLD 0.05f

namespace LaserMappingDrone {

    struct QuadTreeDrawer {

        std::string init(float aspectRatio);
        template<class P>
        void drawQuadTree(QuadTree<P>& tree, float dotScale);
        void translate(float x, float y);
        void scale(float x, float y);
		void zoomAtPoint(float x, float y, float amount);
        glm::dmat4 getTransformMat();
		void toggleOptimization();

    private:
        GLuint shader;
        GLuint vao;
        GLint shader_modelMat;
        GLint shader_color;
        float currentColor[3];
		float dotScale;
        std::vector<glm::dmat4> matrixStack;
        glm::dmat4 localModelMat;
		bool useOptimization;

        void pushMat(glm::dmat4&& mat);
        void popMat();
        void setColor(float r, float g, float b);
        void preDrawCommon();
        void drawBorder();
        void drawCross();
        void enterBranch(int whichQuadrant);

        template<class P>
        void drawNode(Node<P>* node);
    };

    template<class P>
    void QuadTreeDrawer::drawQuadTree(QuadTree<P>& tree, float dotScale) {
        if (tree.head) {
            matrixStack.clear();
            float xScale = (tree.head->xMax - tree.head->xMin) * 0.5f;
            float yScale = (tree.head->yMax - tree.head->yMin) * 0.5f;
            float xCenter = tree.head->xMin + (xScale);
            float yCenter = tree.head->yMin + (yScale);
            glm::dmat4 sizingMat = {{xScale,  0.f,     0.f, 0.f},
                                   {0.f,     yScale,  0.f, 0.f},
                                   {0.f,     0.f,     1.f, 0.f},
                                   {xCenter, yCenter, 0.f, 1.f}};
            matrixStack.push_back(localModelMat * sizingMat);

			// Bind the VAO
			glBindVertexArray(vao);
			// Tell GPU to use the colorShader program
			glUseProgram(shader);

            drawBorder();
			this->dotScale = dotScale;
            drawNode(tree.head);
        }
    }

    template<class P>
    void QuadTreeDrawer::drawNode(Node<P> *node) {
		float xMinNDC = node->xMin * (float)localModelMat[0][0] + (float)localModelMat[3][0];
		float xMaxNDC = node->xMax * (float)localModelMat[0][0] + (float)localModelMat[3][0];
		if (!(xMaxNDC < -1.f || xMinNDC >  1.f ||	// This test is to cull nodes that are off-screen
			  node->yMax * localModelMat[1][1] + localModelMat[3][1] < -1.f ||
			  node->yMin * localModelMat[1][1] + localModelMat[3][1] >  1.f )) {
			if (!node->isEndNode()) {	// This test is to cull nodes that are very small
				if (!useOptimization || xMaxNDC - xMinNDC > OPTIMIZATION_THRESHOLD) {
					drawCross();
					for (unsigned i = 0; i < 4; ++i) {
						enterBranch(i);
						drawNode(node->children[i]);
						popMat();
					}
				} else {
					setColor(1.f, 0.f, 1.f);
					drawCross();
					setColor(0.f, 1.f, 0.f);
				}
			}
			else if (!node->points.empty()) {
				setColor(1.f, 0.f, 1.f);
				for (auto point : node->points) {
					pushMat(localModelMat * glm::dmat4{ {dotScale, 0.f,      0.f,    0.f},
													   {0.f,      dotScale, 0.f,    0.f},
													   {0.f,      0.f,      1.f,    0.f},
													   {point.x,  point.y,  0.f,    1.f} });
					drawCross();
					popMat();
				}
				setColor(0.f, 1.f, 0.f);
			}
		}
    }
}

#endif //OPENGL_SIMPLEOBJECT_H
