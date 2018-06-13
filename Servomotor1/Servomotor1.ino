/*
 * Servoposicionamiento con Boton
 * www.127voltz.com
 */
void setup() {
  pinMode(3,INPUT);    // pin 3 como entrada digital.
  pinMode(4,OUTPUT);   // pin 4 como salida digital.
}

void loop() {
   if (digitalRead(3) == 1)   // esta precionado el boton?
   {
     digitalWrite(4,HIGH);     // se genera pulso alto para 180 grados
     delayMicroseconds(2400);  // pulso alto por 2400us
     digitalWrite(4,LOW);      // se genera pulso bajo 
     delay(20);                // por 20 ms                    
   }
   else                        // se genera pulso para 0 grados
   {
     digitalWrite(4,HIGH);     // se genera pulso alto
     delayMicroseconds(600);  // pulso alto por 600us
     digitalWrite(4,LOW);      // se genera pulso bajo 
     delay(20);                // por 20 ms  
   }
}
