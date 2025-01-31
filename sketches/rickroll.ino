#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("start https://youtu.be/dQw4w9WgXcQ");
  delay(1000);
  // تمامی پنجره‌ها را مینیمایز میکند (اختیاری)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('m');
  Keyboard.releaseAll();
}

void loop() {}
