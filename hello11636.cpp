#include<stdio.h>
int main()
{
	int n,x,c,l=1;
	while(scanf("%d",&n)!=EOF)
	{
		c=0;
		x=1;
		if(n<0)
			break;
	while(n>x)
	{
	x=x*2;
	c=c+1;
	}
	printf("Case %d: %d\n",l,c);
	l=l+1;
	}
return 0;
}