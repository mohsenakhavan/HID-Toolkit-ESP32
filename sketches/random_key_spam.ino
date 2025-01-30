#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    for (int i = 0; i < 50; i++) {
        Keyboard.println("random text");
        delay(100);
    }
}

void loop() {}
