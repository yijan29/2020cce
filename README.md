# 2020cce

# 第一個程式碼:找零錢

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,(n%50)%5);
}
```

# 第二個程式碼:因數個數


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

# 第三個程式碼:找倍數

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

# 第四個程式碼:整數轉換為等級

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

# 第五個程式碼:分式化簡

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

# 第六個程式碼:讀入整數反序列印

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

# 第七個程式碼:A的B次方函數

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

# 第八個程式碼:漸增數列相加

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

# 第九個程式碼:判別正方形

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

# 第十個程式碼:2進位轉10進位

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

# 第十一個程式碼:均標與前標計算

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

# week03-1

```c
#include <stdio.h>
int main()
{
	int a[5]={0,10,20,30,40};
	int *p=&a[2];
	*p=222;
	p=p+2;
	*p=666;
}
```

# week03-2

```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
	for(int i=0;i<5;i++)printf("%d",a[i]);
	printf("\n");
}
int main()
{
		printAll();
	int *p=&a[2];
	*p=222;
		printAll();
	p=p+2;
	*p=666;
		printAll();
	p--;
	*p=555;
		printAll();
}
```

# week03-3

```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printall()
{
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p = & a[2];
    *p = 222;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
    p = p+2;
    *p = 666;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
    p--;
    *p = 555;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
}
```

# week03-4

```c
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p= (int*) malloc(sizeof(int)*10);
    return 0;
}
```

# 除惡務盡

```c
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	int i=0;
	while(a[i] != '\0')
	{
		if(a[i] !='2')printf("%c",a[i]);
		i++;
	}
	printf("\n");
}
```

# 擲骰統計

```c
#include <stdio.h>
int main()
{
	char count[7]={0},a[100];
	scanf("%s",&a);
	int i=0;
	
	while(a[i]!='\0'){
		count[a[i]-'0']++;
		i++;
	}
	for(int i=1;i<=6;i++){
		printf("%d:%d\n",i,count[i]);
	}
}
```

# 函數找整數的最大數字

```c
#include<iostream>
using namespace std;

int max_digit(int n)
{
	int max;
	max=n%10;
	while(n>0){
		if( (n%10)>max)  max=n%10;
		n/=10;
	}
	return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
```

# 星星等腰三角

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<(n-i);j++)
			printf(" ");
		for(int j=0;j<(i*2-1);j++)
			printf("*");
		printf("\n");
	}
}
```

# 分開整數的每個數字

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d   %d   %d   %d   %d",n/10000,n%10000/1000,n%1000/100,n%100/10,n%10);
}
```

# 字元判別

```c
#include <stdio.h>
char a[100];
int main()
{
	scanf("%s",&a);
	for(int i=0;i<100;i++){
		if('A'<=a[i]&&a[i]<='Z')printf("U");
		else if('a'<=a[i]&&a[i]<='z')printf("L");
		else if('0'<=a[i]&&a[i]<='9') printf("D");
		else  printf("O");break;
	}
}
```

# 數字之首

```c
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	
	printf("%c",a[0]);
	
}
```

# 輸出從0到N的偶數

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(i<=n&&i%2==0)printf("%d ",i);
	}
}
```

# 反序數字

```c
#include <stdio.h>
int f(int n)
{
	int p;
	int m=0;
	
	while(n>0)
	{
		p=n%10;
		n=n/10;
		m=p+m*10;
	}
	
	return m;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	printf("%d+%d=%d\n",n,f(m),n+f(m));
}
```

# 絕對值函數

```c
#include <stdio.h>
int f(int n)
{
	if(n<0){
		return -n;
		}
		else return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```

# N數之和

```c
#include <stdio.h>
int main()
{
	int n,ans=0,a[100];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		ans=ans+a[i];
	}

	printf("%d\n",ans);
	
}
```

# 三數極大

```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b&&a>c)printf("%d\n",a);
	else if (b>a&&b>c)printf("%d\n",b);
	else printf("%d\n",c);
}
```

# 計算商數

```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	
	printf("%d\n",a/b);
}
```

# 迴文判斷

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n/1000==n%10&&n%1000/100==n%1000%100/10)printf("YES\n");
	else printf("NO\n");
}
```

# 函數反序排列數字

```c
#include <stdio.h>
void fun(int n)
{
	printf("%d",n%10);
	if(n>=10) fun(n/10);
}
int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
	printf("\n");
}
```

# 陣列找出現次數

```c
#include <stdio.h>
char a[100];
int main()
{
	int count=0,n,i,x;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
	}
	n=i;
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(a[i]==x)count++;
	}
	printf("%d\n",count);
}
```

# 判斷大小

```c
#include <stdio.h>
int f(int a,int b){
	if(a<b) return -1;
	else if(a==b )return 0;
	else if(a>b) return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```

# 計算一列整數的總和

```c
#include <stdio.h>
int main()
{
	int a,sum=0;
	while(a!=999)
	{
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a);
		sum += a;
	}
	printf("The total is: %d",sum-999);
}
```

# 計算餘數

```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",a%b);
}
```

# 整數轉換等級

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	if(n>=90)printf("A");
	else if (n<90&&n>=80)printf("B");
	else if (n<80&&n>=70)printf("C");
	else if (n<70&&n>=60)printf("D");
	else printf("F");
}
```

# 計程車資計算

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=1500)printf("100");
	else if(n>1500&&n%250!=0) printf("%d",100+(n-1500)/250*5+5);
	else printf("%d",100+(n-1500)/250*5);
}
```

# 找零錢

```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	printf("%d=50*%d+10*%d+5*%d+1*%d",n,n/50,n%50/10,n%50%10/5,n%50%10%5);
}
```

# CPE 顆星廣場:UVA10226 Hardwood species

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int main()
{
	int t;
	scanf("%d\n\n",&t);

	int n=0;
	for(int i=0;  ;i++){
	   char* now=gets(tree[i]);
	   if(now==NULL){
	      n=i;
	      break;
	   }
	   if(strcmp(tree[i]," ")==0){
	      n=i;
	      break;
	   }
	}

	qsort(tree,n,32,compare);

	printf("%s",tree[0]);
	int ans=1;
	for(int i=0;i<n-1;i++){
	    if(strcmp(tree[i],tree[i+1])!=0){
	       printf("%d\n",ans);
	       printf("%s",tree[i+1]);
	       ans=1;
	    }else ans++;
	}
	printf("%d\n",ans);
}
```

# qsort 排序

```c
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare (const void *p1,const void *p2)
{
    int d1 = * (int*) p1;
    int d2 = * (int*) p2;
    if(d1>d2)  return 1;
    if(d1==d2) return 0;
    if(d1<d2)  return -1;
}

int main()
{
    qsort (a,10,sizeof(int),compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);

    }

}
```

# struct 結構1

```c
#include <stdio.h>
struct data{
    int ans;
    char c;
};

struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
```


# struct 結構2

#include <stdio.h>
typedef struct data{
    int ans;
    char c;
}DATA;

DATA box;

int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}

# 兩數間可被7整除的數

```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		for(int i=b;i<=a;i++){
			if(i%7==0) printf("%d ",i);
		}
	}
	
	if(a<b){
		for(int i=a;i<=b;i++){
			if(i%7==0) printf("%d ",i);
		}
	}
	
}
```

# 奇數之和

```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1) ans+=i;
	}
	printf("%d",ans);
}
```

# 利用自訂函式最大值max與最小值min求出兩者之差

```c
int max(int a,int b,int c,int d)
{
	int x=a;
	if(x<b) x=b;
	if(x<c) x=c;
	if(x<d) x=d;
	return x;
}

int min(int a,int b,int c,int d)
{
	int x=a;
	if(x>b) x=b;
	if(x>c) x=c;
	if(x>d) x=d;
	return x;
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
```

# 字串中的數字個數

```c
#include <stdio.h>
int main()
{
	char a[80];
	scanf("%s",&a);
	int i=0,ans=0;
	while(a[i]!='\0')
	{
		if(a[i]>='0' && a[i]<='9') ans++;
		i++;
	}
	printf("%d",ans);
}
```
