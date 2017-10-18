#include<stdio.h>
int main()
{
	long i,n;
	double x,x1,y,y1;
	while(scanf("%ld",&n)!=EOF)
	{
	   if(n==0)
		   break;
	   scanf("%lf %lf",&x1,&y1);
	   for(i=0;i<n;i++)
	   {
		   scanf("%lf%lf",&x,&y);
		   if(x==x1 || y==y1)
			   printf("divisa\n");
		   else if(x>x1&&y>y1)
			   printf("NE\n");
		   else if(x<x1&&y>y1)
			   printf("NO\n");
		   else if(x<x1&&y<y1)
			   printf("SO\n");
		   else if(x>x1&&y<y1)
			   printf("SE\n");
	   }
	}
	return 0;
}