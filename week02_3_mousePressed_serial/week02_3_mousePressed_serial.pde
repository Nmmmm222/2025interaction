//week02-3-mousePressed-serial
import processing.serial.*; //第一行 使用USB的serial
Serial myPort;//第二行 宣告USB 的Serial 變數 import
void mousePressed(){
  myPort.write(' ');//第四行 mouse 按下時 發送 ' '出去
}
void setup(){
  size(400,400);
  myPort=new Serial(this,"COM4",9600);//第三行 準備好
}//剛剛你在 Arduino 裡設定 COM多少
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00ff00);
}
