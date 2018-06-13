
int x; 

void setup() 
{
  Serial.begin(9600);
  pinMode(6,OUTPUT); // Enable
  pinMode(5,OUTPUT); // Step
  pinMode(4,OUTPUT); // Dir
  digitalWrite(6,LOW); // Set Enable low
}

void loop() 
{
  digitalWrite(6,LOW); // Set Enable low
  digitalWrite(4,HIGH); // Set Dir high
  Serial.println("Loop 200 steps (1 rev)");
  for(x = 0; x < 200; x++) // Loop 200 times
  {
    digitalWrite(5,HIGH); // Output high
    delay(30); // Wait
    digitalWrite(5,LOW); // Output low
    delay(30); // Wait
  }
  //Serial.println("Pause");
  //delay(1000); // pause one second
}
