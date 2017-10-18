#include<stdio.h>
int main()
{
	int i,t;
	char ans[100];
	ans[1]=1;
	scanf("%d",&t);
	for(i=1;i<t+1;i++)
		ans[i]=ans[i]*i;
	printf("%c\n",ans[i]);
return(0);
}