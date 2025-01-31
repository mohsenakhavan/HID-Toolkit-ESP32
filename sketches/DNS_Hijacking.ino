#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("netsh interface ip set dns name=\"Wi-Fi\" static 8.8.8.8");
  Keyboard.println("netsh interface ip add dns name=\"Wi-Fi\" 8.8.4.4 index=2");
}

void loop() {}
