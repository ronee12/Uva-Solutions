#include<stdio.h>
int fact(int t)
{
	int i;
	long int ans=1;
	for(i=1;i<t+1;i++)
		ans=ans*i;
return(ans);
}
int main()
{
	int n,r,a,k2,k1;
	double p;
  scanf("%d%d",&n,&r);
    a=(n-r);
k1=fact(n);
k2=fact(a);
p=k1/k2;
printf("%lf",p);
	return 0;
}