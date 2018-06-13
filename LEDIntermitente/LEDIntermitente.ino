/*LED Intermitente
 * www.127volttz.com
 */
void setup() {
  pinMode(13,OUTPUT);       // pin 13 como salida
}

void loop() {
  digitalWrite(13,HIGH);    // escribimos 1 logico en el pin 13
  delay(1000);              // espera un segundo
  digitalWrite(13,LOW);     // escribimos un 0 lógico en el pin 13
  delay(1000);              // esperamos un segundo
}
