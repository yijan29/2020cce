#include <stdio.h>
int main()
{
	int n[3],a=0,t;
	for(int i=0;i<3;i++){
		scanf("%d",&n[i]);
	}
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			if(n[i]<n[k]){
				t=n[i];
				n[i]=n[k];
				n[k]=t;
			}
		}
	}
	for(int i=2;i>=0;i--){
		a=a*10+n[i];
	}
	printf("%d",a+1);
}