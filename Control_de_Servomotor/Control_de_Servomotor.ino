#include <Servo.h>
/*
 * Control con servomotor y potenciometro (ADC).
 */

 Servo motor1;      // se crea objeto tipo servo llamado motor 1
 int adc0, grados;

void setup() {
 motor1.attach(4);    // se define el pin donde se conecta el servo
}
void loop() {
  adc0 = analogRead(0);
  grados = map(adc0,0, 1023, 0,180);   // se escala la variable de 0 a 1023
                                        // de 0 a 180
  motor1.write(grados);
  delay(10);
}
