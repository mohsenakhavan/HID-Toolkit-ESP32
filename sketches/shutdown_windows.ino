#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  // باز کردن Run Dialog (Win + R)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  // اجرای دستور Shutdown
  Keyboard.println("shutdown /s /t 0");
}

void loop() {}
