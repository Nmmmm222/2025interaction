//week07-2-arduino_blink_blink
//長的接數字 短的接 GND
//要有點分開 不然會短路
void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT); //把 12 支腳 能送出資料 OUTPUT
  pinMode(13,OUTPUT); //把 13 支腳 能送出資料 OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,LOW); //暗掉
  digitalWrite(13,HIGH); //發亮
  delay(500);
  digitalWrite(13,LOW); //暗掉
  digitalWrite(12,HIGH); //發亮
  delay(500);
}
