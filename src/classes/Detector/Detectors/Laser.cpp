#include "Laser.h"
#include "Arduino.h"

Laser::Laser(int diodePim, int detectorPin) {
    this->diodePin = diodePim;
    this->detectorPin = detectorPin;

    pinMode(this->detectorPin, INPUT);
    pinMode(this->diodePin, OUTPUT);
//    digitalWrite(RECEIVER_PIN, HIGH);
};

bool Laser::isPenetration() {
    return false;
}

void Laser::turnOn() {
    digitalWrite(this->diodePin, HIGH);
}

void Laser::turnOff() {
    digitalWrite(this->diodePin, LOW);
}