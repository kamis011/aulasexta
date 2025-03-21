/*
Autor: Kamila Pereira dos Santos
Data: 20/03/2025
*/

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define Botao1 0
#define Botao2 145
#define Botao3 329
#define Botao4 505
#define Botao5 741
#define pinLed1 11
#define pinLed2 10

void setup()
{
  Serial.begin(9600);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print(">Led A OFF");
  lcd.setCursor(0,1);
  lcd.print(" Led B OFF");
}

void loop()
{
  
  int leitura = analogRead(A0);
  static int leituraAnterior = 1023;
  static bool posicao = 0;
  static bool estadoLedVerde = 0;
  static bool estadoLedVermelho = 0;
  

  if(leitura == 1023){
  }
    
  
  else if(leitura == Botao1 && leituraAnterior == 1023){
    posicao = 0;
  }
    
    
  else if(leitura >= Botao2 * 0.9 && leitura <= Botao2 * 1.1 
          && leituraAnterior == 1023){
    posicao = 1;
  }
    
    
  else if(leitura >= Botao3 * 0.9 && leitura <= Botao3 * 1.1
          && leituraAnterior == 1023){
  }
    
  
  else if(leitura >= Botao4 * 0.9 && leitura <= Botao4 * 1.1
         && leituraAnterior == 1023){
  }
    
    
  else if(leitura >= Botao5 * 0.9 && leitura <= Botao5 * 1.1
         && leituraAnterior == 1023){
    
    if (posicao == 0){
    estadoLedVerde = !estadoLedVerde;
    digitalWrite(pinLed1, estadoLedVerde);
    }
    else {
    estadoLedVermelho = !estadoLedVermelho;
    digitalWrite(pinLed2, estadoLedVermelho); 
    }
  }
    leituraAnterior = leitura;
 
  if(posicao == 0){
  lcd.setCursor(0,0);
  lcd.print(">");
  lcd.setCursor (0,1);
  lcd.print(" ");
  }
  
  else{
  lcd.setCursor(0,1);
  lcd.print(">");
  lcd.setCursor(0,0);
  lcd.print(" ");
  }
   
  if(estadoLedVerde == 1){
  lcd.setCursor(1,0);
  lcd.print("Led A ON ");
  }
  else{
  lcd.setCursor(1,0);
  lcd.print("Led A OFF");
  }
  if(estadoLedVermelho == 1){
  lcd.setCursor(1,1);
  lcd.print("Led B ON ");
  }
  else{
  lcd.setCursor(1,1);
  lcd.print("Led B OFF");
  }
}    