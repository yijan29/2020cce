#include <stdio.h>
int main()
{
	int n,a[100],sum=0,sumtop=0,x=0;
	float avg,avgtop;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		sum += a[i];
	}
	avg=(float)sum/n;
	printf("均標:%.1f\n",avg);
	for(int i=0;i<n;i++){
	if(a[i]>=avg){
		sumtop+=a[i];
		x++;
		}
	}
	avgtop=(float)sumtop/x;
	printf("前標:%.1f\n",avgtop);
}
