#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("reg add \"HKCU\\Control Panel\\Keyboard\" /v InitialKeyboardIndicators /t REG_SZ /d 2 /f"));
}

void loop() {}
