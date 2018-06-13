/*Entradas Digitales
 * www.127voltz.com
 * 
 */
void setup() {
  pinMode(2,INPUT);     // pin 2 como entrada digital
  pinMode(3,OUTPUT);    // pin 3 como salida digital
}

void loop() {
  if(digitalRead(2)==1)      // si pin 2 es igual a 1 logico?
  {
    digitalWrite(3,HIGH);    // se activa el pin 3
    }
                             // el pin 2 es igual a cero
}
