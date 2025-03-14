#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define pinLed 13
#define Botao 2 

int estadoAtual = 0;
int estadoLed = 0;
int estadoBotao = 0;
int estadoAnterior = 1;

void setup()
{
  lcd.init();
  lcd.backlight();
  pinMode(pinLed, OUTPUT);
  pinMode(Botao, INPUT);
}

void loop()
{
  bool estadoAtual = digitalRead(Botao);
  if (estadoAtual == 1 && estadoAnterior == 0)
  {
  estadoLed = !estadoLed;
  }
  digitalWrite(pinLed, estadoLed);
  if(estadoLed)
  {
  lcd.setCursor(0,0);
  lcd.print("Ligado   ");
  }
  else 
  {
  lcd.setCursor(0,0);
  lcd.print("Desligado");
  }
  estadoAnterior = estadoAtual;
}