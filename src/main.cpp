#include "Arduino.h"
#include <TM1638.h>

int motorPin1 = 4;
int motorPin2 = 5;

void setup()
{
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop()
{
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
}
