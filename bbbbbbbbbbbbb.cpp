#include<stdio.h>
int main()
{
	long x,m,n,r,c;
	while(scanf("%ld%ld",&x,&m)!=EOF)
	{
		c=0;
		if(x==0&&m==0)
			break;
		while(x<=m)
		{
			n=x;
		while(n!=0)
		{
		r=n%2;
		n=n/2;
		if(r==1)
		c=c+1;
		}
		x=x+1;
		}
		printf("%ld\n",c);
	}
return 0;
}