#include<stdio.h>
#include<math.h>
int main()
{
   long i=1,ing,j,x1,b,a,c;
   while(scanf("%ld",&c)!=EOF)
   {
	   if(c==0)
		   break;
	   a=1;
	   j=0;
     while(a<c)
	 {
	   x1=2*c+a-2;
	   b=2*a-1;
	  ing=x1/b;
	  if(x1%b==0)
		{
		   // printf("%ld %ld %ld\n",b,a,ing);
		  j++;
		}

	   if(a>ing)
		   break;
         a++;
	 }
	 printf("%ld %ld\n",c,2*j);
   }
return 0;
}
