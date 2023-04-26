#define RGB_R 22
#define RGB_Y 20
#define RGB_G 24 // next to longest 5V pin alone

void setup() {
  pinMode(RGB_R, OUTPUT);
  pinMode(RGB_G, OUTPUT);
  pinMode(RGB_Y, OUTPUT);
}

void loop() {
  digitalWrite(RGB_R, LOW);
  digitalWrite(RGB_G, LOW);
  digitalWrite(RGB_Y, HIGH);
}
