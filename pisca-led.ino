// Programa : Pisque um LED
 
void setup()
{
  Serial.begin(9600);
  Serial.println("Proeducador - Gerenciamento de repositório local e remoto");
  //Define a porta do led como saida
  pinMode(11, OUTPUT);
}
 
void loop()
{
  //Acende o led
  digitalWrite(11, HIGH);
   
  //Aguarda intervalo de tempo em milissegundos
  delay(5000);
   
  //Apaga o led
  digitalWrite(11, LOW);
   
  //Aguarda intervalo de tempo em milissegundos
  delay(5000);
}
