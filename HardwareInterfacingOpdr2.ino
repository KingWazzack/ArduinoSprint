void setup() {
  for(int initializepin = 6; initializepin <= 13; initializepin++){
    pinMode(initializepin, OUTPUT);
  }
}

void loop() {
linksnaarrechts(100);
rechtsnaarlinks(100);
}

void linksnaarrechts(int vertraging){
for(int huidigePin = 13; huidigePin >= 6; huidigePin--){
  digitalWrite(huidigePin, HIGH);
  delay(vertraging);
  digitalWrite(huidigePin, LOW);
}
}

void rechtsnaarlinks(int vertraging){
for(int huidigePin = 6; huidigePin <= 13; huidigePin++){
  digitalWrite(huidigePin, HIGH);
  delay(vertraging);
  digitalWrite(huidigePin, LOW);
}
} 
