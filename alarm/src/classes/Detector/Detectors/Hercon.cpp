#include "Hercon.h"
#include "Arduino.h"


Hercon::Hercon(int herconPin) {
    this->herconPin = herconPin;
    pinMode(this->herconPin, INPUT);
}

bool Hercon::isPenetration() {
    return false;
}