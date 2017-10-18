#include<stdio.h>
#include<math.h>
int main()
{
	float u,v,w;
	double a,p;
	while(scanf("%f%f%f",&u,&v,&w)!=EOF)
	{
		if(u>0&&v>0&&w>0)
		{
    a=2*(u*u*v*v+v*v*w*w+w*w*u*u)-(u*u*u*u+v*v*v*v+w*w*w*w);
	p=sqrt(a)/3;
	if(p>0)
    	printf("%.3f\n",p);
	else
        printf("-1\n");
		}
		else
			printf("-1\n");
	}
return 0;
}  