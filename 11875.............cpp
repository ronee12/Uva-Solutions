#include<stdio.h>
int main()
{
	int i,j,k,x,a[1000],t,n,m;
	scanf("%d",&t);
	for(n=1; n<=t; n++)
	{
		scanf("%d",&m);
	for(i=0; i<m;i++)
		scanf("%d",&a[i]);
	for(j=0; j<m-1; j++)
		for(k=0; k<m-1; k++)
			if(a[k]>a[k+1])
			{
				x=a[k];
				a[k]=a[k+1];
				a[k+1]=x;
			}
			printf("Case %d: %d\n",n,a[m/2]);
	}
return 0;
}