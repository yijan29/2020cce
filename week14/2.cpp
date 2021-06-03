#include <stdio.h>
int main()
{
	char a[10];
	for(int i=0;i<10;i++){
		scanf("%d ",&a[i]);
	}
	for(int i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
}