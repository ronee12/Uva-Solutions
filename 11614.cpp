#include<stdio.h>
#include<math.h>
int main()
{
	 long i,x,n,t,j;
	scanf("%ld",&t);
	for(j=0;j<t;j++)
	{
			scanf("%ld",&n);
	   x=(sqrt((8*n)+1)-1)/2;
	  printf("%d\n",x);
	}
return 0;
}