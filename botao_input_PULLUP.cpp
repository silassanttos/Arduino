const int BOTAO=6; //variável botão liga no pino 6
const int VERDE=8; //led VERDE liga no pino 8
const int AMARELO=9;//led MARELO liga no pino 9
const int VERMELHO=10;//led VERMELHO liga no pino 10
void setup ()
{
pinMode (VERDE, OUTPUT); //led porta de saída
pinMode (AMARELO,OUTPUT);//led porta de saída
pinMode (VERMELHO, OUTPUT);//led porta de saída
pinMode (BOTAO, INPUT_PULLUP);//botao entrada com resistor
}
void loop ()
{
//abre sinal para o pedestre
digitalWrite (VERDE, HIGH);
//aguarda pedestre apertar o botao
while (digitalRead(BOTAO))
;
//mudando sinal para amarelo
digitalWrite(VERDE,LOW);
digitalWrite(AMARELO,HIGH);
delay (4000);

//fecha sinal do carro
digitalWrite(AMARELO,LOW);
digitalWrite(VERMELHO,HIGH);
delay (8000);

//abre novamente
digitalWrite(VERMELHO, LOW);
}
