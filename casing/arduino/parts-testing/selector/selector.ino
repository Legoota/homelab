#define S1 A0
#define S2 A1
#define S3 A2
#define S4 A3
#define S5 A4
#define S6 A5

void setup() {
  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
  pinMode(S3, INPUT_PULLUP);
  pinMode(S4, INPUT_PULLUP);
  pinMode(S5, INPUT_PULLUP);
  pinMode(S6, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  // int v_s1 = analogRead(S1);
  // int v_s2 = analogRead(S2);
  // int v_s3 = analogRead(S3);
  // int v_s4 = analogRead(S4);
  // int v_s5 = analogRead(S5);
  // int v_s6 = analogRead(S6);

  // Serial.print("// 1: ");
  // Serial.print(v_s1);
  // Serial.print(" // 2: ");
  // Serial.print(v_s2);
  // Serial.print(" // 3: ");
  // Serial.print(v_s3);
  // Serial.print(" // 4: ");
  // Serial.print(v_s4);
  // Serial.print(" // 5: ");
  // Serial.print(v_s5);
  // Serial.print(" // 6: ");
  // Serial.print(v_s6);
  // Serial.println();

  Serial.print("Currently selected : ");
  Serial.println(currentlySelected());

  delay(1000);
}

int currentlySelected() {
  int v_s1 = analogRead(S1);
  int v_s2 = analogRead(S2);
  int v_s3 = analogRead(S3);
  int v_s4 = analogRead(S4);
  int v_s5 = analogRead(S5);
  int v_s6 = analogRead(S6);

  int THRESHOLD = 1000;

  if(v_s1 < THRESHOLD) return 1;
  else if(v_s2 < THRESHOLD) return 2;
  else if(v_s3 < THRESHOLD) return 3;
  else if(v_s4 < THRESHOLD) return 4;
  else if(v_s5 < THRESHOLD) return 5;
  else if(v_s6 < THRESHOLD) return 6;
  else return 0;
}
