void setup()
{
  pinMode(2,INPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop()
{
  if(digitalRead(2)==1)
  {
    digitalWrite(4,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(10,HIGH);
  }
  else
  {
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    digitalWrite(10,LOW);
  }
  
}
