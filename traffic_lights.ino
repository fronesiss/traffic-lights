void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop()
{
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
  
  digitalWrite(7,HIGH);
  delay(3000);
  digitalWrite(7,LOW);
}