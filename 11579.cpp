#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

#define REP(i,n) for(__typeof(n) i=0; i<(n); i++)
#define REP2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define FOR(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define INF (1<<30)
#define PI 3.14159265358979323846264338327950
#define PB(x) push_back(x)
#define ALL(x) x.begin(),x.end()
#define SZ size()
#define eps 1e-9
#define VI vector<int>
#define VS vector<string>
#define LL long long
#define MII map<int,int>
#define MSI map<string,int>
#define MIS map<int,string>
#define CLEAR(x) memset(x,0,sizeof(x));
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
using namespace std;

int main()
{
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		double a,b,c,d,dd,s,ans,mx=0.0;
		int j,n;
		priority_queue<double>pq;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&dd);
			dd=dd*(-1);
			pq.push(dd);

		}
		int w=0;
		a=pq.top();
		a=a*(-1);
			pq.pop();
		b=pq.top();
		b=b*(-1);
			pq.pop();
		while(!pq.empty())
		{
			
			c=pq.top();
			c=c*(-1);
			pq.pop();
			d=b+c;

			if(fabs(d-a)>0.000001)
			{
				//s=(a+b+c)/(double)2+eps;
				ans=sqrt((a*a+b*b+c*c)*(a*a+b*b+c*c)-2*(a*a*a*a+b*b*b*b+c*c*c*c))+eps;
				ans=ans/(double)4+eps;
				//ans=sqrt(s*(s-a)*(s-b)*(s-c))+eps;
				if(ans>mx)
				{
					mx=ans;
					w=1;

	
				}
			}
			a=b;
			b=c;			
		}

		if(w==0)
			printf("0.00\n");
		else
			printf("%.2lf\n",mx);
	}
}