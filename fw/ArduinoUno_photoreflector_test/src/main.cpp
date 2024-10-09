#include <Arduino.h>

int pin = 0; 
void setup() {
Serial.begin(115200);
pinMode(pin,INPUT);
}
void loop() {
int val;
val = analogRead(pin) ; //アナログ０番ピンからセンサ値を読み込み
Serial.println(val) ; // シリアルモニターへ表示
delay(10) ; // 100ms待つ
}