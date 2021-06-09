#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int s=n%60;
	int m=n/60%60;
	int h=n/(60*60);
	printf("%02d:%02d:%02d",h,m,s);
}