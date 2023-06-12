#define RELAY 40

void setup() {
  pinMode(RELAY,OUTPUT);
   
}
 
void loop() {
  digitalWrite(RELAY, HIGH);  
  delay(2000);
  digitalWrite(RELAY, LOW);  
  delay(3000);                     
}