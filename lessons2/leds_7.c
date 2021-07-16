// C++ code
//
int i;
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
    Serial.println("I'm OK!");
    i = Serial.read();
    i = i - '0';
    Serial.println(i);
    if(i == 0)
    {
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      delay(500);
    }
    else if(i == 1)
    {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      delay(1000);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      delay(500);
    }
    else if(i == 2)
    {
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(9,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(9,LOW);
      delay(500);
    }
    else if(i == 3)
    {
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(9,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(9,LOW);
      delay(500);
    }
    else if(i == 4)
    {
      digitalWrite(4,HIGH); 
      digitalWrite(5,HIGH); 
      digitalWrite(8,HIGH); 
      digitalWrite(9,HIGH); 
      delay(1000);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW); 
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      delay(500);
    }
    else if(i == 5)
    {
      digitalWrite(3,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      delay(500);
    }
    else if(i == 6)
    {
      digitalWrite(3,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      delay(500);
    }
    else if(i == 7)
    {
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      delay(500);
    }
    else if(i == 8)
    {
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      delay(500);
    }
    else if(i == 9)
    {
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
    }
  }
}
