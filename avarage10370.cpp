#include<stdio.h>
int main()
{   int i,n,b,j,m;
	float y,a[1000],x,z,c;
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		x=0,b=0;
	scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%f",&a[i]);
        for(i=0;i<n;i++)
			x=x+a[i];
		z=x/n;
		for(i=0;i<n;i++)
		{
		if(a[i]>z)
			b=b+1;
		}
		c=b*100;
		y=c/n;
		printf("%.3f%c\n",y,37);
	}
return 0;
}