#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  // پخش صدای بیپ سیستم
  Keyboard.println(F("powershell [System.Media.SystemSounds]::Beep.Play()"));
}
