/*
Autor: Kamila Pereira dos Santos
data:28/02/2025
*/

#define pinLedVermelho 8


void setup()
{
  pinMode (pinLedVermelho, OUTPUT);
  
  int temperatura = 45;
  
  if (temperatura > 30){
  digitalWrite(pinLedVermelho, HIGH);
  }
  
}
void loop()
{
  
}