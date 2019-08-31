void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(13, LOW);
  delay(200); // Wait for 200 millisecond(s)
}