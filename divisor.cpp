/*SUM OF DIVISOR*/
#include <stdio.h>
#include <math.h>

#define LL long //long

LL sum_divisors(LL n)
{
  long int i, count;
count = 0;
  for(i = 2; i*i <= n; i++)
  {
    if(n % i == 0)
	{
		count++;
    while(n % i == 0)
	{
      n /= i;
	  if(n!=i)
		  if(n!=1)
		  count++;
    }
	}
  }
  return count;
}

int main()
{
  LL n,i;
  long int divisor[1000001],num,max,t,te;
  for(i=1;i<=1000000;i++)
  {
    divisor[i]=sum_divisors(i);
  }
  scanf("%ld",&t);
  for(te=0;te<t;te++)
  {
 scanf("%ld", &n);
  
	  max=0;
	  for(i=1;i<=n;i++)
		  if(divisor[i]>=max)
		  {
			  num=i;
			  max=divisor[i];
		  }
		  printf("%ld\n",num);
    //printf("The num of all divisors of %lld is %lld\n", n, sum_divisors(n));
  }
  return 0;
}