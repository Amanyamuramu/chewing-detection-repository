#include <Arduino.h>

const int sense_pin = 32 ; //★回路に合わせる。今回は25番ピンを使用。
const float Vr = 3.3; //入力電圧の範囲は0~3.3V（今回は未使用）
const float ANALOG_MAX = 4096; //AD変換の最大値（今回は未使用）

int val = 0;        //センサ入力値
float voltage = 0;  //電圧に変換したセンサ入力値

void setup() {
  Serial.begin(9600);  //伝送速度設定
}

void loop() {
  val = analogRead(sense_pin);              
  voltage = float(val) * (Vr) / (ANALOG_MAX);
  Serial.println(val);
  delay(100);
}