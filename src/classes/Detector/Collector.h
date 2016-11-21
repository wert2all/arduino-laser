//
// Created by wert2all on 21.11.16.
//

#include "Detector.h"

#ifndef ARDUINO_LASER_COLLECTOR_H
#define ARDUINO_LASER_COLLECTOR_H


class Collector : public Detector {
public:
    void addDetector(Detector *);

    virtual bool isPenetration();
};


#endif //ARDUINO_LASER_COLLECTOR_H
