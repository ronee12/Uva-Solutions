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
int main()
{
	int t,i;
      scanf("%d",&t);
	  for(i=0;i<t;i++)
	  {
		  double r,m1,m2,m3,n1,n2,n3,a,b,c,s,rr,ans;
	    scanf("%lf %lf %lf %lf %lf %lf %lf",&r,&m1,&n1,&m2,&n2,&m3,&n3);
		a=m1+n1;
		b=m2+n2;
		c=m3+n3;
		s=(a+b+c)/2.0;
		a=sqrt(s*(s-a)*(s-b)*(-1)*(s-c));
		rr=a/s;
		ans=(a*r*r)/(rr*rr);
		printf("%lf\n",ans);
	  }
return 0;
}