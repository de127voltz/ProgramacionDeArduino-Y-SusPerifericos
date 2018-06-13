/*Proceso de mezclado
 * www.127voltz.com
 */

 #define M1 2
 #define M2 3
 #define M3 4
 #define Y1 5
 #define Y2 6
 
void setup() {
  pinMode(M1,OUTPUT);
  pinMode(M2,OUTPUT);
  pinMode(M3,OUTPUT);
  pinMode(Y1,OUTPUT);
  pinMode(Y2,OUTPUT);
}

void loop() {
  digitalWrite(M1,HIGH);   // inicia programa y se activa Motor M1
  delay(4000);             // 4 seg despues 
  digitalWrite(M1,LOW);    // M1 se detiene
  digitalWrite(Y1,HIGH);   // y se activa válvula Y1

  delay(2000);             // 2 seg despues
  digitalWrite(Y1,LOW);    // se cierra válvula Y1
  digitalWrite(M3,HIGH);   // y se activa motor M3

  delay(3000);             // 3 seg despues
  digitalWrite(M3,LOW);    // se detiene M3
  digitalWrite(Y2,HIGH);   // se activa valvula Y2

  delay(2000);             // 2 seg despues 
  digitalWrite(Y2,LOW);    // se cierra Y2
  digitalWrite(M2,HIGH);   // se activa motor M2

  delay(2000);             // 2 seg despues
  digitalWrite(M2,LOW);    // se detiene motor M2 y se repite el programa
}  // loop
