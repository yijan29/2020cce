#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n/1000==n%10&&n%1000/100==n%1000%100/10)printf("YES\n");
	else printf("NO\n");
}