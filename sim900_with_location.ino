#include <SoftwareSerial.h>

#define RX_PIN1 4
#define TX_PIN1 3

SoftwareSerial SIM900A(RX_PIN1,TX_PIN1);
double lat = 27.60607013824843;
double lon = 77.59280919974576;

void setup()
{
  Serial.begin(9600);
  SIM900A.begin(9600);
  SIM900A.println("ATD8869051145;");
  delay(1000);
  SIM900A.println("ATH");
  SIM900A.println("AT+CMGF=1");
  delay(1000);
  SIM900A.println("AT+CMGS=\"+918869051145\"\r");
  delay(1000);
  SIM900A.print("emergency \n location is https://maps.google.com/?q=");
  SIM900A.print(lat);
  SIM900A.print(",");
  SIM900A.println(lon);
  delay(100);
  SIM900A.println((char)26);
}
void loop ()
{
  
}