// HID Payload 9: Rickroll with YouTube Link
#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.println("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
}

void loop() {}