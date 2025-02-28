void setup()
{
  Serial.begin(9600);
  
  int valor1 = 2;
  int valor2 = 37;
  
  if (valor1 > valor2){
  Serial.println("O valor 1 eh maior");
  }else{
  Serial.println("O valor 2 eh maior");
  }
}

void loop()
{
}