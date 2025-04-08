#include <Arduino.h>
#include <Bounce2.h>
#include <LiquidCrystal_I2C.h>

#define ledRed 15
#define ledYellow 2
#define ledGreen 4
#define ledWhite 5
#define pinButton01 18
#define pinButton02 19
#define pinButton03 23

LiquidCrystal_I2C lcd(0x27, 20, 4);

Bounce buttonA = Bounce();
Bounce buttonB = Bounce();
Bounce buttonC = Bounce();

void botaoSeta();

bool atualizacao = 0;

void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledWhite, OUTPUT);                // Leds e Botões
  pinMode(pinButton01, INPUT_PULLUP);
  pinMode(pinButton01, INPUT_PULLUP);
  pinMode(pinButton02, INPUT_PULLUP);
  pinMode(pinButton03, INPUT_PULLUP);

  buttonA.attach(pinButton01, INPUT_PULLUP);
  buttonB.attach(pinButton02, INPUT_PULLUP);  // bounce
  buttonC.attach(pinButton03, INPUT_PULLUP);

  lcd.setCursor(0, 0);
  lcd.print(">");
  lcd.setCursor(1, 0);
  lcd.print("Led Red");
  lcd.setCursor(1, 1);
  lcd.print("Led Yellow");
  lcd.setCursor(1, 2);
  lcd.print("Led Green");
  lcd.setCursor(1, 3);
  lcd.print("Led White");
}

void loop()
{
  botaoSeta();
}

void botaoSeta()
{
  buttonA.update();
  buttonB.update();
  buttonC.update();
  static int buttonContador = 0;
  static bool modoSelecao = 0;

  if(modoSelecao)
  {
    if (buttonA.fell())
  {
    buttonContador++;
    atualizacao = 1;
    if (buttonContador > 3)
      buttonContador = 0;
  }

  if (buttonB.fell())
  {
    buttonContador--;
    atualizacao = 1;
    if (buttonContador < 0)
      buttonContador = 3;
  }
  }
  if (buttonC.fell())
  {
    atualizacao = 1;
    modoSelecao = !modoSelecao;
  }
 
  

  if (atualizacao)
  {
      switch (buttonContador)
      {
      case 0:
        lcd.setCursor(0, 0);
        lcd.print(">");
        lcd.setCursor(0, 1);
        lcd.print(" ");
        lcd.setCursor(0, 2);
        lcd.print(" ");
        lcd.setCursor(0, 3);
        lcd.print(" ");
        break;

      case 1:
        lcd.setCursor(0, 0);
        lcd.print(" ");
        lcd.setCursor(0, 1);
        lcd.print(">");
        lcd.setCursor(0, 2);
        lcd.print(" ");
        lcd.setCursor(0, 3);
        lcd.print(" ");
        break;

      case 2:
        lcd.setCursor(0, 0);
        lcd.print(" ");
        lcd.setCursor(0, 1);
        lcd.print(" ");
        lcd.setCursor(0, 2);
        lcd.print(">");
        lcd.setCursor(0, 3);
        lcd.print(" ");
        break;

      case 3:
        lcd.setCursor(0, 0);
        lcd.print(" ");
        lcd.setCursor(0, 1);
        lcd.print(" ");
        lcd.setCursor(0, 2);
        lcd.print(" ");
        lcd.setCursor(0, 3);
        lcd.print(">");
        break;
    }
  }

  atualizacao = 0;
}
//***** FEITO ATÉ A ETAPA 5 *****