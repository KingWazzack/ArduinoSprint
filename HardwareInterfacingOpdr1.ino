//we stellen de modus in van de pins die we gebruiken voor de twee leds
void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}
//we schakelen de ene lamp aan en de andere uit, wachten 1seconde en doen daarna het tegenovergestelde
void loop() {
digitalWrite(11, HIGH);
digitalWrite(12,LOW);
delay(1000);
digitalWrite(11, LOW);
digitalWrite(12,HIGH);
delay(1000);
}
