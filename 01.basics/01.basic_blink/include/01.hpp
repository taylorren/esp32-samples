#ifndef BASICS_01_BASIC_BLINK_01_HPP

//Avoid duplicated includes
#define BASICS_01_BASIC_BLINK_01_HPP

/* The below "32" really depends on how you wire your LED to which Digital pin on ESP32. You can change it to any other Digital pin you want, just make sure to update the wiring accordingly.

And if you prefer to use the built-in LED on the ESP32 board, you can set ledPin to the corresponding pin number for the built-in LED (often GPIO "2" or GPIO "5", but it can vary based on the specific ESP32 board model).
*/
const int ledPin = 32; 

const int delayTime = 300; // Delay time in milliseconds (1000 ms = 1 second)

#endif