#include<stdio.h>
int main()
{
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	int n,m,a,x=0,r,k;
	scanf("%d%d%d",&n,&k,&m);
	n=n+k;
	while(n>=m)
	{
	   a=n/m;
	   r=n%m;
	   n=n/m;
	   x=x+a;
	   n=n+r;
	}
	printf("%d\n",x);
	}
return 0;
}