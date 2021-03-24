#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(i<=n&&i%2==0)printf("%d ",i);
	}
}
