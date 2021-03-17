#include <stdio.h>
int main()
{
	int n,a=0;
	for(int i=0;i<10;i++){
		scanf("%d",&n);
		if(n%3==0)
		a++;
	}
	printf("%d\n",a);
	
}
