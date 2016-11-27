#ifndef ARDUINO_LASER_DETECTOR_H
#define ARDUINO_LASER_DETECTOR_H


class Detector {
public:
    virtual bool isPenetration();

    virtual void turnOn();

    virtual void turnOff();
};


#endif //ARDUINO_LASER_DETECTOR_H
