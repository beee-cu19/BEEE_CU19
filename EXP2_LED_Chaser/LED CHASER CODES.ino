void setup()
{
  for(int i=4;i<14;i++)
  { pinMode(i,OUTPUT);
  }
}

void loop()
 { 
  for(int i=4;i<14;i++)
  {
  digitalWrite(i, HIGH);
  delay(300); // Wait for 300 millisecond(s)
  digitalWrite(i, LOW);
  delay(300); // Wait for 300 millisecond(s)
  }
 }