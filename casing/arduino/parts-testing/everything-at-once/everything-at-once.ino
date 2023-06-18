#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>

// RGB LED
#define RGB_R 22
#define RGB_Y 20
#define RGB_G 24

// RELAY
#define RELAY 40

// SWITCH
#define LOUDNESS 44

// OLED SCREEN
U8G2_SSD1322_NHD_256X64_2_4W_HW_SPI u8g2(U8G2_R0,10,9,8);

// VALUE FROM RPI
String rpi;

void setup() {
  u8g2.begin();
  Serial.begin(9600);
  pinMode(LOUDNESS, INPUT_PULLUP);
  pinMode(RELAY,OUTPUT);
  pinMode(RGB_R, OUTPUT);
  pinMode(RGB_G, OUTPUT);
  pinMode(RGB_Y, OUTPUT);
}

void loop() {
  char * temperature = readTemperature();

  //digitalWrite(RELAY, LOW);  

  delay(2000);
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

void display(char* line1, char* line2, char* line3) {
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_crox3cb_mr);
    u8g2.drawStr(0,17, line1);
    u8g2.drawStr(0,38, line2);
    u8g2.drawStr(0,59, line3);
  } while ( u8g2.nextPage() );
}

void sendData(int color) {
  Serial.print("Color changed to : ");
  Serial.print(color);
}

void readSerialPort() {
  rpi = "";
  if (Serial.available()) {
    delay(10);
    while (Serial.available() > 0) {
      rpi += (char)Serial.read();
    }
    Serial.flush();
  }
}

char * readTemperature() {
  int temp = analogRead(A0);

  float temperature_celcius = temp * (5.0 / 1023.0 * 100.0);
  char * temperature = "";

  dtostrf(temperature_celcius, 6, 2, temperature);
  return temperature;
}