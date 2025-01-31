#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  for(int i=0; i<20; i++){
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(300);
    Keyboard.println("cmd /k echo YOU HAVE BEEN HACKED!");
    delay(300);
  }
}

void loop() {}
