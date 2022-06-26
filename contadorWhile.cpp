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
