#include <stdio.h>
void fun(int n)
{
	printf("%d",n%10);
	if(n>=10) fun(n/10);
}
int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
	printf("\n");
}
