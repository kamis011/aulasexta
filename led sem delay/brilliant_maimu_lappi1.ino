/*
Autor: Kamila Pereira dos Santos
Data: 07/03/2025
Descrição: Ligar led sem delay
*/

#define pinLedVermelho 13
#define tempoLigado 1000

unsigned long tempoInicial = 0;
bool estadoLed = 0;

void setup()
{
  pinMode(pinLedVermelho, OUTPUT);
}

void loop()
{
  unsigned long tempoAtual = millis();
  
  if(tempoAtual - tempoInicial >= 1000){
    if(!estadoLed){
  digitalWrite(pinLedVermelho, HIGH);
    estadoLed = 1;
  
  }else{
    digitalWrite(pinLedVermelho,LOW);
    estadoLed = 0;
  }
    tempoInicial = tempoAtual;
  }

}