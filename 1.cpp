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