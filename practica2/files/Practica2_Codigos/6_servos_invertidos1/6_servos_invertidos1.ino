// C++ code
#include <Servo.h>
int valor;		//variable que almacena la lectura analógica raw
int pos1;        //Variable que almacena la posicion del servo1
int pos2;        //Variable que almacena la posicion del servo2


//Le decimos al codigo que va a existir un servo
//llamado my servo
Servo myservo1;
Servo myservo2;

void setup()
{
  //Le decimos al codigo donde esta conectado el servo 1
  myservo1.attach(9);
  //Le decimos al codigo donde esta conectado el servo 2
  myservo2.attach(2);
}

void loop()
{
  // leemos el valor de potenciometro
  valor = analogRead(A0);
  //Convertimos el valor del potenciometro a una 
  //que entienda el servo
  pos1 = map(valor, 0, 1023, 0, 180);
  //Mandamos la posicion al servo 1
  myservo1.write(pos1);
  //Convertimos el valor del potenciometro a una 
  //que entienda el servo
  pos2 = map(valor, 0, 1023, 180, 0);
  //Mandamos la posicion al servo 2
  myservo2.write(pos2);
  //esperamos un poco para que se mueva
  delay(10);
}