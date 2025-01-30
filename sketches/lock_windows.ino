// HID Payload 3: Lock Windows
#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('l');
    Keyboard.releaseAll();
}

void loop() {}
