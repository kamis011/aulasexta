/*
Autor: Kamila Pereira dos Santos
Data:06/03/2025
*/

#define pinLedVermelho 13
#define pinLedLaranja 12
#define pinLedVerde 11
#define pinLedAmarelo 10
#define pinLedAzul 9
int escolha = 2;
  
  
void setup()
{
  Serial.begin(9600);
  
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedLaranja, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
  pinMode(pinLedAzul, OUTPUT);
 
  switch(escolha){
  case 0:
    Serial.println("Pessima");
    digitalWrite(pinLedVermelho, HIGH);
    break;
      
    case 1:
    Serial.println("Ruim");
    digitalWrite(pinLedLaranja, HIGH);
    break;
      
    case 2:
    Serial.println("Normal");
    digitalWrite(pinLedVerde, HIGH);
    break;
      
    case 3:
    Serial.println("Boa");
    digitalWrite(pinLedAmarelo, HIGH);
    break;
      
    case 4:
    Serial.println("Excelente");
    digitalWrite(pinLedAzul, HIGH);
    break;
    
    default:
    Serial.println("ERRO");
    break;
  }
}

void loop()
{
  
}