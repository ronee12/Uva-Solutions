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
	int t,x;
     scanf("%d",&t);
	 for(x=1;x<=t;x++)
	 {
		 long n,i,s=1,sum=0;
	   scanf("%ld",&n);
	   for(i=0;i<(n-1)/2;i++)
	   {
	   //  s=(((s*(n-i))%10056)/(i+1))%10056;
		     s=((s*(n-i))/(i+1))%10056;
		 sum=(sum+s)%10056;
	   }

	   sum=(sum*2)%10056;
	   if(n%2==0)
	   {
	   s=((s*(n-i))/(i+1))%10056;
	   sum=(sum+s)%10056;
	   }

	   s=1;
	   for(i=1;i<=n;i++)
		   s=(s*i)%10056;

	   if(n==1)
		   printf("Case %d: 1\n",x);
	   else if(n==2)
		   printf("Case %d: 3\n",x);
	   else
	       printf("Case %d: %d\n",x,(s+sum+1)%10056);
	 }

return 0;
}