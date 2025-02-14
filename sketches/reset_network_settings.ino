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
      Keyboard.releaseAll();
    delay(500);
      Keyboard.println("cmd /c ipconfig /flushdns && netsh winhttp reset proxy");
}

void loop() {}
