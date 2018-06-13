/*Codigo para leer sensor de temperatura LM35
 * 1grado ; 10 mV
 * 20 grados = 200mV ó .2 V
 * 50 grados = 500mV ó .5V
 * 150 grados = 1500mV ó 1.5V
 */
 float adc0, temp, mV; // se declaran variables
void setup() {
    pinMode(2,OUTPUT);    // configura pin 2 como salida
    pinMode(3,OUTPUT);    // configura pin 3 como salida digital
}

void loop() {
  adc0 = analogRead(0);   // se lee señal analogica 0-1023
  mV= (adc0*5)/1024;      // se convierte valor digital a mV
  temp = mV * 100;        // convertimos los mV a temp

  if(temp < 35)
  {
    digitalWrite(3,HIGH);
    digitalWrite(2,LOW);
  }
    if(temp > 36)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
  }
}
