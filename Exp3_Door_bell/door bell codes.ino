void setup()
{
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{ digitalWrite(13, LOW);
if(digitalRead(8)==HIGH)
{
  digitalWrite(13, HIGH);}
}