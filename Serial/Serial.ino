char DatoIN;
void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(4,OUTPUT);
}
void loop() {
if(Serial.available() > 0)  // llegaron dato?
{
 DatoIN = Serial.read();          // si
 if(DatoIN == 'A')   // llego A?
 digitalWrite(13,HIGH);   // si
 if(DatoIN == 'B')    // no, entonces llego B?
 digitalWrite(13,LOW); // si llego B
  if(DatoIN == 'C')
 digitalWrite(4,HIGH);
  if(DatoIN == 'D')
 digitalWrite(4,LOW);
}                   //no llegaron datos
// aqui si no hay datos
}//loop

