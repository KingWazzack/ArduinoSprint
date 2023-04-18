String melding = "De huidige temperatuur in Celcius is: ";

void setup(){
  Serial.begin(9600);
}

void loop(){
  float meting = analogRead(A0);
  float omvorming = meting * (5.0/1023.0);
  float temp = omvorming/0.01;
  Serial.println(melding + temp);
}
