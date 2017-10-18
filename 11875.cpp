#include<stdio.h>
int main()
{
	int t,i,j,m,x[100],temp,a;
	scanf("%d",&t);
	for(i=1;i<t+1;i++)
	{
		scanf("%d",&a);
		for(j=0;j<a;j++)
			scanf("%d",&x[j]);
		for(j=0;j<a-1;j++)
			for(m=0;m<a-1;m++)
				if(x[m]>x[m+1])
				{
				temp=x[m];
				x[m]=x[m+1];
				x[m+1]=temp;
				}
	   printf("Case %d: %d\n",i,x[a/2]);
	}
return 0;
}