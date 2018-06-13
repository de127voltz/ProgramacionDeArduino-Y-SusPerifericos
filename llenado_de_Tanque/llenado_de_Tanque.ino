/*Entradas digitales Llenado de tanque
 * 
 */

 #define s1 4
 #define s2 3
 #define Y1 5
void setup() {
  pinMode(s1,INPUT);     // pin 4 como entrada digital
  pinMode(s2,INPUT);     // pin 3 como entrada digital
  pinMode(Y1,OUTPUT);    // pin 5 como salida digital
}

void loop() {
  digitalWrite(Y1,HIGH);   // inicia programa valcula abierta
 while(digitalRead(s1)==1 && digitalRead(s2)==1)   // mientras que s1 y s2 esten presentes
 {
  digitalWrite(Y1,LOW);                  // se sierra la valvula
 }
}
