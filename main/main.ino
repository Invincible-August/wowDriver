#include <Keyboard.h>

void setup() {
  // 启动串口通信
  Serial.begin(9600);
  // 等待串口初始化完成
  while (!Serial) {
    ; // 等待直到串口连接
  }
  Serial.println("Arduino已准备好接收指令");
}

void loop() {
  // 检查是否有从串口收到的数据
  if (Serial.available() > 0) {
    // 读取串口传来的数据
    String command = Serial.readStringUntil('\n');
    command.trim(); // 去掉前后的空格和换行符

    // 检查接收到的指令
    switch(command)
    {
      case "A":
        Keyboard.press("a");
        break;
      case "B":
        Keyboard.press("b");
        break;
      case "C":
        Keyboard.press("c");
        break;
      case "D":
        Keyboard.press("d");
        break;
      case "E":
        Keyboard.press("e");
        break;
      case "F":
        Keyboard.press("f");
        break;
      case "G":
        Keyboard.press("g");
        break;
      case "H":
        Keyboard.press("h");
        break;
      case "I":
        Keyboard.press("i");
        break;
      case "J":
        Keyboard.press("j");
        break;
      case "K":
        Keyboard.press("k");
        break;
      case "L":
        Keyboard.press("l");
        break;
      case "M":
        Keyboard.press("m");
        break;
      case "N":
        Keyboard.press("n");
        break;
      case "O":
        Keyboard.press("o");
        break;
      case "P":
        Keyboard.press("p");
        break;
      case "Q":
        Keyboard.press("q");
        break;
      case "R":
        Keyboard.press("r");
        break;
      case "S":
        Keyboard.press("s");
        break;
      case "T":
        Keyboard.press("t");
        break;
      case "U":
        Keyboard.press("u");
        break;
      case "V":
        Keyboard.press("v");
        break;
      case "W":
        Keyboard.press("w");
        break;
      case "X":
        Keyboard.press("x");
        break;
      case "Y":
        Keyboard.press("y");
        break;
      case "Z":
        Keyboard.press("z");
        break;      
    }
    delay(100);                    // 保持按键按下100毫秒
    Keyboard.releaseAll();         // 释放所有按键
    Serial.println("已模拟按下Alt + A");
  }
}
