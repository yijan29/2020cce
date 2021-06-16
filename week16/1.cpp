#include <stdio.h>
int main()
{
	int k,ans=0,i;
	scanf("%d",&k);
	
	for(i=1;i<44;i++){
		ans += i;
		if(ans>k) break;
	}
	printf("%d",i);
	
}
