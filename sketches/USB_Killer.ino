#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"(New-Object -ComObject Shell.Application).Namespace(17).ParseName('USB').InvokeVerb('Eject')\""));
}
