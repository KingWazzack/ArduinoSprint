//Allereerst maken we twee variabelen aan
//LedPins is een array waarin alle pin nummers staan waar onze ledjes aan hangen.
//Aantal is de grootte van de array opgeslagen als int, die we nodig hebben voor onze for loop later.
const int ledPins[] = {13, 12, 11, 10, 9 , 8, 7};
const int aantal = sizeof(ledPins) / sizeof(int);

void setup() {
  //Door middel van een for loop stellen we de pinmodus in voor alle pins waar een led aan hangt.
  for (int i = 0; i < aantal; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  //We starten weer de serial connection
  Serial.begin(9600);
}

void loop() {
  //We lezen de analoge pin A0 uit waar onze potentiometer aan hangt
  int meting = analogRead(A0);
  Serial.println(meting);

  //Door middel van de map functie kijken rekenen we de verhouding tussen de gemeten invoer en het aantal pins uit.
  int omvorming = map(meting, 0, 1023, 0, aantal);

  //Vervolgens gaan we met een for loop door alle pins heen
  for (int i = 0; i < aantal; i++) {
    //Voor alle pins die binnen in de berekening vallen van de omvorming variabel zetten we de uitvoer op HIGH 
    if (i < omvorming) {
      digitalWrite(ledPins[i], HIGH);
      //Voor de overige pins zetten we deze op LOW
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
}
