//We maken hier twee booleans aan voor het bijhouden van de status van het lampje en de status van de knop
bool status;
bool pressed = false;

//We stellen pin 7, waaraan de knop hangt in als INPUT
//We stellen pin 11, waar de led aan hangt in als OUTPUT
void setup() {
pinMode(7, INPUT);
pinMode(11, OUTPUT);
}

//We kijken of de knop wordt ingedrukt en of die niet al ingedrukt is, als dit het geval is roepen we de lampswitch() op.
//Als de knop niet is ingedrukt en dus een LOW input geeft zetten we de pressed variabel op false
void loop() {
  if (digitalRead(7) == HIGH && pressed == false){
    lampswitch();
    pressed = true;
  }
  else if (digitalRead(7) == LOW){
    pressed = false;
  }
}

//Deze functie wordt gebruikt om de lamp aan het uit te schakelen
//Als de lamp al aan staat (TRUE) dan zetten we de output op pin 11 LOW zodat het lampje uit gaat
//Zo niet dan zetten we het lampje aan door pin 11 op HIGH te zetten
//De delay zorgt ervoor dat de knop niet dubbele invoer kan registreren
void lampswitch(){
  if (status == true){
    digitalWrite(11, LOW);
    status = false;
  } else {
    digitalWrite(11, HIGH);
    status = true;
  }
  delay(100);
}
