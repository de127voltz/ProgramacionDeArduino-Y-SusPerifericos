float adc0, angulo, x;

void setup() {
pinMode(2,OUTPUT);
digitalWrite(2,LOW);
Serial.begin(9600);
Serial.print("listo");
}

void loop() {
 adc0 = analogRead(0);
 x = ((adc0*1800)/1024)+600;
 angulo = x / 1000000;
 Serial.print(adc0);
 Serial.print("   ");
 Serial.print(x);
 Serial.print("   ");
 Serial.println(angulo);
 
 digitalWrite(2,HIGH);
 delayMicroseconds(x);
 digitalWrite(2,LOW);
 delay(20);
 
}
