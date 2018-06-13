/*
 * Control vía Computador
 * www.127voltz.com
 */
  char DatoIN;
  #define cocina 2
  #define comedor 3
void setup() {
  pinMode(cocina,OUTPUT);     // pin 2 como salida digital.
  pinMode(comedor,OUTPUT);    // pin 3 como salida digital.
  Serial.begin(9600);         // se inicializa la comunicación serie
}

void loop() {
  if(Serial.available() > 0)   // preguntamos si llegaron datos?
  {
    DatoIN = Serial.read();   // si, entonces se leen
    if(DatoIN == 'A')
      digitalWrite(cocina,HIGH);
    if(DatoIN == 'B')
      digitalWrite(cocina,LOW);
    if(DatoIN == 'C')
      digitalWrite(comedor,HIGH);
    if(DatoIN == 'D')
      digitalWrite(comedor,LOW);
  }

}
