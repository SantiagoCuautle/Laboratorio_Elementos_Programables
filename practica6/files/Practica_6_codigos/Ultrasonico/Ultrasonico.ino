#include "Ultrasonic.h"

const int TRIG = 4;
const int ECHO = 3;
const int LEDPIN = 0;
int distance;

Ultrasonic ultrasonic(TRIG, ECHO);

void setup() {
  pinMode(LEDPIN, OUTPUT);
}

void loop () {
  distance = ultrasonic.read();

  if (distance > 20){
    digitalWrite(LEDPIN, LOW);
  }
  else {
    digitalWrite(LEDPIN, HIGH);
  }
}
