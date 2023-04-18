bool status;
bool pressed = false;

void setup() {
pinMode(7, INPUT);
pinMode(11, OUTPUT);
}

void loop() {
  if (digitalRead(7) == HIGH && pressed == false){
    lampswitch();
    pressed = true;
  }
  else if (digitalRead(7) == LOW){
    pressed = false;
  }
}

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
