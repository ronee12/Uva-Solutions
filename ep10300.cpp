#include<stdio.h>
int main()
{
	int a,j;
	while(scanf("%d",&a)!=EOF)
	for(j=0;j<a;j++)
	{
	int f,i,x[20],y[20],z[20],p=0;
		scanf("%d",&f);
	for(i=0;i<f;i++)
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	for(i=0;i<f;i++)
		p=p+x[i]*z[i];
	printf("%d\n",p);
	}
return 0;
}