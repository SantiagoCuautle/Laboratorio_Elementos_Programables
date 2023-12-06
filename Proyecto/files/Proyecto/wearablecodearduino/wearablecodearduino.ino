#include <Wire.h>			// libreria para bus I2C
#include <Adafruit_GFX.h>		// libreria para pantallas graficas
#include <Adafruit_SSD1306.h>		// libreria para controlador SSD1306

#define ANCHO 128			// reemplaza ocurrencia de ANCHO por 128
#define ALTO 64				// reemplaza ocurrencia de ALTO por 64

#define OLED_RESET 4			// necesario por la libreria pero no usado
Adafruit_SSD1306 oled(ANCHO, ALTO, &Wire, OLED_RESET);	// crea objeto

const int trigPin = 10; // conexión del pin Trig del Sonar
const int echoPin = 11; // conexión del pin Echo del Sonar

long duracion = 0;
long cm = 0;

int potenciometro = A0; //conexión del potenciómetro
int volumen = 25; //variable
int buzzer = 3; // conexión del buzzer
int mas = 9; //conexión del botón subir volumen
int menos = 8; //conexión del botón bajar volumen
int vibrar = 7; //conexión módulo de vibración
int distancia; //variable

void setup() { // inicia pines
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
Wire.begin();
oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);	// inicializa pantalla con direccion 0x3C
}

void loop(){ // Inicia el sonar y envia un pin
  oled.clearDisplay();			// limpia pantalla
  oled.setTextColor(WHITE);		// establece color al unico disponible (pantalla monocromo)
  oled.setCursor(0, 0);			// ubica cursor en inicio de coordenadas 0,0
  oled.setTextSize(1);			// establece tamano de texto en 1
  oled.print("IBERO Puebla"); 	// escribe en pantalla el texto
  oled.display();			// muestra en pantalla todo lo establecido anteriormente

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(5);
digitalWrite(trigPin, LOW);

  if (digitalRead(mas) == HIGH){
    volumen = volumen + 10;
  }
  if (digitalRead(menos) == HIGH){
    volumen = volumen - 10;
  }
  if (volumen > 255){
    volumen = 255;
  }
  if (volumen < 25){
    volumen = 25;
  }
 
duracion = pulseIn(echoPin, HIGH); // lee el tiempo en milisegundos hasta que el eco vuelve.
cm= duracion/58; // paso a cm el tiempo dividiendo por el doble de la velocidad del sonido
distancia = analogRead(potenciometro)/35;

  if(cm <= distancia && cm > 0) { // si la distancia es menor a 10 cm (salvo que sea 0, es decir TimeOut)
  oled.setCursor(10, 30);			// ubica cursor en inicio de coordenadas 0,0
  oled.setTextSize(2);			// establece tamano de texto en 1
  oled.print("Obst"); 	// escribe en pantalla el texto
  oled.write(160);
  oled.print("culo");
  oled.display();			// muestra en pantalla todo lo establecido anteriormente

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