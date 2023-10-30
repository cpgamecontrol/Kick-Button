#include <Keyboard.h>

const int buttonPin = 6;  // Change this to the pin number where your button is connected

void setup() {
  Keyboard.begin();
  pinMode(buttonPin, INPUT_PULLUP);
}            

void loop() {       
  if (digitalRead(buttonPin) == HIGH) {
    // Button is pressed, simulate pressing the "Space" key
    Keyboard.write(' ');  // ' ' represents the space character
    delay(100);  // Add a small delay to avoid rapid key repeats
  }
}      
                                                 