/*
 * Control de motor CD con Driver L293D
 */
 int adc0, cicloT;

void setup() {
  pinMode(2,OUTPUT);    // pin 2 como salida
  pinMode(3,OUTPUT);    // pin 3 como salida
  pinMode(4,INPUT);     // pin 4 como entrada
}

void loop() {
  adc0 = analogRead(0);   // se lee señal analogica
  cicloT = adc0/4;        // adc0 0-1023, convierte a cicloT 0-255
  analogWrite(9,cicloT);  // se egenera señal PWM en el pin 9

  if(digitalRead(4) == 1)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
  }
  else
  {
    digitalWrite(3,HIGH);
    digitalWrite(2,LOW);
  }
  
}
