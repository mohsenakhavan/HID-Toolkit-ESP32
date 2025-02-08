#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"[System.Security.Cryptography.QuantumEncryption]::EncryptFile('C:\\secret.txt', 'C:\\encrypted.qkd')\""));
}
