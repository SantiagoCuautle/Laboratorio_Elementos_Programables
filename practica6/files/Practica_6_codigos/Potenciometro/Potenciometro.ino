int Potenciometro = 0;

void setup(){
  pinMode(3, OUTPUT);
}

void loop(){
  Potenciometro=analogRead(A2);
  
  if(Potenciometro<=512){
    digitalWrite(3, HIGH);
  }
  else if (Potenciometro>512){
    digitalWrite(3, LOW);
  }  
}

