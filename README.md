# 2020cce

#第一個程式碼:找零錢

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,(n%50)%5);
}
```

#第二個程式碼:因數個數


```c
#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(n%i==0)
		a++;
	}
	printf("%d\n",a);
}
```

#第三個程式碼:找倍數

```c
#include <stdio.h>
int main()
{
	int n,a=0;
	for(int i=0;i<10;i++){
		scanf("%d",&n);
		if(n%3==0)
		a++;
	}
	printf("%d\n",a);
	
}
```

#第四個程式碼:整數轉換為等級

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)printf("A\n");
	else if(n<90&&n>=80)printf("B\n");
	else if(n<80&&n>=60)printf("C\n");
	else printf("F\n");
}
```

#第五個程式碼:分式化簡

```c
#include <stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	
	if(b>a){
		for(int i=1;i<=a;i++){
			if(a%i==0&&b%i==0)
			temp=i;
		}
	}
	else if(a>b){
		for(int i=1;i<=b;i++){
			if(b%i==0&&a%i==0)
			temp=i;
			
		}
	}
	a=a/temp;
	b=b/temp;
	printf("%d %d\n",a,b);
}
```
