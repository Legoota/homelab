// BEGIN CONSTANTS
//// RGB led
#define RGB_R 22
#define RGB_Y 20
#define RGB_G 24 // next to longest 5V pin alone

//// Power button
#define POWER_SWITCH 28

// END CONSTANTS

String msg;

void setup() {
  Serial.begin(9600);

  pinMode(RGB_R, OUTPUT);
  pinMode(RGB_G, OUTPUT);
  pinMode(RGB_Y, OUTPUT);

  pinMode(POWER_SWITCH, INPUT_PULLUP);
}

void loop() {
  readSerialPort();

  if (msg != "") {
    rgbLight(msg.toInt());
    sendData(msg.toInt());
  }
  delay(500);
}

void readSerialPort() {
  msg = "";
  if (Serial.available()) {
    delay(10);
    while (Serial.available() > 0) {
      msg += (char)Serial.read();
    }
    Serial.flush();
  }
}

void sendData(int color) {
  Serial.print("Color changed to : ");
  Serial.print(color);
}

void rgbLight(int color) {
  switch(color) {
    case 0: // OFF
      digitalWrite(RGB_R, LOW);
      digitalWrite(RGB_G, LOW);
      digitalWrite(RGB_Y, LOW);
      break;
    case 1: // RED
      digitalWrite(RGB_R, HIGH);
      digitalWrite(RGB_G, LOW);
      digitalWrite(RGB_Y, LOW);
      break;
    case 2: // GREEN
      digitalWrite(RGB_R, LOW);
      digitalWrite(RGB_G, HIGH);
      digitalWrite(RGB_Y, LOW);
      break;
    case 3: // YELLOW
      digitalWrite(RGB_R, LOW);
      digitalWrite(RGB_G, LOW);
      digitalWrite(RGB_Y, HIGH);
      break;
    default:
      digitalWrite(RGB_R, HIGH);
      digitalWrite(RGB_G, LOW);
      digitalWrite(RGB_Y, LOW);
      break;
  }
}






void powerButton() {
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
