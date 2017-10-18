#include<stdio.h>
#include<math.h>
int main()
{
	double a,r,n,pi;
	while(scanf("%lf%lf",&r,&n)!=EOF)
	{
		pi=2*acos(0.0);
	a=r*r*n*sin(2*pi/n)/2;
	printf("%.3lf\n",a);
	}
return 0;
}