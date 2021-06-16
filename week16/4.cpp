#include <stdio.h>
int main()
{
	int a,i,ans=0;
	scanf("%d",&a);
	
	while(a!=0)
	{
		if(a>0) ans += a;
		scanf("%d",&a);
	}
	printf("%d",ans);
	
}