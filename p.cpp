#include<stdio.h>
int main()
{
float s=0,p;
int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=1.0/i;
		s=s+p;
	}
	printf("%f",s);
return 0;
}