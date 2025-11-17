//week11-5-pacman-part4-many-beans=for-for-array
//修改自week11-4-pacman-part3-move-change-direction
//小精靈 張嘴(在動)而且嘴吧的方向 dir 會動
void setup() {
  size(600, 600); //改一下 變30的倍數
}
int x=300-15, y=300-15, dx=0, dy=0, dir=0; //direction
float m=0, dm=0.05; //嘴巴大小mouth 嘴巴改變量diff of m
boolean[][] bean_eaten=new boolean[20][20]; //java的二維陣
void draw() {
  background(0);
  for (int i=0; i<20; i++) { //左手i 對應y座標
    for (int j=0; j<20; j++) { //右手j 對應x座標
      if (bean_eaten[i][j]==false) {
        fill(255); //白色的豆子
        ellipse(15+j*30, 15+i*30, 5, 5);
        if (dist(x, y, 15+j*30, 15+i*30)<15) bean_eaten[i][j]=true;
      }
    }
  }
  fill(255,255,0);
  float m0=dir*PI/2;
  arc(x,y,30,30,m0+m,m0+PI*2-m);
  x+=dx;
  y+=dy;
  if(m>=1 || m<0) dm=-dm;
  m+=dm;
}

  void keyPressed() {
    if (keyCode==LEFT) {
      dx=-1;
      dy=0;
      dir=2;
    } //向左 PI
    if (keyCode==RIGHT) {
      dx=+1;
      dy=0;
      dir=0;
    } //向右 0度
    if (keyCode==UP) {
      dx=0;
      dy=-1;
      dir=3;
    } //向上 PI*1.5
    if (keyCode==DOWN) {
      dx=0;
      dy=+1;
      dir=1;
    } //向下 PI/2
  
}
