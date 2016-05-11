#include "Arduino.h"
#include <TM1638.h>

// define a module on data pin 8, clock pin 9 and strobe pin 10
TM1638 module(8, 9, 10);

int motorPin1 = 4;
int motorPin2 = 5;
byte buttons;

bool first=0;
bool second=0;

void setup()
{
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop()
{

  buttons=module.getButtons();
  if(buttons==1) {
    module.setLED(TM1638_COLOR_RED, 0);
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    delay(100);

  }if (buttons==4) {
    module.setLED(TM1638_COLOR_RED, 2);
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    delay(100);
  }if (buttons==8) {
    module.setLED(TM1638_COLOR_RED, 3);
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    delay(100);
  }
}
