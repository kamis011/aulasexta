/*
Autor: Kamila Pereira dos Santos
data:28/02/2025
*/

#define pinLedVermelho 8

void setup()
{
  pinMode(pinLedVermelho, OUTPUT);
  
  int numero = 4;
  int resultado = numero % 2;
  if (resultado == 0){
  digitalWrite(pinLedVermelho, HIGH);
  }
}

void loop()
{
}