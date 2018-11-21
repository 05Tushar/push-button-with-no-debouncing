int inputPin=9;
int ledPin=10;
int brightness=255;
void setup()
{
  Serial.begin(9600);
  pinMode(inputPin,INPUT);
  pinMode(ledPin,OUTPUT);
}
void loop()
{
  while (brightness>=15)
  {
    if(digitalRead(inputPin)==HIGH)
    {
     while(digitalRead(inputPin)==HIGH)
     {}
     delay(5);
     brightness=brightness-15;
     Serial.println(brightness);
    }
    analogWrite(ledPin,brightness);
  }
  while (brightness<=240)
  {
    if(digitalRead(inputPin)==HIGH)
    {
     while(digitalRead(inputPin)==HIGH)
     {}
     delay(5);
     brightness=brightness+15;
     Serial.println(brightness);
    }
    analogWrite(ledPin,brightness);
  }
}
