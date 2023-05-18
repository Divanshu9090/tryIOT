int ldr;
void setup()
{
  Serial.begin(9600);
  pinMode(A1,INPUT);
}
void loop()
{
  ldr=analogRead(A1);
  Serial.print(ldr);
  Serial.println(" intensity");
}
