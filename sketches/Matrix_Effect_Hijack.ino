#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("powershell -c \"while(1){Write-Host -ForegroundColor Green ( -join ((0x30..0x5A) | Get-Random -Count 100 | % {[char]$_}))}\""));
}

void loop() {}
