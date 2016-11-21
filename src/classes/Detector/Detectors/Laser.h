//
// Created by wert2all on 21.11.16.
//

#include "../Detector.h"

#ifndef ARDUINO_LASER_LASER_H
#define ARDUINO_LASER_LASER_H

class Laser : public Detector {
public:
    Laser(int diodePim, int detectorPin);

    virtual bool isPenetration();
};


#endif //ARDUINO_LASER_LASER_H
