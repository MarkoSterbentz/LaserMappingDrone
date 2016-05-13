//
// Created by volundr on 5/12/16.
//

#ifndef LASERMAPPINGDRONE_REGISTRAR_H
#define LASERMAPPINGDRONE_REGISTRAR_H

#include "ICP.h"

namespace LaserMappingDrone {

    template <class P>
    class Registrar {
        moodycamel::ReaderWriterQueue<P>* inQueue,* outQueue;
        Eigen::Matrix3Xd currentCloud, histClouds;
        int writeHead, numPerCloud, numHists, numHistFilled, currentHist, counter, sparsity;
        ICP::Parameters param;

    public:
        Registrar(moodycamel::ReaderWriterQueue<P>* inQueue, moodycamel::ReaderWriterQueue<P>* outQueue,
                  int numPerCloud, int numHists, int sparsity = 10)
                : inQueue(inQueue), outQueue(outQueue), numPerCloud(numPerCloud), numHists(numHists), sparsity(sparsity),
                  writeHead(0), numHistFilled(0), currentHist(0), counter(0) {
            currentCloud.resize(3, numPerCloud);
            param.stop = 1e-10;
        }
        void runICP() {
            P p;
            while (inQueue->try_dequeue(p)) {
                if (++counter == sparsity) {
                    counter = 0;
                } else {
                    continue;
                }
                currentCloud(0, writeHead) = p.x;
                currentCloud(1, writeHead) = p.y;
                currentCloud(2, writeHead) = p.z;
                if (++writeHead >= numPerCloud) {
                    writeHead = 0;
                    bool isGoodMatch = true;
                    if (numHistFilled == numHists - 1) { // numHistFilled > 0
                        isGoodMatch = ICP::point_to_point(currentCloud, histClouds, param);
                    }
                    if (numHistFilled < numHists - 1) {
                        histClouds.resize(3, numPerCloud * ++numHistFilled);
                    }
                    if (isGoodMatch) {
                        std::memcpy(&histClouds(0, currentHist * numPerCloud), &currentCloud(0, 0),
                                    numPerCloud * 3 * sizeof(double));
                        if (++currentHist >= numHists - 1) {
                            currentHist = 0;
                        }
                        for (int i = 0; i < numPerCloud; ++i) {
                            outQueue->enqueue(
                                    {(float) currentCloud(0, i), (float) currentCloud(1, i), (float) currentCloud(2, i)});
                        }
                    } else {
                        std::cout << "no match " << currentHist << std::endl;
                    }
                    if (numHistFilled == numHists - 1) { // numHistFilled > 0
                        while (inQueue->try_dequeue(p));   // Discard points that came in while busy to avoid overflow.
                    }
                }
            }
        }
    };
}

#endif //LASERMAPPINGDRONE_REGISTRAR_H
