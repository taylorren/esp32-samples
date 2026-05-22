#include <Arduino.h>
#include "01.hpp"

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  
}

void loop() {
    digitalWrite(ledPin, HIGH); // Turn the LED on
    delay(delayTime); // Wait for some time defined by delayTime
    digitalWrite(ledPin, LOW); // Turn the LED off
    delay(delayTime); // Wait for some time defined by delayTime  
}

