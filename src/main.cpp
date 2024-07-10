#include <Arduino.h>

#define LED_PIN 2

void setup() {
    Serial.begin(115200);
    Serial.println("Web Flash!");

    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    Serial.println("Hello World!");
    digitalWrite(LED_PIN, HIGH);
    delay(500);

    Serial.println("Goodbye World!");
    digitalWrite(LED_PIN, LOW);
    delay(500);
}