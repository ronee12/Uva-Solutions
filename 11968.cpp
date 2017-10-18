#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#include<string>
#include<iostream>
#include<vector>
#include<map>
#include <queue>
#include<stack>

using namespace std;
int main()
{
	long j,t;
	scanf("%ld",&t);
	for(j=1;j<=t;j++)
	{
		long n,a,b,c[10000]={0},i,k,m;
		double s=0,v1,v2,mx,d;
		scanf("%ld%ld%ld",&n,&a,&b);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&c[i]);
			s=s+c[i];
		}
		double ss=n;
		s=s/ss;
		mx=10000000000000.0;
		for(i=0;i<a;i++)
		{
			d=(s-c[i]);
			if(d<0) d*=-1;
			if(d<mx)
			{
				mx=d;
				v1=c[i];
			}
			else if(mx==d)
			{
				if(c[i]<v1)
					v1=c[i];
			}
		}
		mx=10000000000000.0;
	//printf("%lld\n",mx);
		for(i=a;i<a+b;i++)
		{
			d=s-c[i];
			if(d<0) d*=-1;
			//printf("s= %lld  d= %lld \n",s,d);
			if(d<mx)
			{
				mx=d;
				v2=c[i];
			}
			else if(mx==d)
			{
				if(c[i]<v2)
					v2=c[i];
			}
		}
		printf("Case #%ld: %.lf %.lf\n",j,v1,v2);
	}
  return 0;
}
