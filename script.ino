#include<Arduino.h>
int trig = 9, trig1 = 5, echo = 10, echo1 = 6, dis, b = 7;
long dura;
void setup() {
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(10);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  dura = pulseIn(echo, HIGH);
  dis = dura * 0.034/2;
  Serial.print("Distance: ");
  Serial.println(dis);
  delay(500);
  if(dis<=1100){
    digitalWrite(b,HIGH);
  }
}