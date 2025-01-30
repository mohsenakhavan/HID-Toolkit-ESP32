#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.println("powershell (Add-Type '[DllImport(\"user32.dll\")]public static extern int SendMessage(int hWnd, int hMsg, int wParam, int lParam);' -Name Win32Funcs -Namespace Win32 | Out-Null; [Win32.Win32Funcs]::SendMessage(-1, 0x0112, 0xF170, 2))");
}

void loop() {}
