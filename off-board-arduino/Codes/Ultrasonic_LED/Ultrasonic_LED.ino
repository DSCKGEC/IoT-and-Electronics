#include <Ultrasonic.h>
Ultrasonic ultrasonic(12,13);
int distance;

void setup() {
  pinMode(9,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  distance=ultrasonic.read();
  Serial.println("Distance in CM:");
  Serial.println(distance);
  int value=map(distance,0,357,0,255);
  analogWrite(9,value);

}
