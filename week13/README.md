# 1.進階題：求11 +22+33+…+nn

```c
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i*10+i;
	}
	printf("%d",sum);
}
```

# 2.進階題：求兩數之最大公因數

```c
#include<iostream>
using namespace std;
int GCD(int a, int b){
  int n,ans=1;
  if(a<b)n=a;
  else n=b;
  for(int i=2;i<=n;i++){
  	if(a%i==0 && b%i==0) ans=i;
  }
  return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```

# 3.進階題：區間測速-超速之王 

```c
#include <stdio.h>
int main()
{
	int a,min,index=1;
	scanf("%d",&min);
	for(int i=2;i<=10;i++){
		scanf("%d",&a);
		if(min>a) {min=a; index=i;}
	}
	int s=60*60*1.2/min;
	printf("%d %d",index,s);
}
```

# 4.進階題：10數排序，從大到小排好

```c
#include <stdio.h>
int main()
{
	int a[10],temp,i,j;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
```

# 5.基礎題：正整數平方總和 

```c
#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		sum +=(i*i);
	}
	printf("%d",sum);
}
```

# 6.進階題：兩數之間的3倍數總和 

```c
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	
	for(int i=a;i<=b;i++){
		if(i%3==0)ans+=i;
	}
	printf("%d",ans);
}
```

# 7.基礎題：判斷座標的象限

```c
#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	
	if(x>0&&y>0)printf("1\n");
	if(x<0&&y>0)printf("2\n");
	if(x<0&&y<0)printf("3\n");
	if(x>0&&y<0)printf("4\n");
}
```

# 8.基礎題：輸入n (n>0)， 求n之所有因數和

```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(n%i==0) ans += i;
	}
	printf("%d",ans);
}
```
