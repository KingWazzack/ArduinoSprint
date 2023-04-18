void setup(){
  for(int initializepin = 7; initializepin <= 13; initializepin++){
    pinMode(initializepin, OUTPUT);
  }
  Serial.begin(9600);
}

void loop(){
  int meting = analogRead(A0);
  Serial.println(meting);

  if(meting >= 0 && meting < 128){
    uitzetten(7,13);
  }
  if(meting > 128 && meting < 256){
    aanzetten(13,13);=
    uitzetten(7,12);
  }if(meting > 256 && meting < 384){
    aanzetten(12,13);
    uitzetten(7,11);
  }if(meting > 384 && meting < 512){
    aanzetten(11,13);
    uitzetten(7,10);
  }if(meting > 512 && meting < 640){
    aanzetten(10,13);
    uitzetten(7,9);
  }if(meting > 640 && meting < 768){
    aanzetten(9,13);
    uitzetten(7,8);
  }if(meting > 768 && meting < 896){
    aanzetten(8,13);
    uitzetten(7,7);
  }else if(meting > 896){
    aanzetten(7,13);
    }
  }

void uitzetten(int laagstepin, int hoogstepin){
  for(int pin = laagstepin; pin <= hoogstepin; pin++){
    digitalWrite(pin, LOW);
    }
}


void aanzetten(int laagstepin, int hoogstepin){
  for(int pin = laagstepin; pin <= hoogstepin; pin++){
    digitalWrite(pin, HIGH);
    }
}
