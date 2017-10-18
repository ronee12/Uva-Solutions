#include<stdio.h>
int main()
{
	int i,t;
	char ans[100];
	scanf("%d",&t);
	for(i=1;i<t+1;i++)
		ans[i]=(ans[i]*i);
	printf("%d\n",ans);
return(0);
}