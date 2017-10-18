#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int ii;
if (n == 1)
 return 0;
if (n == 2) 
 return 1;
if (n%2 == 0)
 return 0;
for (ii=3;ii*ii<=n;ii=ii+2)
     if (n%ii == 0)
           return 0;
return 1;
}
int main()
{
	  long int i,count=0,x,a[100000],tp,mod,sd,x0,ans=0,mot,test,ts,m;
	scanf("%ld",&ts);
	for(test=0;test<ts;test++)
	{
                count=0;
				ans=0;
				mot=0;
				m=0;
                      scanf("%ld%ld",&x0,&x);
                         for (i=x0;i<=x;i++) 
						 {
                               if(is_prime(i)==1)
							   {
                                  a[m]=i;
								  if(a[m]>=10)
							 {
	                                sd=0;
                                    tp=a[m];
	                           while(a[m]!=0)
							   {
	                             mod=a[m]%10;
	                             a[m]=a[m]/10;
	                             sd=sd+mod;
							   }
							 if(is_prime(sd)==1)
	                                  mot=mot+1;
							 }
                                 m=m+1;
							   }
						 }
						printf("%ld\n",mot);
	}
return 0;
}
