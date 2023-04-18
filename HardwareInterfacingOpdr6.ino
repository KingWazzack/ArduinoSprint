void setup(){
  //We stellen pin 9,10,11 in als OUTPUT voor de uitvoer van het signaal voor rood,blauw en groen voor de RGB led.
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop(){
  //Vervolgens gaan we door middel van een nested for loop langs alle +- 17 miljoen verschillende kleurencombinaties
  for (int rood=0; rood <= 255; rood++)
  {
    for(int groen=0; groen <= 255; groen++)
    {
      for(int blauw=0; blauw <=255; blauw++)
      {
        //Deze waardes schrijven we telkens naar de rgb led en wachten daarna 5ms zodat de kleuren netjes in elkaar overlopen
        analogWrite(9, rood);
        analogWrite(10, groen);
        analogWrite(11, blauw);
        delay(5);
      }
    }
  }
}
