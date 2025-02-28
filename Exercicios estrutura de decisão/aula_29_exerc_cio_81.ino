/*
Autor: Kamila Pereira dos Santos
data;28/02/2025
*/


void setup()
{
  Serial.begin(9600);
  
  int nota1 = 8.0;
  int nota2 = 10;
  int nota3 = 4.0;
  int nota4 = 3.0;
  float media = 0;
  
  media =( nota1 + nota2 + nota3 + nota4) / 4;
  Serial.println(media);
  
  if (media >= 7.0)
  	{
  	Serial.println("Aprovado");
  	}
  
  else if(media < 7.0 && media >= 5.0)
  	{
  	Serial.println("Recuperacao");
  	}
  
  else 
  {
  Serial.println("Reprovado"); 
  }
  
}

void loop()
{
}