
int adc0, adc1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("listo");
}

void loop() {
  // put your main code here, to run repeatedly:
adc0 = analogRead(0);
//adc1 = analogRead(1);

Serial.println(adc0);
//Serial.print("   ");
//Serial.println(adc1);
delay(100);

}
