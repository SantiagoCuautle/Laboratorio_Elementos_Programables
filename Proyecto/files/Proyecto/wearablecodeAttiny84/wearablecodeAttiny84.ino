#include <TinyWireM.h>
#include <Tiny4kOLED.h>

#define pwmPin 9
#define enPin 8

const int echoPin = 0; // conexión del pin Echo del Sonar
const int trigPin = 1; // conexión del pin Trig del Sonar

long duracion = 0;
long cm = 0;

int potenciometro = A2; //conexión del potenciómetro
int volumen = 115; //variable
int buzzer = 10; // conexión del buzzer
int mas = 4; //conexión del botón subir volumen
int menos = 5; //conexión del botón bajar volumen
int vibrar = 6; //conexión módulo de vibración
int distancia; //variable

void prepareDisplay() {
  oled.clear();
  oled.begin();
  oled.setFont(FONT6X8);
}

void setup() {
pinMode(buzzer, OUTPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(potenciometro, INPUT);
//pinMode(volumen, OUTPUT);
pinMode(mas, INPUT);
pinMode(menos, INPUT);
//Modulo de vibración
pinMode(vibrar, OUTPUT);
//Pantalla OLED
  oled.begin(128, 64, sizeof(tiny4koled_init_128x64br), tiny4koled_init_128x64br);
  oled.clear();
  oled.on();
  prepareDisplay();
  oled.setFont(FONT8X16); 
}

void loop(){
// Inicia el sonar y envia un pin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(5);
digitalWrite(trigPin, LOW);

if (digitalRead(mas) == HIGH){
    volumen = volumen + 20;
  }
  if (digitalRead(menos) == HIGH){
    volumen = volumen - 20;
  }
  if (volumen > 255){
    volumen = 255;
  }
  if (volumen < 115){
    volumen = 115;
  }
 
duracion = pulseIn(echoPin, HIGH); // lee el tiempo en milisegundos hasta que el eco vuelve.
cm= duracion/58; // paso a cm el tiempo dividiendo por el doble de la velocidad del sonido
distancia = analogRead(potenciometro)/35;

if(cm <= distancia && cm > 0) { // si la distancia es menor a 10 cm (salvo que sea 0, es decir TimeOut)
  oled.setCursor(48, 0);
  oled.print("Obst"); 	// escribe en pantalla el texto
  oled.write(160);
  oled.print("culo");

  digitalWrite(vibrar, LOW);
  analogWrite(buzzer,volumen);
  delay(100);
  digitalWrite(vibrar, HIGH);
  digitalWrite(buzzer,LOW);
  delay(100);
  } 

  else {
  digitalWrite(buzzer, LOW); // apago el buzzer
  digitalWrite(vibrar, LOW);
  }

delay(100);
}