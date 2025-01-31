#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  // کلیدهای ترکیبی Ctrl+Shift+Esc
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();
}

void loop() {}
