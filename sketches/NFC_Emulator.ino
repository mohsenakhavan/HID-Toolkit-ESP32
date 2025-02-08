#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"Add-Type -AssemblyName System.Device; (New-Object System.Device.Nfc.NfcDevice).EmulateTag('DANGER_ZONE')\""));
}
