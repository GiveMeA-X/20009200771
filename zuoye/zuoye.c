// C++ code
//
#include<MsTimer2.h>
int tick1=0,tick2=0;
void onTimer()
{
  tick2++;
  if(tick2>9)
  {
    tick1++;
    tick2=0;
    if(tick1>9)
    {
      tick1=0;
    }
  }
  
  Serial.print("timer ");
  digitalWrite(4,(tick2&0x1));
  digitalWrite(5,((tick2>>1)&0x1));
  digitalWrite(6,((tick2>>2)&0x1));
  digitalWrite(7,((tick2>>3)&0x1));
  
  digitalWrite(8,(tick1&0x1));
  digitalWrite(9,((tick1>>1)&0x1));
  digitalWrite(10,((tick1>>2)&0x1));
  digitalWrite(11,((tick1>>3)&0x1));
}
void setup()
{
  Serial.begin(9600);  //初始化串口
  pinMode(3,INPUT);  //将3号设为读取
  
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  MsTimer2::set(500, onTimer);
  MsTimer2::start();
}

void loop()
{
  int n = digitalRead(3);
  if(n == HIGH)  //如果按下按钮，则将tick1和tick2归零
  {
    tick1=0;
    tick2=0;
  }
}
