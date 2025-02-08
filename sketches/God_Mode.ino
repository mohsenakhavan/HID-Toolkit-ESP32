#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("cmd /c mkdir C:\\GodMode.{ED7BA470-8E54-465E-825C-99712043E01C}"));
}

void loop() {}
