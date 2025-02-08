#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"[System.Security.Cryptography.RNGCryptoServiceProvider]::new().GetBytes($rng = New-Object byte[] 16); $rng\""));
}
