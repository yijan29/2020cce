#include <stdio.h>
int a[1000];
int main()
{
	int n=0;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
		n=i;
		break;
		}
	}
    for(int i=n-1;i>=0;i--){
    	printf("%d ",a[i]);
    }
    printf("\n");
	
}
