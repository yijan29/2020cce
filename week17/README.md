# 背單字
```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String []Q ={"hello","world","other"};
int Qi=0;//第幾個Q Q[i] Q[0] Q[1] Q[2]
void draw(){//每秒60次
  background(0);
  text("Score:" + score,100,50);
  text("Q: "+Q[Qi],100,100);
  text("A: "+line,100,150);
}
int score=0;
void keyPressed(){//有時打字會有看不到的符號
  int len = line.length();
  if(key>='a' && key<='z')line = line + key;//小寫鍵
  if(key>='A' && key<='Z')line = line + key;//大寫鍵
  if(key == BACKSPACE && len>0) line = line.substring(0,len-1);
  if(key == ENTER ){//算分數
    if(line.equals(Q[Qi])==true){
      score ++;
      Qi++;//換下一筆Q[0]變Q[1]...
      line="";
    }else score--;
  }
}//Q:算分數!!!(陣列)更多題目!亂數跳題
```
