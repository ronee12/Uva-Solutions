#include<stdio.h>
int main()
{
	double c,f,d;
	long int t,i;
	scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
	  scanf("%lf %lf",&c,&d);
	  f=(c*9)/5+32;
	  c=(((f+d)-32)*5)/9;
	  printf("Case %ld: %.2lf\n",i+1,c);
	}
return 0;
}