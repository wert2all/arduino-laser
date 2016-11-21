#include "AlertDiode.h"
#include "Arduino.h"

AlertDiode::AlertDiode(int ledPin) {
    this->ledPin = ledPin;

    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);
}

void AlertDiode::alert() {
    digitalWrite(this->ledPin, HIGH);
}