/*
Autor: Kamila Pereira dos Santos
Data:28/02/2025
*/

#define pinLedVermelho 8

void setup()
{
  Serial.begin(9600);
  pinMode (pinLedVermelho, OUTPUT);
  
  int bateria = 10;
  if(bateria < 20){
  digitalWrite(pinLedVermelho, HIGH);
  Serial.print("Bateria acabando, recarregue");
  }
}
void loop()
{
}