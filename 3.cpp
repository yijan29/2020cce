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
