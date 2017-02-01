#include "Arduino.h"
#include <Servo.h>
#include "main.h"
#include "library.h"

int LEFT=1;
int RIGHT=2;

void setup()
{
  setupRobot();
}

/*
  forward(int)
  backward(int)
*/
void loop()
{
  forward(1000);
  turn(LEFT,3000);
  backward(1000);

  while(1);
}
