#include<stdio.h>
#include<math.h>
int is_prime(int i);
int main()
{
	int ll;
	scanf("%d",&ll);
long int i,count=0,x;
scanf("%ld",&x);
for (i=2; i<=x; i++) 
{
if(is_prime(i)==1)
count += is_prime(i);
}
//printf("\n");
//if(is_prime(x)==1)
//printf("%d prime\n",x);
//else
//printf("%d not prime\n",x);
printf("Total of %d primes\n",count);
return 0;
}

int is_prime(int n)
{
for (int i=2; i<=(int) sqrt(n); i++) 
if (n%i == 0) 
return 0;
return 1;
}