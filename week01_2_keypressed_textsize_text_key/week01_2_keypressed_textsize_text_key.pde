//week01-2-keypressed-textsize-text-key
void setup(){
  size(500,500);
}
void draw(){//用鍵盤來互動
  if(keyPressed){
    background(#FF0000);//紅色背景
    textSize(80);
    text(""+key,100,100);//記得切換輸入法
  }
}
