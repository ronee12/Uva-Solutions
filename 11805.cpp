#include<stdio.h>
int main()
{
	int t,l=0,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		l=l+1;
	int n,k,p,ans;
		scanf("%d%d%d",&n,&k,&p);
		if(k+p>n)
	      ans=(k+p)-n;
	    else
		ans=k+p;
		while(ans>n)
		{
		ans=ans-n;
		}
	printf("Case %d: %d\n",l,ans);
	}
return 0;
}