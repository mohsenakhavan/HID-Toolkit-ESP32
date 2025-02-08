#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  // باز کردن CMD با دسترسی ادمین (بدون UAC)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('x');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press('a');
  Keyboard.releaseAll();
  delay(1000);
  // تایید UAC با کلید جهت‌دار و اینتر
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();
}

void loop() {}
