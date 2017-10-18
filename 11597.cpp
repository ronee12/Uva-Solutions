#include<stdio.h>
int main()
{
	int a,n,t=1;
	while(scanf("%d",&a)!=EOF)
    {
		if(a==0)
			break;
	n=a/2;
	printf("Case %d: %d\n",t,n);
	t=t+1;
	}
return 0;
}