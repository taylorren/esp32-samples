#include <Arduino.h>

constexpr int ledPin = 32;
constexpr int pwmResolution = 12;           // 12-bit resolution
constexpr int maxBrightness = (1 << pwmResolution) - 1;  // 4095
int brightness = 0;                         // current brightness
int fadeAmount = 30;                        // step size (scaled for higher resolution)

void setup() {
  analogWriteResolution(pwmResolution);     // set ESP32 PWM to 12-bit (0–4095)
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness);

  brightness += fadeAmount;

  // Clamp to avoid LEDC overflow flicker at boundaries
  if (brightness <= 0) {
    brightness = 0;
    fadeAmount = -fadeAmount;
  } else if (brightness >= maxBrightness) {
    brightness = maxBrightness;
    fadeAmount = -fadeAmount;
  }

  delay(15);
}
