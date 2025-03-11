/*
Autor: Kamila Pereira dos Santos
Data: 10/03/2025
*/

#define pinLedVermelho 13
#define pinLedAmarelo 12
#define pinLedVerde 11

unsigned long tempoInicial = 0;
char estadoLed = 0;
unsigned long intervaloVermelho = 5000;
unsigned long intervaloAmarelo = 2000;
unsigned long intervaloVerde = 3000;


void setup()
{
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
}

void loop()
{
  unsigned long tempoAtual = millis();
  
  if(estadoLed == 0){
    digitalWrite(pinLedVermelho, HIGH);
    digitalWrite(pinLedAmarelo, LOW);
    digitalWrite(pinLedVerde, LOW);
  }if(tempoAtual - tempoInicial >= intervaloVermelho)
    {
      estadoLed = 1;
      tempoInicial = tempoAtual;
  }
  else if(estadoLed == 1){
    digitalWrite(pinLedVermelho, LOW);
    digitalWrite(pinLedAmarelo, LOW);
    digitalWrite(pinLedVerde, HIGH);
    if(tempoAtual - tempoInicial >= intervaloVerde)
    {
    estadoLed = 2;
      tempoInicial = tempoAtual;
    }
  } 
  else if(estadoLed == 2)
  {
    digitalWrite(pinLedVermelho, LOW);
    digitalWrite(pinLedAmarelo, HIGH);
    digitalWrite(pinLedVerde, LOW);
    if(tempoAtual - tempoInicial >= intervaloAmarelo){
    
    estadoLed = 0;
    tempoInicial = tempoAtual;
    }
  }
   
}