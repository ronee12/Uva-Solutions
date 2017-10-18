#include<stdio.h>
int main()
{
	int i,t;
	long int ans=1;
	scanf("%d",&t);
	for(i=1;i<t+1;i++)
		ans=ans*i;
	printf("%ld\n",ans);
return(0);
}