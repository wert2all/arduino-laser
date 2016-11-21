#include "Arduino.h"
#include "classes/DetectorController.h"
#include "classes/Detector/Collector.h"
#include "classes/Alert/Alert.h"
#include "classes/Detector/Detectors/Laser.h"
#include "classes/Detector/Detectors/Hercon.h"

#define ALERT_PIN 7
#define DETECTOR_PIN 8
#define RECEIVER_PIN 12
#define HERCON_PIN 5

DetectorController *controller = new DetectorController();
Collector *detector = new Collector();
Alert *alert = new Alert();

void setup() {
    Serial.begin(38400);
    pinMode(ALERT_PIN, OUTPUT);
    pinMode(DETECTOR_PIN, INPUT);
    pinMode(RECEIVER_PIN, OUTPUT);
    digitalWrite(RECEIVER_PIN, HIGH);
    digitalWrite(ALERT_PIN, LOW);

    detector->addDetector(new Laser(RECEIVER_PIN, DETECTOR_PIN));
    detector->addDetector(new Hercon(HERCON_PIN));


}

void loop() {
    controller->checkAction();
    if (controller->isOn()) {
        if (alert->isOff()) {
            if (detector->isPenetration()) {
                alert->turnOn();
            }
        }
//
//        int detectorValue = digitalRead(DETECTOR_PIN);
//        if (detectorValue == 0) {
//            digitalWrite(ALERT_PIN, HIGH);
//        }
    } else {
        alert->turnOff();
    }
}
