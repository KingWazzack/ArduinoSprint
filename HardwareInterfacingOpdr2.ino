//Met een for loopje gaan we door onze 8 pins heen en zorgen we dat deze op OUTPUT modus staan
void setup() {
  for(int initializepin = 6; initializepin <= 13; initializepin++){
    pinMode(initializepin, OUTPUT);
  }
}

//We roepen hier de linksnaarrechts functie op en geven de delay in ms mee als parameter
//Dit doen we ook met de rechtsnaarlinks functie. Leuke is dat je op deze manier kan spelen met versschillende snelheden
void loop() {
linksnaarrechts(100);
rechtsnaarlinks(100);
}

//Door middel van een for loop schakelen we 1 voor 1 van pin 13 -> pin 6 de ledjes aan voor de duur van de meegekregen parameter en schakelen
//deze daarna weer uit. Dit wordt gedaan voor alle pins in de for loop
void linksnaarrechts(int vertraging){
for(int huidigePin = 13; huidigePin >= 6; huidigePin--){
  digitalWrite(huidigePin, HIGH);
  delay(vertraging);
  digitalWrite(huidigePin, LOW);
}
}

//Deze functie is eigenlijk hetzelfde als de vorige maar dan achterstevoren qua pins
void rechtsnaarlinks(int vertraging){
for(int huidigePin = 6; huidigePin <= 13; huidigePin++){
  digitalWrite(huidigePin, HIGH);
  delay(vertraging);
  digitalWrite(huidigePin, LOW);
}
} 
