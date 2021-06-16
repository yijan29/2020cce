# 1.進階題：大於漸增數列總和之最小整數

```c
#include <stdio.h>
int main()
{
	int k,ans=0,i;
	scanf("%d",&k);
	
	for(i=1;i<44;i++){
		ans += i;
		if(ans>k) break;
	}
	printf("%d",i);
	
}
```

# 2.進階題：計算級數的值

```c
#include <stdio.h>
int main()
{
	int n,i,ans=0;
	scanf("%d",&n);
	
	for(i=1;i<=2*n+1;i++){
		if(i%2!=0)ans += i;
	}
	printf("f(%d)=%d",n,ans);
}
```

# 3.進階題：拆解輸入的正整數

```c
#include <stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	
	while(n>0)
	{
		printf("%d ",(n%10)*i);
		n/=10;
		i*=10;
	}
}
```

# 4.基礎題：計算一組任意數目的整數的總和

```c
#include <stdio.h>
int main()
{
	int a,i,ans=0;
	scanf("%d",&a);
	
	while(a!=0)
	{
		if(a>0) ans += a;
		scanf("%d",&a);
	}
	printf("%d",ans);
	
}
```

# 5.基礎題：整數最大值、最小值

```c
#include <stdio.h>
int main()
{
	int min,max,a;
	scanf("%d",&a);
	
	min=a;
	max=a;
	while(a!=0)
	{
		scanf("%d",&a);
		if(min>a)min=a;
		if(max<a)max=a;
	}
	printf("[%d,%d]",min,max);
}
```

# 6.大轉盤

```c
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
```
