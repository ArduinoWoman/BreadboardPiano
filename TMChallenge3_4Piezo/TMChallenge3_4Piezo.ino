/* The Tech Museum of Innovation  - www.thetech.org

"Breadboard Piano" - May 10th 2014
Challenge - 3 Play your Piezo, note by note
Challenge - 4 Make a Breadboard Piano

author: Tenaya Hurst - Arduino Woman

1 Piezo
1 1M ohms resistor

* without buttons:
10 jumper wires

* with buttons:
5 buttons
13 jumper wires

*/

#include "pitches.h"

int tonepin = 9;  // PWM0 output = 9, PWM1 output = 10


// these are the "piano keys" - they are just input pins
#define D2 2
#define D3 3
#define D4 4
#define D5 5
#define D6 6


void setup() {
  
  // setup internal pullups on "piano keys" (pins D2 through D6)
  pinMode(D2, INPUT);
  pinMode(D3, INPUT);
  pinMode(D4, INPUT);
  pinMode(D5, INPUT);
  pinMode(D6, INPUT);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, HIGH);
}


void loop() {

  while (1) {
    
    // scan "piano keys" for one that is "pressed"

    if (digitalRead(D6) == LOW) {
      tone(tonepin, NOTE_C4);
    } else if (digitalRead(D5) == LOW) {
      tone(tonepin, NOTE_D4);
    } else if (digitalRead(D4) == LOW) {
      tone(tonepin, NOTE_E4);
    } else if (digitalRead(D3) == LOW) {
      tone(tonepin, NOTE_F4);
    } else if (digitalRead(D2) == LOW) {
      tone(tonepin, NOTE_G4);
    } else {
      noTone(tonepin);
    }
   
    delay(100);    // probably not needed.. you can experiment!
  }
}
