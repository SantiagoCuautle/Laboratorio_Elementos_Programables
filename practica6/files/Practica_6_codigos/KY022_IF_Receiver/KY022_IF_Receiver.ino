#include <IRremote.h>                       //Librería para IR

int SENSOR = 11;                            //Pin KY022 a PIN11 Digital  
int pin = 13;
int flag = 1;

IRrecv irrecv(SENSOR);                   //Se reciben paquetes remotos IR por medio del objeto irrecv
decode_results resultado;  

void setup() {
  Serial.begin(9600);                     //Iniciando puerto serial en 9600 bauds
  pinMode(pin,OUTPUT); 
  irrecv.enableIRIn();                    // Habilita la recepción de datos
}

void loop() {
  if (irrecv.decode(&resultado)) {          // Cuando se recibe un código, la información se almacena en "resultados".
    delay(60);   // impresión de los valores recibidos en formato hexadecimal
    if (resultado.value == 0xFFFFFFFF && flag == 1) { 
    digitalWrite(pin,HIGH); 
    flag = 0;
    } 
    else if (resultado.value == 0xFFFFFFFF && flag == 0) {
    digitalWrite(pin,LOW);
    flag = 1;
    }
    Serial.println(resultado.value, HEX);
    irrecv.resume();                      // Después de recibir, se debe llamar a este para restablecer el receptor y prepararlo para recibir otro código
  }
  delay (100);                            // espera para el siguiente valor
}
