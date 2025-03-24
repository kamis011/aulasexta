/*
Autor: Kamila Pereira dos Santos
Data: 20/03/2025
*/

#include <LiquidCrystal_I2C.h>

/*
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define Botao1 0
#define Botao2 145
#define Botao3 329
#define Botao4 505
#define Botao5 741
#define pinLed1 11
#define pinLed2 10

int intensindadeLedA = 0;
int intensidadeLedB = 0;
int intensidadeLed = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print(">Led A ");
  lcd.setCursor(0,1);
  lcd.print(" Led B ");
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
*/

#define valorBotao1 0
#define valorBotao2 145  
#define valorBotao3 329  
#define valorBotao4 505
#define valorBotao5 741
#define valorSolto 1023
#define pinLedA 6
#define pinLedB 5

int intensidadeLedA = 0;
int intensidadeLedB = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(9600);
  lcd.init(); // INICIA O LCD
  lcd.backlight(); // LIGAR A LUZ DO FUNDO
  lcd.setCursor(0,0);
  lcd.print(">LED A OFF");
  lcd.setCursor(0,1);
  lcd.print(" LED B OFF");
  pinMode(pinLedA, OUTPUT);
  pinMode(pinLedB, OUTPUT);
 
}

void loop()
{
    int valorLeituraAnalogica = analogRead(A0);
    static int valorAnterior = 1023;
    static bool posicao = 0;
    static bool estadoLedA = 0;
    static bool estadoLedB = 0 ;
    static bool  atualizacaco = 0;

 
 
 
 
 
  //***** TRATAMENTO DOS BOTOES *******
  // NENHUM BOTAO
  if (valorLeituraAnalogica == valorSolto)
   {
     
   }
 
  //BOTAO 1 PRESSIONADO
     else if(valorLeituraAnalogica == valorBotao1 &&
             valorAnterior == 1023)
    {
      posicao = 0;
    }
 
   //BOTAO 2 PRESSIONADO
      else if(valorLeituraAnalogica >= valorBotao2 * 0.9  &&
            valorLeituraAnalogica <= valorBotao2 * 1.1 &&
            valorAnterior == 1023)
    {
      posicao = 1;
    }
 
   //BOTAO 3 PRESSIONADO
    else if(valorLeituraAnalogica >= valorBotao3 * 0.9  &&
            valorLeituraAnalogica <= valorBotao3 * 1.1 &&
            valorAnterior == 1023)
    {
      if (posicao == 0){
      if(intensidadeLedA < 100)
      {
      intensidadeLedA += 10;
      Serial.println(intensidadeLedA);
      }
      }else{
        if(intensidadeLedB < 100){
           intensidadeLedB += 10;
      Serial.println(intensidadeLedB);
       lcd.print(intensidadeLedB);  
      }
       
      }
     
    }
   
   //BOTAO 4 PRESSIONADO
   else if(valorLeituraAnalogica >= valorBotao4 * 0.9  &&
            valorLeituraAnalogica <= valorBotao4 * 1.1 &&
            valorAnterior == 1023)
    {
     if (posicao == 0){
     if (intensidadeLedA > 0)
     intensidadeLedA -= 10;
     Serial.println(intensidadeLedA);
     }else{
       if (intensidadeLedB > 0)
     intensidadeLedB -= 10;
     Serial.println(intensidadeLedB);
     }
     
   
    }
 
   //BOTAO 5 PRESSIONADO
      else if(valorLeituraAnalogica >= valorBotao5 * 0.9  &&
            valorLeituraAnalogica <= valorBotao5 * 1.1 &&
            valorAnterior == 1023)
    {
        if( posicao == 0)
        {
      estadoLedA = !estadoLedA;
       }
       
     else
       {
   estadoLedB = !estadoLedB;
      }
   
   
      }
   
  valorAnterior = valorLeituraAnalogica;

  //****** FIM DO TRATAMENTO DOS BOTOES ******
 
 
  // ***** ATUALIZA DISPLAY ******
 
       if(posicao == 0) 
  {
    lcd.setCursor(0,0);
    lcd.print(">");
    lcd.setCursor(0,1);
    lcd.print(" ");
   
 
  lcd.setCursor(7,0);
    if (estadoLedA)
   {
       
   
     
     lcd.print(intensidadeLedA);
      lcd.print("        ");
   }  
   else
   {
   lcd.print("OFF");
   }
     }    
       
  else
    {
    lcd.setCursor(0,1);
    lcd.print(">");
    lcd.setCursor(0,0);
    lcd.print(" ");
    lcd.setCursor(7,1);
   
   
    if (estadoLedB){
    lcd.print(intensidadeLedB);
    lcd.print("              ");
   
    }
    else{  
    lcd.print("OFF");
   
    }
    }
         
       
 
  //***** ATUALIZACAO DOS LED ******
    
   if(estadoLedA == 1)
   analogWrite(6, intensidadeLedA * 2.55);
  
   else
     digitalWrite(6, LOW);
  
  if(estadoLedB == 1)
    analogWrite(5, intensidadeLedB * 2.55);
  
   else
     digitalWrite(5, LOW);
 
   atualizacaco = 0 ;

}