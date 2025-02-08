#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println(F("powershell -c \"1..1024 | ForEach-Object {Test-NetConnection -ComputerName TARGET_IP -Port $_ -InformationLevel Quiet}\""));
}

void loop() {}
