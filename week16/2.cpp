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