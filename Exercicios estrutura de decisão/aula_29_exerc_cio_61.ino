/*
Autor: Kamila Pereira dos Santos
Data: 28/02/2025
*/

void setup()
{
  Serial.begin(9600);
  
  int salario = 450;
  int resultado = 0;
  if (salario < 500){
  resultado = salario * 30;
  Serial.println("Tem direito de aumento");
  }else if(salario > 500){
  Serial.println("Nao tem direito de aumento");
  }
     
}

void loop()
{

}