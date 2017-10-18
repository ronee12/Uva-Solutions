#include<stdio.h>
#include<math.h>
int main()
{
	double r,s,p,a,b,c;
	while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
	{
		if(a!=0&&b!=0&&c!=0)
		{
	s=(a+b+c)/2;
	if(a<=s&&b<=s&&c<=s)
	{
	p=s*(s-a)*(s-b)*(s-c);
	r=sqrt(p)/s;
	printf("The radius of the round table is: %.3lf\n",r);
	}
		}
		else
    printf("The radius of the round table is: 0.000\n");
	}
return 0;
}