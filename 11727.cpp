#include<stdio.h>
int main()
{
	int t,a,b,c,i,l=0;
		scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		l=l+1;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b && a<c) ||(a<b && a>c))
		printf("Case %d: %d\n",l,a);
	else if((b>a && b<c) || (b<a && b>c))
		printf("Case %d: %d\n",l,b);
	else
		printf("Case %d: %d\n",l,c);
	}
return 0;
}