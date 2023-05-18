void setup() 
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
}


void loop() 
{
  digitalWrite(2,HIGH);
  delay(2000);
  digitalWrite(2,LOW);
  delay(0);
  digitalWrite(7,HIGH);
  delay(2000);
  digitalWrite(7,LOW);
  delay(0);
  digitalWrite(10,HIGH);
  delay(2000);
  digitalWrite(10,LOW);
  delay(0);
}
