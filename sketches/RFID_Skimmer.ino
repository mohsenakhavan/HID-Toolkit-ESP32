#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"Add-Type -AssemblyName System.Device; (New-Object System.Device.Rfid.RfidDevice).GetAllDevices() | ForEach-Object { $_.ReadUID() | Out-File C:\\RFID_Log.txt -Append }\""));
}
