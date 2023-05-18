int temp;
int kelvin;
int celsius;
int fahrenheit;
void setup()
{
 Serial.begin(9600);
 pinMode(A1,INPUT); 
}
void loop()
{ 
  temp=analogRead(A1);
  kelvin=((float(temp)/1023)*5)*100;
  Serial.print(kelvin);
  Serial.println("kelvin");
  celsius=kelvin-273.15;
  fahrenheit=(celsius*1.8)+32;
  Serial.print(celsius);
  Serial.println("celsius");
  Serial.print(fahrenheit);
  Serial.println("fahrenheit");
}
