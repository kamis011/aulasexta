#include <Arduino.h>

const int pinBotao = 3;

// ***** PROTOTIPOS DAS FUNÇÕES *****

// tipo / nome / parametros
void ligaLed(int); 
void desligaLed(int);
void piscaLed(int, unsigned long);
int somaDeDoisNumeros(int, int);

void setup()
{
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  piscaLed(2, 100); //* executa a função
  int resultadoDaSoma = somaDeDoisNumeros(4, 8); //* imprime o resultado da função
  Serial.println(resultadoDaSoma); 
}

//* define o nome da variavel dentro do parametro
void ligaLed(int pin)
{
  digitalWrite(pin, HIGH);
}

void desligaLed(int pin)
{
  digitalWrite(pin, LOW);
}

void piscaLed(int pin, unsigned long tempo)
{
  //* executa todas as funções
  ligaLed(pin);
  delay(tempo);
  desligaLed(pin);
  delay(tempo);
}

int somaDeDoisNumeros(int numeroA, int numeroB)
{
  int resultado = numeroA + numeroB; 
  return resultado; //* retorna o resultado
}