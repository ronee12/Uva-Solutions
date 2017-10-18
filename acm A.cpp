#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   long int a[1001],n,i,c,d,x=1;
	   while(scanf("%ld",&n)!=EOF)
	   {
		   if(n==0)
			   break;
		   c=0;
		   d=0;
   for(i=0;i<n;i++)
	   scanf("%ld",&a[i]);
   for(i=0;i<n;i++)
   {
     if(a[i]==0)
		 c=c+1;
	 else
		 d=d+1;
   }
   printf("Case %ld: %ld\n",x,(d-c));
   x=x+1;
	   }
return 0;
}

