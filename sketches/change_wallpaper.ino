#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.println("powershell Invoke-WebRequest -Uri \"https://example.com/image.jpg\" -OutFile \"C:\\Users\\Public\\wallpaper.jpg\"");
    delay(2000);
    Keyboard.println("reg add HKCU\\Control Panel\\Desktop /v Wallpaper /t REG_SZ /d C:\\Users\\Public\\wallpaper.jpg /f && RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");
}

void loop() {}
