/*SUM OF DIVISOR*/
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#define max 1000001
char prime[max]={0};
long NOD(long n, long a[])
{
     long r=1, i=0, j;
     while(n>1)
     {
          if(prime[n]!=1)
          {
               r*=2;
               break;
          }
          while(n%a[i]!=0)
          i++;
          j=0;
          while(n%a[i]==0)
          {
               n/=a[i];
               j++;
          }
          r*=(j+1);
     }
     return r;
}
int main()
{
  	long int j,i,u=0,m,k=0,a[180],n;
	m=sqrt(max)+10;
	for(i=2;i<=m;i++)
	{
		if(prime[i]!=1)
		{
			a[k++]=i;
			j=i;
			while((j+i)<=max-2)
			{				
				j=j+i;
				prime[j]=1;
			}
		}
	
	}
  long int divisor,t,te,mx=0,ans[max];
  j=1;
  for(i=1;i<=max;i++)
  {
	  divisor=NOD(i,a);
	if(divisor>=mx)
	{
		j=i;
	  mx=divisor;
	  ans[i]=i;
	}
	else
	  ans[i]=j;
	
  }
  scanf("%ld",&t);
  for(te=0;te<t;te++)
  {
       scanf("%ld", &n);
		  printf("%ld\n",ans[n]);
  }
  return 0;
}