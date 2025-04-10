#include <Arduino.h>

int red = 13;
int yellow = 14;
int green = 26;

void setup() {
    pinMode(red, OUTPUT);
    digitalWrite(red, LOW);
    pinMode(yellow, OUTPUT);
    digitalWrite(yellow, LOW);
    pinMode(green, OUTPUT);
    digitalWrite(green, LOW);
}

void loop() {
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(red, LOW);

    digitalWrite(yellow, HIGH);
    delay(3000);
    digitalWrite(yellow, LOW);

    digitalWrite(green, HIGH);
    delay(5000);
    digitalWrite(green, LOW);
}
