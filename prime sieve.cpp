#include<stdio.h>
#include<math.h>
#define max 50000
int chak_prime(long int p,char prime[])
{
	
	long int i,j,sqr;
	sqr=sqrt(p);
	for(i=2;i<=sqr;i++)
	{
		if(prime[i]==0)
		{
		
			j=i;
			while(j<=max)
			{
				prime[j]=1;
				j=j+i;
			}
		}
		
	}
	if(prime[p]==0)
		return 1;
	else
		return 0;
			//printf("%d = prime\n",p);
}
int main()
{
	char prime[max]={0};
	long int i,j,count=0,n,sqr;
	scanf("%ld",&n);
	sqr=sqrt(n);
	for(i=2;i<=n;i++)
	{
		printf("%ld\n",chak_prime(i,prime));
		/*if(prime[i]==0)
		{
			
			count=count+1;
			if(count==n)
			{
				count=i;
				break;
			}
			j=i;
			while(j<=max)
			{
				prime[j]=1;
				j=j+i;
			}
		}*/
		
	}
	
//	printf("%ld\n",count);
	return 0;
}
