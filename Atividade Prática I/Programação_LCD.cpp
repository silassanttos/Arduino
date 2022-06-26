/*
Biblioteca LiquidCrystal - Olá Mundo

   Demonstra o uso de um display LCD 16x2.
  A biblioteca LiquidCrystal funciona com todos os LCDs
  monitores compatíveis com o Hitachi
  Driver HD44780. Há muitos deles fora
  lá, e você geralmente pode dizer a eles pelo
  interface de 16 pinos.

  Este esboço imprime "Hello World!" para o LCD
  e mostra a hora.

  O circuito:
  * LCD RS pino para pino digital 12
  * LCD Ativar pino para pino digital 11
  * Pino LCD D4 para pino digital 5
  * Pino LCD D5 para pino digital 4
  * Pino LCD D6 para pino digital 3
  * Pino LCD D7 para pino digital 2
  * Pino LCD R/W para terra
  * LCD VSS pino para terra
  * Pino LCD VCC para 5V
  * Resistência de 10K:
  * termina em +5V e terra
  * limpador para pino LCD VO (pino 3)
*/

#include <LiquidCrystal.h>

int seconds = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2);  // Configura o número de colunas e linhas no LCD.

  // Imprime uma mensagem no LCD.
  lcd_1.print("hello world!");
}

void loop()
{
  // coloca o cursor na coluna 0, linha 1
  // (nota: a linha 1 é a segunda linha, pois contando
  // começa com 0):
  lcd_1.setCursor(0, 1);
  // imprime o número de segundos desde o reset:
  lcd_1.print(seconds);
  delay(1000); // Aguarda 1000 milissegundo(s)
  seconds += 1;
}
