#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int is_prime(long n)
{
  if(n==2)
    return 1;
   if(n==3)
    return 1;
    if(n%2==0)
    return 0;
for (long int i=3; i<=(long int) sqrt(n);i=i+2)
if (n%i == 0)
return 0;
return 1;
}
int main()
{
 long n,i,j,m;
	while(scanf("%ld",&n)!=EOF)
	{

		if(n==0)
			break;
			if(n<0)
			n=n*(-1);
			if(is_prime(n)==1)
			printf("-1\n");
			else
			{
	long c=0,p=0,k,max=0;
	j=3;
     if(n%2==0)
     {
         c=1;
         max=2;
		while(n%2==0)
		{
			n=n/2;
		}

     }
		 k=0;
		while(j<=sqrt(n)&&k==0)
		{
			if(n%j==0)
			{
			    while(n%j==0)
			         n=n/j;
			          if(is_prime(n)==1)
			          k=1;
			p++;
			}
			else
				j=j+2;
		}
		if(p>=1)
		max=j;
		if(n>max)
		{
           		max=n;
           		p++;
		}
			if(c==1&&p==0)
				printf("-1\n");
			else if(c==0&&p<=1)
			     printf("-1\n");
            else
				printf("%ld\n",max);
			}
	}
	return 0;
}


