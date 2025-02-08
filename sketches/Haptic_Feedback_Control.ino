#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"(New-Object -ComObject WScript.Shell).SendKeys('{CAPSLOCK}')\""));
}
