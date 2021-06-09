import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"bell.mp3");
}
void draw(){
  background(#F2DF9A);
}
void mousePressed(){
  if(player.isPlaying()){
     player.stop(); 
  }else{
     player.play(); 
  }
}