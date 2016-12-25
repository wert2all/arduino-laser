//
// Created by wert2all on 21.11.16.
//

#include "../Detector.h"

#ifndef ARDUINO_LASER_HERCON_H
#define ARDUINO_LASER_HERCON_H


class Hercon : public Detector {
public:
    Hercon(int herconPin);

    virtual bool isPenetration();

protected:
    int herconPin;
};


#endif //ARDUINO_LASER_HERCON_H
