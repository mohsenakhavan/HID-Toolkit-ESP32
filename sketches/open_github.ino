// HID Payload 4: Open a GitHub link

#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(500);
    Keyboard.releaseAll();
    delay(500);
    Keyboard.println("cmd");
    delay(500);
    Keyboard.println("start https://github.com/mohsenakhavan");
}

void loop() {}
