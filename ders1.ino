int Tarla1Nem;

void setup() {
  pinMode(4, OUTPUT);  // RÖLE pini
  pinMode(7, INPUT);   // Nem sensörü
  pinMode(13, OUTPUT); // Yerleşik LED
}

void loop() {
  Tarla1Nem = digitalRead(7);

  //Eğer Toprak Kuruysa motoru çalıştır
  if (Tarla1Nem == true)    // Eğer Tarla1 kuru ise
  {
    digitalWrite(4, LOW);     // Röleyi aç
    digitalWrite(13, HIGH);   // Ledi aç
  }
  
  if (Tarla1Nem == false)  // Eğer Tarla1 nemli ise
  {
    digitalWrite(4, HIGH);    //röleyi kapat
    digitalWrite(13, LOW);    //ledi kapat
  }
}
