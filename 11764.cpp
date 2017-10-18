#include<stdio.h>
int main()
{
	int t,j,b=0;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		b=b+1;
	int i,a,x[50],l=0,h=0,k=0;
	scanf("%d",&a);
		for(i=0;i<a;i++)
			scanf("%d",&x[i]);
		for(i=0;i<a-1;i++)
		{
			if(x[i]==x[i+1])
				continue;
		if(x[i]>x[i+1])
			l=l+1;
		else
			h=h+1;
		}
		printf("Case %d: %d %d\n",b,h,l);
	}
return 0;
}