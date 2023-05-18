
int Signal;
void setup() {
   Serial.begin(9600);

}
void loop() {

  Signal = analogRead(A0); 
   Serial.println(Signal);                    
}j
