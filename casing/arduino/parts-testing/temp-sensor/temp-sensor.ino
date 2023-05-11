void setup() {
  Serial.begin(9600);
}

void loop() {
  int temp = analogRead(A0);

  float temperature_celcius = temp * (5.0 / 1023.0 * 100.0);

  Serial.println(temperature_celcius);
  delay(250);
}
