void setup()
{
  Serial.begin(9600);
  int numeroA = -45;
  
  if (numeroA > 0){
  Serial.println("positivo");
  }
  else{
  Serial.println("negativo");
  }
}

void loop()
{
}
