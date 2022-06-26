//=================[While]=================
int contador;
void setup() {
  // set up all the LEDs as OUTPUT
  Serial.begin(9600);
  contador=0;
   while(contador<10){
    Serial.println("Curso de Lógica de Programação com Arduino o melhor");
    contador++;
  }
 
}

void loop() {
   
}


//=================[FOR]=================
void setup()
{
  Serial.begin(9600);
for (int contador=0;contador<=10;contador++){
Serial.println("Testando o comando de repeticao for()");
Serial.println(contador);
}

}
void loop()
{
  

}


