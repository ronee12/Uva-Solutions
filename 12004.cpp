#include<stdio.h>
int main()
{
  long int i,t,j,n;
  scanf("%ld",&t);
  for(i=1;i<=t;i++)
  {
	  double a=0.0;
    scanf("%ld",&n);
	for(j=1;j<n;j++)
	{
	  a=a+double(j/2.0);
	}
	long k=a;
	if(k==a)
		printf("Case %ld: %.lf\n",i,a);
	else
		printf("Case %ld: %.lf/2\n",i,(2*a));
  }
  return 0;

}
