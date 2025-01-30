#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    for (int i = 0; i < 10; i++) {
        Keyboard.println("cmd /k");
        delay(500);
    }
}

void loop() {}
