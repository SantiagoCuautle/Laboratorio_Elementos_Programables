// C++ code

int valor;		//variable que almacena la lectura analógica raw

void setup()
{
  //Inicializamos la comunicación serial
  Serial.begin(9600);
  
  //Escribimos por el monitor serie mensaje de inicio
  Serial.println("Inicio de sketch - valores del potenciometro");
}

void loop()
{
  // leemos del pin A0 valor
  valor = analogRead(A0);
  
  //Imprimimos por el monitor serie
  Serial.print("El valor es = ");
  Serial.println(valor);
  delay(1000);
}