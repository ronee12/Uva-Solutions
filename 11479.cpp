#include<stdio.h>
int main()
{
   long long int a,b,c,i=0,n,j;
   scanf("%lld",&n);
   for(j=0;j<n;j++)
   {
	   i=i+1;
	   scanf("%lld%lld%lld",&a,&b,&c);
   if(a<=0||b<=0||c<=0||(a+b)<=c||(b+c)<=a||(a+c)<=b)
	   printf("Case %lld: Invalid\n",i);
   else
   {
   if(a==b && b==c)
	   printf("Case %lld: Equilateral\n",i);
   else if(a==b || b==c || c==a)
	   printf("Case %d: Isosceles\n",i);
   else
	   printf("Case %lld: Scalene\n",i);
   }
   }
return 0;
}