//We maken een standaard melding als variabele
String melding = "De huidige temperatuur in Celcius is: ";

void setup(){
  //We starten de Serial connection
  Serial.begin(9600);
}

void loop(){
  //Vervolgens lezen we de analoge pin uit met onze temperatuursensor
  float meting = analogRead(A0);
  //We vormen dit getal om op basis van het voltage en de range die onze pin kan uitlezen
  float omvorming = meting * (5.0/1023.0);
  //vervolgens delen we dit door 0.01 om op de temperatuur te komen in Celsius
  float temp = omvorming/0.01;
  //We printen de melding en de berekende gemeten temperatuur naar de serial connection
  Serial.println(melding + temp);
}
