#ifndef ARDUINO_LASER_ALERT_H
#define ARDUINO_LASER_ALERT_H

#include "Providers/Provider.h"

class Alert {
public:
    bool isOff();

    void turnOn();

    void turnOff();

    void addProvider(Provider *);
};


#endif //ARDUINO_LASER_ALERT_H
