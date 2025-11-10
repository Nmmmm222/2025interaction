//week10-7-srduino-serial-joystick-x-y-to-processing
//修改自 week10-5-arduino-serial-joystick-to-processing
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);

}

void loop() {
  delay(30); //要慢一點 不然 processing 會接不了
  int x=analogRead(A2); //把搖桿的Y接在 A2
  int y=analogRead(A3); //把搖桿的Y接在 A3
  Serial.write(x/4); //把 0-1023 變成 0-255
  Serial.write(y/4);
  if(x>800) tone(8,784,100);
  if(x<100) tone(8,523,100);
  if(y>900) tone(8,659,100);
  if(y<100) tone(8,500,100); //亂寫數字
}
