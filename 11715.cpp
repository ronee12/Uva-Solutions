#include<stdio.h>
#include<math.h>
int main()
{
	float u,v,t,s,a;
	int x,l=0;
while(scanf("%d",&x)!=EOF)
{
	l=l+1;
	if(x==0)
		break;
		if(x==1)
		{
			scanf("%f%f%f",&u,&v,&t);
		a=(v-u)/t;
		s=u*t+(a*t*t)/2;
        printf("Case %d: %.3f %.3f\n",l,s,a);
		}
		else if(x==2)
		{
			scanf("%f%f%f",&u,&v,&a);
		t=(v-u)/a;
	    s=u*t+(a*t*t)/2;
		 printf("Case %d: %.3f %.3f\n",l,s,t);
		}
		else if(x==3)
		{
			scanf("%f%f%f",&u,&a,&s);
		v=sqrt(u*u+2*a*s);
		t=(v-u)/a;
		 printf("Case %d: %.3f %.3f\n",l,v,t);
		}
		else
		{
			scanf("%f%f%f",&v,&a,&s);
		u=sqrt(v*v-2*a*s);
		t=(v-u)/a;
		 printf("Case %d: %.3f %.3f\n",l,u,t);
		}
}
return 0;
}