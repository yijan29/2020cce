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