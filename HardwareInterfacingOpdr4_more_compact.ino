int ledPins[] = {13, 12, 11, 10, 9 , 8, 7};
int aantal = sizeof(ledPins) / sizeof(int);

void setup() {
  for (int i = 0; i < aantal; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int meting = analogRead(A0);
  Serial.println(meting);

  int omvorming = map(meting, 0, 1023, 0, aantal);

  for (int i = 0; i < aantal; i++) {
    if (i < omvorming) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
}
