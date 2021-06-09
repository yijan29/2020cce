# 1.進階題：億萬富翁

```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	
	for(int i=0;i<strlen(a);i++){
		if((strlen(a)-i)%3==0 && i!=0)printf(",");
		printf("%c",a[i]);
	}
	
	
}
```

# 2.進階題：秒數換算

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int s=n%60;
	int m=n/60%60;
	int h=n/(60*60);
	printf("%02d:%02d:%02d",h,m,s);
}
```

# 3.整數向量相加

```c
#include <stdio.h>
int main()
{
	int n,a[10],b[10];
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
		printf("%d ",a[i]+b[i]);
	}
}
```

# 4.倒數鈴聲響

```c
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
```
