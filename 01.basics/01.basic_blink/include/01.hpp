#ifndef BASICS_01_BASIC_BLINK_01_HPP

#pragma once

/* The pin number 32 depends on how you wire your LED to a digital GPIO pin on the ESP32.
   You can change it to any valid output-capable GPIO pin, as long as you update the wiring accordingly.
   Refer to your specific ESP32 board's pinout diagram to confirm the pin supports digital output.
   If you want to use the onboard LED, set ledPin to the board's built-in LED pin number (often GPIO 2 or GPIO 5).
*/
constexpr int ledPin = 2;
constexpr int delayTime = 300; // Delay time in milliseconds (1000 ms = 1 second)

#endif