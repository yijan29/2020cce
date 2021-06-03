# 1.進階題：奇數反流 

```c
#include <stdio.h>
int main()
{
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]%2==1)printf("%d ",a[i]);
	}
}
```

# 2.把數字倒著印出來

```c
#include <stdio.h>
int main()
{
	char a[10];
	for(int i=0;i<10;i++){
		scanf("%d ",&a[i]);
	}
	for(int i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
}
```

# 3.抽大樂透

```c
//大樂透 抽獎時,會掉下球,49球,挑6球
//int []a={1,2,3,.....寫49很累
int []a = new int [49];//Java的陣列宣告好
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;//人類:1
  for(int i=0;i<10000;i++){//大作弊,抽獎前排好
      int i1=(int) random(49),i2=(int) random(49);
      int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0;
void draw(){
  background(#51A791);
  for(int i=0;i<N;i++){//49只秀6個數
      fill(255); ellipse(50+i*50,100,40,40);//白球
      textAlign(CENTER,CENTER);//文字對齊:中,中
      fill(0); text(a[i],50+i*50,100); //黑字
  }//大樂透 抽獎時 會掉下球,49球,挑6球
}
void mousePressed(){
  N++;//其實數字早就決定了 我們只是慢慢印出來,讓人以為你只是慢慢抽
}
```
