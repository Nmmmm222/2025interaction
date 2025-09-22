//week03-8-processing-mouse-serial-write-space
import processing.serial.*; //使用 0Serial 外掛
Serial myPort;
void setup(){
  size(400,400);
  myPort=new Serial(this,"COM6",9600);
} //要查電腦
void mousePressed(){
  if(mouseButton==LEFT) myPort.write('b');
  if(mouseButton==RIGHT) myPort.write(' ');
}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
