/*Programa para digitalizar una señal analogica y representarla en 10 bits
 * DDRx DDRD ó DDRB = 1 = output y el valor
 * 0 = input
 */
 unsigned int adc0;   // se declara variable para almacenar señal analogica
void setup() {
 DDRD=0B11111111;   // del pin 0 al pin 7 se configura como salidas digitales
 DDRB=0B11111111;   // del pin 8 al pin 13 como salidas digitales
 PORTD=0B00000000;  // valor inicial
 PORTB=0B00000000;  // valor inicial del portb
}

void loop() {
   adc0 = analogRead(0);    // se lee la entrada analogica
   PORTD=adc0;              // asignamos los primero 8 bits a PORTD
   PORTB=adc0 >> 8;         // asignamos los dos bits restantes
}
