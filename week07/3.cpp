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
