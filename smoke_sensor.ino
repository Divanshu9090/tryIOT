int gas;
void setup()
{
  Serial.begin(9600);
  pinMode(A1,INPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
}
void loop()
{
  gas=analogRead(A1);
  Serial.print(gas);
  Serial.println(" ppi");
  if (gas<=120)
  {
    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    Serial.println("Normal");
  }
  else
  {
    digitalWrite(2,LOW);
    digitalWrite(4,HIGH);
    Serial.println("Dangerous");
  }
  
}
