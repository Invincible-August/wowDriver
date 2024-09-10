#include <Keyboard.h>

void setup() //初始化
{
  Serial.begin(9600);
  while (!Serial) {
    ; // 等待直到串口连接
  }
  Keyboard.begin();//开始键盘通讯 
}
void loop() //循环
{
  if(Serial.available()>0)
  {
    char buffer[10];
    int bytesRead = Serial.readBytes(buffer, 1);
    if (bytesRead >0)
    {
      buffer[bytesRead] = '\0';

      if (strcmp(buffer, "A") == 0) 
      {
        Keyboard.press('a'));
        Keyboard.release('a');
      }
      
    }
  }
    
}  



