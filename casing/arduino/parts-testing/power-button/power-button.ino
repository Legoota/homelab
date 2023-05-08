#define POWER_SWITCH 28

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(POWER_SWITCH, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int btnState = digitalRead(POWER_SWITCH);
  Serial.println(btnState);
  if(btnState == HIGH) { //OFF
    digitalWrite(LED_BUILTIN, LOW);
  }
  else { //ON
    digitalWrite(LED_BUILTIN, HIGH);
  }
  delay(250);
}
