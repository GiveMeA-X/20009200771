// C++ code
//
int i = 3;
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  for(i = 3;i<=8;i++)
  {
    digitalWrite(i, HIGH);
    delay(500); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    delay(500); // Wait for 1000 millisecond(s)
  }
  
}
