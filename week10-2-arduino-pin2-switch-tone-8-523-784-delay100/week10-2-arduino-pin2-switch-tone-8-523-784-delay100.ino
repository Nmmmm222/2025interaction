//week10-2-arduino-pin2-switch-tone-8-523-784-delay100
void setup() {
  pinMode(2,INPUT_PULLUP); //拉高 變成SVS 真的按下去 變OV (GND) 接地
  pinMode(8,OUTPUT);
} //pin 2 變成按鈕 可以high 可以low

void loop() {
  if (digitalRead(2)==LOW){ //如果 pin2 有按下去
    tone(8,523,100); //發出 523 的 Do
    delay(100);
    tone(8,784,100); //發出 784 的 SO
    delay(100);
  }

}
