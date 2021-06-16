void setup(){
  size(400,200);
  fill(223,225,240);
  textSize(30);
}
float shift=0,v=0;//一開始速度0
void mousePressed(){
  v=random(10)+5; //5...15.0
}
void draw(){
  background(97,110,188);
  for(int i=0;i<24;i++){
    if(i%3==0) fill(63,62,64);//淺黑
    if(i%3==1) fill(216,215,227);//灰
    if(i%3==2) fill(142,139,193);//藍
    if(i==0) fill(139,209,196);
    float start = radians(0+shift+i*360/24);
    float stop = radians(360/24+shift+i*360/24);
    arc(100,100,180,180,start,stop);
  }
  if(v>0.1){//還有速度時,就轉動
    shift += v;//轉動速度
    v=v*0.99;//速度會慢慢減速
  }else{
    text(shift,200,100);//印出shift
    text(v,200,150);//印出轉動的速度
  }
}