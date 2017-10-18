#include<stdio.h>
#include<math.h>
int main()
{
	long long int jj,tt,n,i,p,k,j,t,sum,b;
	scanf("%lld",&tt);
		for(jj=0;jj<tt;jj++)
		{
		scanf("%lld",&n);
		if(n<=0)
             	printf("0\n");
		else
		{
	sum=0;
	p=n/2;
	t=n/3;
	for(i=2,j=2;i<p;i++,j++)
	{
	   sum=sum+p+((p-t)*j);
	  t=n/(i+2);
	  p=n/(i+1);
	}
	b=n-(n/2);
	k=0;
	if(i==p)
       k=(p-t)*j;
	if(n==1)
	printf("1\n");
	else
	 printf("%lld\n",n+sum+b+k);

	}
		}
return 0;
}
