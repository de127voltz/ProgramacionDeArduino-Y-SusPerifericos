/*
 * Programación ADC con PWM
 */
 int cicloT, adc0;
void setup() {
  
}

void loop() {
    adc0 = analogRead(0);     // lee señal analogica y se reprresenta en 10 bits
    cicloT = adc0/4;          // se divide en 4 para el ciclo de trabajo 0-255
    analogWrite(9,cicloT);    // se genera ciclo de trabajo en el pin 9
                              // 0---0%      255--100%
}
