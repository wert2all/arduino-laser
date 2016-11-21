//
// Created by wert2all on 21.11.16.
//

#ifndef ARDUINO_LASER_ALERTDIODE_H
#define ARDUINO_LASER_ALERTDIODE_H

#include "Provider.h"

class AlertDiode : public Provider {
public:
    AlertDiode(int ledPin);

    virtual void alert();
};


#endif //ARDUINO_LASER_ALERTDIODE_H
