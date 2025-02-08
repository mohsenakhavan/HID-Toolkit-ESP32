#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println(F("powershell -c \"Add-Type -MemberDefinition '[DllImport(\"user32.dll\")]public static extern bool SetDisplayConfig(uint numPathArrayElements, IntPtr pathArray, uint numModeArrayElements, IntPtr modeArray, uint flags);' -Name Win32 -Namespace Helper; [Helper.Win32]::SetDisplayConfig(0, [IntPtr]::Zero, 0, [IntPtr]::Zero, 0x14)\""));
}

void loop() {}
