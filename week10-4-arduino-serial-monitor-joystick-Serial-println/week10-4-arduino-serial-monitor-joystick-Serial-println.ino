//week10-4-arduino-serial-monitor-joystick-Serial-println
//修改自week10-3-arduino-analogRead-A3
//把 joystick 的 Y 的線 經由麵包版 接到 MakerUNO 另一邊的 A3
//(不能接其他的 因為要接有 ~小蟲符號的 代表 ARALOG 訊號)
void setup() {
  Serial.begin(9600); //開啟 USB 傳輸
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT); //發出聲音
}

void loop() { // 一秒鐘 會跑 1000 HZ
  delay(100); //慢一點 避免 Processing 來不及處裡
  int now=analogRead(A3);
  Serial.println(now);
  //想看 Serial Monitor 來看看會送出甚麼訊號

  if(now>800){ //變高
    tone(8,523,100); //發出 523 的 Do
    delay(100);
    tone(8,784,100); //發出 784 的 SO
    delay(100);
  }else if(now<200){ //變低
    tone(8,784,100); //發出 784 的 SO
    delay(100);
    tone(8,523,100); //發出 523 的 Do
    delay(200);
  }

}
