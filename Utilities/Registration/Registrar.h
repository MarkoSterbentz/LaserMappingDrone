//
// Created by volundr on 5/12/16.
//

#ifndef LASERMAPPINGDRONE_REGISTRAR_H
#define LASERMAPPINGDRONE_REGISTRAR_H

#ifdef SHOW_NONCONTRIBUTING_POINTS
#define SHOW_NONCON true
#else
#define SHOW_NONCON false
#endif

#include "ICP.h"

namespace LaserMappingDrone {

    template <class P>
    class Registrar {
        moodycamel::ReaderWriterQueue<P>* inQueue,* outQueue;
        Eigen::Matrix3Xd currentCloud, histClouds, nonContributingPoints;
        Eigen::Affine3d lastTrans;
        int writeHead, numPerCloud, numHists, numHistFilled, currentHist, counter, sparsity;
        ICP::Parameters param;

        Eigen::Vector3d decompTranslation(const Eigen::Affine3d& trans);
        Eigen::Vector3d decompRotation(const Eigen::Affine3d& trans);
        int accelError(const Eigen::Affine3d &lhs, const Eigen::Affine3d rhs);
    public:
        Registrar(moodycamel::ReaderWriterQueue<P>* inQueue, moodycamel::ReaderWriterQueue<P>* outQueue,
                  int numPerCloud, int numHists, int sparsity = 1);
        void runICP();
    };

    template <class P>
    Registrar<P>::Registrar(moodycamel::ReaderWriterQueue<P>* inQueue, moodycamel::ReaderWriterQueue<P>* outQueue,
                            int numPerCloud, int numHists, int sparsity /*= 1*/)
            : inQueue(inQueue), outQueue(outQueue), numPerCloud(numPerCloud), numHists(numHists), sparsity(sparsity - 1),
              writeHead(0), numHistFilled(0), currentHist(0), counter(0) {
        currentCloud.resize(3, numPerCloud);
        if (SHOW_NONCON) {
            nonContributingPoints.resize(3, numPerCloud * (this->sparsity));
            std::cout << "Showing additional points that do not contribute to ICP.\n";
        }
        param.stop = 1e-10;
    }

    template <class P>
    Eigen::Vector3d Registrar<P>::decompTranslation(const Eigen::Affine3d &trans) {
        Eigen::Vector3d ret;
        ret(0) = trans(0, 3);
        ret(1) = trans(1, 3);
        ret(2) = trans(2, 3);
        return ret;
    }

    template <class P>
    Eigen::Vector3d Registrar<P>::decompRotation(const Eigen::Affine3d &trans) {
        Eigen::Vector3d ret;
        ret(0) = (double)atan2(trans(2, 1), trans(2, 2));
        ret(1) = (double)atan2(-trans(2, 0), sqrt(pow(trans(2, 1), 2) + pow(trans(2, 2), 2)));
        ret(2) = (double)atan2(trans(1, 0), trans(0, 0));
        return ret;
    }

    template <class P>
    int Registrar<P>::accelError(const Eigen::Affine3d &lhs, const Eigen::Affine3d rhs) {
        Eigen::Vector3d transLhs = decompTranslation(lhs);
        Eigen::Vector3d transRhs = decompTranslation(rhs);
        Eigen::Vector3d rotatLhs = decompRotation(lhs);
        Eigen::Vector3d rotatRhs = decompRotation(rhs);

        if(     abs(abs(transLhs(0)) - abs(transRhs(0))) > 500 ||
                abs(abs(transLhs(1)) - abs(transRhs(1))) > 500 ||
                abs(abs(transLhs(2)) - abs(transRhs(2))) > 500 ){
            std::cout << "TRANSLATION acceleration overload.\n";
            return 1;
        }
        if(     abs(abs(rotatLhs(0)) - abs(rotatRhs(0))) > .1 ||
                abs(abs(rotatLhs(1)) - abs(rotatRhs(1))) > .1 ||
                abs(abs(rotatLhs(2)) - abs(rotatRhs(2))) > .1 ){
            std::cout << "ROTATION acceleration overload.\n";
            return 2;
        }
        return 0;
    }

    template <class P>
    void Registrar<P>::runICP() {
        P p;
        while (inQueue->try_dequeue(p)) {
            if (++counter >= sparsity) {
                counter = 0;
            } else {
                if (SHOW_NONCON) {
                    nonContributingPoints(0, writeHead * sparsity + counter) = p.x;
                    nonContributingPoints(1, writeHead * sparsity + counter) = p.y;
                    nonContributingPoints(2, writeHead * sparsity + counter) = p.z;
                }
                continue;
            }
            currentCloud(0, writeHead) = p.x;
            currentCloud(1, writeHead) = p.y;
            currentCloud(2, writeHead) = p.z;
            if (++writeHead >= numPerCloud) {
                writeHead = 0;
                Eigen::Affine3d trans;
                trans.setIdentity();
                bool passedIcp = false;
                bool isGoodCloudOverall = false;

                if (numHistFilled < numHists - 1) {
                    histClouds.resize(3, numPerCloud * ++numHistFilled);
                    passedIcp = true;
                    isGoodCloudOverall = true;
                } else {
                    passedIcp = ICP::point_to_point(currentCloud, histClouds, trans, param);
                    if (passedIcp) {
                        isGoodCloudOverall = !accelError(lastTrans, trans);
                    } else {
                        std::cout << "no match " << currentHist << std::endl;
                    }
                }
                if (isGoodCloudOverall) {
                    lastTrans = trans;
                    std::memcpy(&histClouds(0, currentHist * numPerCloud), &currentCloud(0, 0),
                                numPerCloud * 3 * sizeof(double));
                    if (++currentHist >= numHists - 1) {
                        currentHist = 0;
                    }
                    for (int i = 0; i < numPerCloud; ++i) {
                        outQueue->enqueue(
                                {(float) currentCloud(0, i),
                                 (float) currentCloud(1, i),
                                 (float) currentCloud(2, i)});
                    }
                    if (SHOW_NONCON) {
                        nonContributingPoints = trans * nonContributingPoints;
                        for (int i = 0; i < numPerCloud * (this->sparsity); ++i) {
                            outQueue->enqueue(
                                    {(float) nonContributingPoints(0, i),
                                     (float) nonContributingPoints(1, i),
                                     (float) nonContributingPoints(2, i)});
                        }
                    }
                }
                if (numHistFilled == numHists - 1) { // numHistFilled > 0
                    while (inQueue->try_dequeue(p));   // Discard points that came in while busy to avoid overflow.
                }
            }
        }
    }

}

#endif //LASERMAPPINGDRONE_REGISTRAR_H
