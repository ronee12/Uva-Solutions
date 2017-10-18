#include<stdio.h>
#include<math.h>
int main()
{
	double u,v,p,w,x,y;
	while(scanf("%lf%lf%lf",&u,&v,&w)!=EOF)
	{
		if(u==0||v==0||w==0)
			printf("-1.000\n");
		else
		{
		   x=(u*u*v*v+v*v*w*w+w*w*u*u);
		   y=(pow(u,4)+pow(v,4)+pow(w,4));
		   w=2*x-y;
	   p=sqrt(w)/3;
	   if(p>0)
		   printf("%.3lf\n",p);
	   else
       printf("-1.000\n");
		}
	}
return 0;
} 