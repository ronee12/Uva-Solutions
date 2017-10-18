#include<math.h>
#include<stdio.h>
long div(long n)
{
	long p=sqrt(n),i,c=0;
	for(i=1;i<=p;i++)
		if(n%i==0)
			c=c+2;
		if(p*p==n)
			c=c-1;
		return c;
}
int main()
{
	long i,j,d,sris[100000]={0},c;
	sris[0]=1;
	c=1;
	for(i=1;sris[i-1]<=1000000;i++)
	{
		sris[i]=c+div(c);
		c=sris[i];
	}
	d=i;
	long t,l,b,m,u,lb=0,ub;
	scanf("%ld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%ld%ld",&l,&u);
		b=0;
		j=d-1;
		m=(b+j)/2;
		if(sris[d-1]<l)
			m=d-1;
		else
		{
			while(b<=j)
			{
				if(sris[m]>l)
				{
					j=m-1;
					lb=m;
				}
				else if(sris[m]==l)
				{
					lb=m;
					break;
				}
				else
				{
					b=m+1;
					lb=m;
				}
				m=(b+j)/2;
			}
		}
		if(sris[lb]<l)
			lb=lb+1;
		b=lb-1;j=d-1;
		m=(b+j)/2;
		while(b<=j)
		{
			if(sris[m]>u)
			{
				j=m-1;
				ub=j;
			}
			else if(sris[m]==u)
			{
				ub=m;
				break;
			}
			else
			{
				ub=m;
				b=m+1;
			}
			m=(b+j)/2;
		}
		if(sris[ub]>u)
			ub=ub-1;
		printf("Case %ld: %ld\n",i,ub-lb+1);
	}
	return 0;
}
