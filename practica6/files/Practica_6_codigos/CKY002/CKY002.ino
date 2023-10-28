#define led 0
#define ky02 1
int lectura;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ky02, INPUT);
}

void loop(){
  lectura=digitalRead(1);
  if(lectura==HIGH){
    digitalWrite(0, LOW);
  }
  else if (lectura==LOW){
    digitalWrite(0, HIGH);
    delay(500);
  }
}
