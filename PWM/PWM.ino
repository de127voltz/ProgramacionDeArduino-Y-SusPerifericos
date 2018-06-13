/*
 * Salida PWM en el pin 9
 * www.127voltz.com
 */

void setup() {

}

void loop() {
 for(int cicloT=0 ; cicloT <= 255 ; cicloT++)
 {
  analogWrite(9,cicloT);
  delay(20);
 }
}
