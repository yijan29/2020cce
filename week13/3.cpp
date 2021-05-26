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
