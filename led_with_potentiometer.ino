void setup() 
{
  Serial.begin(9600);
  pinMode(A5,INPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop()
{
  int pm=analogRead(A5);
  if (pm<256)
  {
    digitalWrite(4,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(10,LOW);
  }
  else if (pm >=256 and pm<846)
  {    
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(10,LOW);
  }
  else
  {    
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    digitalWrite(10,HIGH);
  }
}
