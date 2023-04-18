void setup(){
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop(){
  for (int rood=0; rood <= 255; rood++)
  {
    for(int groen=0; groen <= 255; groen++)
    {
      for(int blauw=0; blauw <=255; blauw++)
      {
        analogWrite(9, rood);
        analogWrite(10, groen);
        analogWrite(11, blauw);
        delay(5);
      }
    }
  }
}
