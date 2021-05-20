# 1.數字個數

```c
#include <stdio.h>
int main()
{
	int a,ans=0;
	while (scanf("%d",&a)!=EOF)//end of file
	{
		ans++;
	}
	printf("%d",ans-1);
}
```

# 2.判斷平方數 

```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(i*i==n)ans=i;
	}
	printf("%d",ans);
}
```

# 3.計算質數個數

```c
#include <stdio.h>
int main()
{
	int a,b,count=0,j;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		for( j=2;j<i;j++){
			if(i%j==0)break;
		}
		if(j==i)count++;
	}
	printf("%d",count);
}
```

# 4.三數組合

```c
#include <stdio.h>
int main()
{
	int n[3],a=0,t;
	for(int i=0;i<3;i++){
		scanf("%d",&n[i]);
	}
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			if(n[i]<n[k]){
				t=n[i];
				n[i]=n[k];
				n[k]=t;
			}
		}
	}
	for(int i=2;i>=0;i--){
		a=a*10+n[i];
	}
	printf("%d",a+1);
}
```

# 5.UVA11321 排排排序

```c
#include <stdio.h>
int a[10000];
void swap(int i,int j)
{
	int temp = a[i];
	a[i]=a[j];
 	a[j]=temp;
}
int main()
{
  	int N,M;
  	while (scanf("%d %d",&N,&M)==2){
			for(int i=0;i<N;i++){
            	scanf("%d",&a[i]);
        	}
       
        	for(int i=0;i<N;i++){
            	for(int j=i+1 ; j<N ; j++){
                	if(a[i]%M > a[j]%M) swap(i,j);
                	if(a[i]%M== a[j]%M){
                    	if(a[i]%2==0 && a[j]%2!=0) swap(i,j);
                    	if(a[i]%2!=0 && a[j]%2!=0 && a[i]<a[j]) swap(i,j);
                    	if(a[i]%2==0 && a[j]%2==0 && a[i]>a[j]) swap(i,j);
                	}
            	}
        	}
        	printf("%d %d\n",N,M);
        	for(int i=0;i<N;i++){
            	printf("%d\n",a[i]); 
        	}
  	}	
}
 ``` 
