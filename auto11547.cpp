#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	int n,a,b,x,m;
		scanf("%d",&n);
	a=(n*567/9)+7492;
	b=(a*235)/47-498;
	x=b/10;
	m=x%10;
	if(m<0)
		m=-1*m;
	printf("%d\n",m);
	}
return 0;
}