void setup()
{
  int salario = 999;
  int resultado = 0;
  if (salario < 1000){
  resultado = salario * 10;
  }
  
  Serial.begin(9600);
  Serial.println("Carlos");
  Serial.println("Superior");
  Serial.println(resultado);
}

void loop()
{

}