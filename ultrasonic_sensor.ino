const int trigger=2;
const int echo=3;

const int led1=4;
const int led2=5;

int duration=0;
int distance=0;
int inches=0;

void setup()
{
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}
void loop()
{
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  duration=pulseIn(echo,HIGH);
  distance=(duration/2)*0.0343;
  inches=distance/2.54;
  Serial.print(distance);
  Serial.println("cm");
  Serial.print(inches);
  Serial.println("in");

 if(inches<5)
 {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
 }
 else
 {
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
 }
}
