#include <stdio.h>
int f(int n)
{
	int p;
	int m=0;
	
	while(n>0)
	{
		p=n%10;
		n=n/10;
		m=p+m*10;
	}
	
	return m;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	printf("%d+%d=%d\n",n,f(m),n+f(m));
}
