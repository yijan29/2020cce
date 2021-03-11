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

#第六個程式碼:讀入整數反序列印

```c
#include <stdio.h>
int a[1000];
int main()
{
	int n=0;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
		n=i;
		break;
		}
	}
    for(int i=n-1;i>=0;i--){
    	printf("%d ",a[i]);
    }
    printf("\n");
	
}
```

#第七個程式碼:A的B次方函數

```c
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```

#第八個程式碼:漸增數列相加

```c
#include <stdio.h>
int main()
{
	int ans=0,n;
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++){
		ans+=i*(i+1);
	}	
	printf("%d\n",ans);
}
```

#第九個程式碼:判別正方形

```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Enter two numbers:  ");
	if(a==b)printf("It is a square ");
	else printf("It is not a square ");
}
```

#第十個程式碼:2進位轉10進位

```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	ans=(n%10)*1;
	n=n/10;
	ans=(n%10)*2+ans;
	n=n/10;
	ans=(n%10)*4+ans;
	n=n/10;
	ans=(n%10)*8+ans;
	n=n/10;
	printf("%d\n",ans);
}
```

#第十一個程式碼:均標與前標計算

```c
#include <stdio.h>
int main()
{
	int n,a[100],sum=0,sumtop=0,x=0;
	float avg,avgtop;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		sum += a[i];
	}
	avg=(float)sum/n;
	printf("均標:%.1f\n",avg);
	for(int i=0;i<n;i++){
	if(a[i]>=avg){
		sumtop+=a[i];
		x++;
		}
	}
	avgtop=(float)sumtop/x;
	printf("前標:%.1f\n",avgtop);
}
```
