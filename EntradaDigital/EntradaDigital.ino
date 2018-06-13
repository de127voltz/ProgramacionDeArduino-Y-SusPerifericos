/*Entradas digitales utilizando un boton y un LED
 * www.127voltz.com
 */
void setup() {
  pinMode(2,INPUT);        // pin 2 como entrada 
  pinMode(3,OUTPUT);       // pin 3 como salida
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)==1)      // si el pin dos es igual a 1?
  {
    digitalWrite(3,HIGH);    // se activa el pin 3 en 1 lógico
    }
    else                    // si pin 2 es cero
    {
      digitalWrite(3,LOW);
    }
}
