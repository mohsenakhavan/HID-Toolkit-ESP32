// HID Payload 6: Create and Write to Notepad
#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.println("notepad");
    delay(1000);
    Keyboard.println("This is a test message from ESP32-S3 HID.");
}

void loop() {}