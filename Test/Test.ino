/*
 * 现象ESP9266 NODEMCU上的蓝色灯不断闪烁
 * 本工程旨在按照.c .h的常见分类,在Arduino编译器中编译工程
*/
#include "./inc/test2.h"
#include "blink.h"
//i = 3; 
//在这儿写i = 3就是错的,这个和extern这个关键字无关.主要是Arduino的程序结构的原因.
//因为setup和loop其实也是两个封装好的函数.你要把变量写在这两个函数里面才能在你认为的main函数里执行.
//请参见 https://blog.csdn.net/haigear/article/details/84931588


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  i = 3; //这儿就是对的
  z = 3;
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
