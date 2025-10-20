//week07-3-arduino_blink_blink_blink_blink
//修改自week07-2 再多插兩支 LED 
//長的接數字 短的接 GND
//要有點分開 不然會短路
void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT); //把 12 支腳 能送出資料 OUTPUT
  pinMode(13,OUTPUT); //把 13 支腳 能送出資料 OUTPUT
}

void loop() {
  for(int i=10;i<=13;i++){
      digitalWrite(13,LOW); //暗掉
      digitalWrite(i-1,LOW); //暗掉
      digitalWrite(i,HIGH); //發亮
      delay(500);
  }


}
