#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int main()
{
	int t;
	scanf("%d\n\n",&t);

	int n=0;
	for(int i=0;  ;i++){
	   char* now=gets(tree[i]);
	   if(now==NULL){
	      n=i;
	      break;
	   }
	   if(strcmp(tree[i]," ")==0){
	      n=i;
	      break;
	   }
	}

	qsort(tree,n,32,compare);

	printf("%s",tree[0]);
	int ans=1;
	for(int i=0;i<n-1;i++){
	    if(strcmp(tree[i],tree[i+1])!=0){
	       printf("%d\n",ans);
	       printf("%s",tree[i+1]);
	       ans=1;
	    }else ans++;
	}
	printf("%d\n",ans);
}