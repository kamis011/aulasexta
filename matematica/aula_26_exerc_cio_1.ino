/*
Nome do arquivo: Matematica
Autor: Kamila Pereira dos Santos
Data: 24/02/2025
*/

  int numeroA = 50;
  int numeroB = 30;
  int resultado = 0;
  float resultadoReal = 0;

void setup()
{
 
  Serial.begin (96000);
 
 
  resultado = map (50,0,1023,0,100);
  Serial.println(resultado);
 
  resultado = constrain(resultado, 20 ,80);
  Serial.println(resultado);
 
 
  // ATIVIDADE 2
 
  int valor  = 0;
 
  valor ++;
  Serial.println(valor);
 
  valor ++;
  Serial.println(valor);
 
  valor ++;
  Serial.println(valor);
 
  valor ++;
  Serial.println(valor);
     
  valor ++;
  Serial.println(valor);
 
  valor ++;
  Serial.println(valor);
   
  valor ++;
  Serial.println(valor);
   
  valor ++;
  Serial.println(valor);
 
  valor ++;
  Serial.println(valor);
     
  valor ++;
  Serial.println(valor);
 
  valor --;
  Serial.println(valor);
 
  valor --;
  Serial.println(valor);
 
  valor --;
  Serial.println(valor);
   
  valor --;
  Serial.println(valor);
   
  valor --;
  Serial.println(valor);
 
  valor --;
  Serial.println(valor);
 
 
  valor --;
  Serial.println(valor);
   
 
  valor --;
  Serial.println(valor);
   
 
  valor --;
  Serial.println(valor);
   
 
  valor --;
  Serial.println(valor);  
 
  //ATIVIDADE 3
  Serial.println("atividade 3");
  resultado = numeroA + numeroB;
  Serial.print("a soma do valor1 com valor2 eh: ");
  Serial.println(resultado);
  
  resultadoReal = (float) resultado/ 2.0;
  Serial.print("A divisão de decimais eh: ");
  Serial.println(resultadoReal,1);
  
}
void loop()
{
}