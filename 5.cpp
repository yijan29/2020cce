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
