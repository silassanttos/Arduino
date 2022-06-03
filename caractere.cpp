char ch; //Inicializando a variavel ch do tipo char

void setup()
{ 
  Serial.begin (9600);
}
void loop ()
{
  while (Serial.available()==0){ //Inicializa em 0
    Serial.println ("Informe um caractere:");
   delay(3000); //Em um delay de 3 milisegundos aguardando um caracter ser inserido.
 }
ch=Serial.read(); //CH recebe a leitura digitada
Serial.print ("ch=");
Serial.println(ch); //MOstra no monitor serial o que foi digitado letra por letra.
delay(2000);
}
