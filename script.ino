int trig = 5;
int echo = 4;
int b = 2;
long dura;
int dis;
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