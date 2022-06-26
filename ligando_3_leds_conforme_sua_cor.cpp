//
#define led_verde 5
#define led_amarelo 6
#define led_vermelho 7
char opcao;


void setup()
{
  pinMode (led_verde, OUTPUT);
  pinMode (led_amarelo, OUTPUT);
  pinMode (led_vermelho, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()){
  opcao=Serial.read();
  if (opcao=='G') //green
      digitalWrite(led_verde,HIGH);
  else if (opcao=='g') //Senão  Se digitar g minúsculo 
     digitalWrite(led_verde,LOW); //desliga o LED
  if (opcao=='Y') //yellow
      digitalWrite(led_amarelo,HIGH);
   else   if (opcao=='y') //yellow // Senão Se digitar y minúsculo 
      digitalWrite(led_amarelo,LOW);//desliga o LED
  if (opcao=='R') //red
      digitalWrite(led_vermelho,HIGH);
     else if (opcao=='r') //red // Senão Se digitar r minúsculo 
      digitalWrite(led_vermelho,LOW);//desliga o LED
    else
    Serial.println("Opcao Invalida"); //não aceita outro caracter
    }
}
