#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"Add-Type -AssemblyName System.Device; [System.Device.Location.GeoCoordinateWatcher]::new().Position = New-Object System.Device.Location.GeoCoordinate(35.6895, 139.6917)\""));
}
