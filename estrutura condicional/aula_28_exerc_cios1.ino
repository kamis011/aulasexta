/*
Autor: Kamila Pereira dos Santos
Data: 26/02/2025
*/

//C++ code
//

  float valorA = 1.64;
  float valorP = 64;
  float resultado = 0;
    
void setup()
{
  Serial.begin(9600);
  
  resultado = (float)valorA * (float)valorA;
  Serial.print("A multiplicacao dos valores eh: ");
  Serial.println(resultado);
  
  resultado = valorP / resultado;
  Serial.print("O resultado da tabela eh: ");
  Serial.println(resultado,1);
  
  
  if (resultado < 18.5){
    Serial.print("Abaixo do peso: ");
    Serial.println(resultado);
   
  }else if (resultado >= 18.5 && resultado <24.9){
    Serial.print("Peso normal: ");
    Serial.println(resultado);
   
  }else if (resultado >= 25 && resultado <29.9){
    Serial.print("Excesso de peso: ");
    Serial.println(resultado);
    
  }else if (resultado >= 30 && resultado <34.9){
    Serial.print("Obesidade classe 2: ");
    Serial.println(resultado);
    
  }else if (resultado >= 35 && resultado <39.9){
    Serial.print("Obesidade classe 3: ");
    Serial.println(resultado);
    
  }else{
    Serial.println(resultado);
    }
   
}    
void loop()
{
}