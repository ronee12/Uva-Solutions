#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int is_prime(int n)
{
	int i;
	if(n==2)
		return 1;
for (i=2; i<=(int) sqrt(n); i++)
if (n%i == 0)
return 0;
return 1;
}
int main()
{
long int a,k,d;
     while(scanf("%ld",&a)!=EOF)
	 {
		 d=0;
		 if(a==0)
			 break;
		 k=a;
long int i,m[100000],n=1;
	while(is_prime(a)!=1)
	{
	  for(i=2;i<=sqrt(a);i++)
		  if(a%i==0)
		  {
		   a=a/i;
		   m[n]=i;
		   n=n+1;
		   break;
		  }
	}
	double s;
	m[n]=a;
	s=1;
    m[0]=0;
       for(i=1;i<=n;i++)
		   if(m[i]>m[i-1])
		   {
		     s=s*(m[i]-1)/m[i];
		   }
		   if(k==1)
			   printf("1\n");
		   else
	printf("%.lf\n",s*k);
	 }

return 0;
}
