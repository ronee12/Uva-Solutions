#include<stdio.h>
#include<math.h>
int main()
{
	float u,v,w;
	double a,p;
	{
		scanf("%f%f%f",&u,&v,&w);
    a=2*(u*u*v*v+v*v*w*w+w*w*u*u)-(u*u*u*u+v*v*v*v+w*w*w*w);
	p=sqrt(a)/3;
	printf("%.3f\n",p);
	}
return 0;
}