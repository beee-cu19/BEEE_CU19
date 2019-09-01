void setup()
{
  for(int i=10;i<14;i++)
    pinMode(i,OUTPUT);
}

void loop()
{
  for(int i=10;i<14;i++)
  { 
    allLEDsoff();
    if(i!=13)
    {
      digitalWrite(i,HIGH);
      digitalWrite(i+1,HIGH);
      delay(300);
    }
    else
    {
      digitalWrite(i,HIGH);
      digitalWrite(i-3,HIGH);
      delay(300);
    }
    }
  }
  void allLEDsoff(void)
  {
    for(int i=10;i<=14;i++)
    {
      digitalWrite(i,LOW);
    }  
     
  }