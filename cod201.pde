int numero = 1; //inicialização
void setup ()
{
Serial.begin (9600); //Configura o número da porta
Serial.print ("A variavel 'numero' vale:");
Serial.println (numero); //Mostra na tela o numero da variável 1
delay(2000); //espera 2 segundos
numero = 5; //Atribuição do valor a variável número 5
Serial.print ("Agora a variável 'numero' vale:"); // mostrando valor atual da variável
Serial.println(numero);
}
void loop ()
{
numero = numero+1; // Somando 1 ao valor que está dentro da variável sendo o valor 5
Serial.print("Agora a variavel 'numero' vale:"); // atualizando a váriavel
Serial.println (numero);
delay (2000);
}
