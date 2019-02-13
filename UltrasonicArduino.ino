
#define echo 7
#define trig 13

float t,d;

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);  
}

void loop() {
  digitalWrite(trig,LOW);
  delay(20);
  digitalWrite(trig,HIGH);
  delay(100);
  digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  d=(t/2)*0.0343;
  Serial.print("Distance:");
  if(d>20||d<1){
    Serial.print("Out of range!");
  }
  else{
    Serial.print(d);
    Serial.print(" cm");
    delay(500);
  }
  delay(500);
}
