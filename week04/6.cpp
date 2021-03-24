#include <stdio.h>
char a[100];
int main()
{
	scanf("%s",&a);
	for(int i=0;i<100;i++){
		if('A'<=a[i]&&a[i]<='Z')printf("U");
		else if('a'<=a[i]&&a[i]<='z')printf("L");
		else if('0'<=a[i]&&a[i]<='9') printf("D");
		else  printf("O");break;
	}
}
