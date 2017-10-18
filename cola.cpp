#include<stdio.h>
int main()
{
	int a,n,r,x,m;
while(scanf("%d",&n)!=EOF)
{
	a=0;
	if(n==2)
		printf("3\n");
	else if(n==1)
		printf("1\n");
	else
	{
		while(n>=3)
		{
		r=n%3;
		x=n-r;
		m=x/3;
		n=m+r;
		if(n==2)
			x=x+3;
		else if(n==1)
			x=x+1;
		a=a+x;
		}
		printf("%d\n",a);
	}
}
return 0;
}