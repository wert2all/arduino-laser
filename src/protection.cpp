#include "Arduino.h"

#define ALERT_PIN 7
#define DETECTOR_PIN 8
#define RECEIVER_PIN 12

void setup() {
    Serial.begin(38400);
    pinMode(ALERT_PIN, OUTPUT);
    pinMode(DETECTOR_PIN, INPUT);
    pinMode(RECEIVER_PIN, OUTPUT);
    digitalWrite(RECEIVER_PIN, HIGH);
    digitalWrite(ALERT_PIN, LOW);
    new Controller();
}

void loop() {
    int detectorValue = digitalRead(DETECTOR_PIN);
    if (detectorValue == 0) {
        digitalWrite(ALERT_PIN, HIGH);
    }
}
