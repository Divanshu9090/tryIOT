#include<DHT.h>
#define DHTPIN 7
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  delay(2000);
  float Hum = dht.readHumidity();
  float TempC= dht.readTemperature();
  float Tempf= dht.readTemperature(true);
  Serial.print(Hum);
  Serial.println("Hum");
  Serial.print(TempC);
  Serial.println(" C");
  Serial.print(Tempf);
  Serial.print("F");
}
