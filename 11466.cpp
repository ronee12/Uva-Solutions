#include <stdio.h>
#include <math.h>
#include<stdlib.h>
long NOD(long n)
{
     long r=1, i=0,p,a,max=0;
	 p=n;
	 if(n%2==0)
	 {
		 max=2;
		 i++;
		 while(n%2==0)
			 n=n/2;
	 }
	 
        a=3;
	 p=n;
     while(sqrt(p)>=a)
     {
          while(n%a!=0)
		  {
        a=a+2;
		  if(sqrt(p)<a)
			  break;
		    
		  }
		  if(n%a==0)
		  {
		  if(a>max)
			  max=a;
		  i++;
          while(n%a==0)
          {
               n/=a;
              
          }
		  }
     }
	 if(n>max)
	 {
		 i++;
		 max=n;
	 }
		 if(i==1)
			 max=1;
    return max;
}
int main()
{
 long int n,x;
 while( scanf("%ld",&n)!=EOF)
  {
	   if(n==0)
		   break;
	   if(n<0)
		   n=n*(-1);
      x= NOD(n);
if(x==1)
printf("-1\n");
		else
		  printf("%ld\n",x);
  }
  return 0;
}