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
	long t,f;
	scanf("%ld",&t);
	for(f=0;f<t;f++)
	{
	long n,i,a,c,k=0,s[100005]={0},max=0,j,r;
   scanf("%ld",&n);
   for(i=0;i<n;i++)
   {
	   scanf("%ld",&a);
       c=k-a;
	   if(c<0)
		   c=c*-1;
	   s[i]=c;
	   if(c>max)
		   max=c;;
	   k=a;
   }
   r=max;
   for(j=0;j<i;j++)
	   if(s[j]==r)
		   r=r-1;
	   else if(s[j]>r)
	   {
	     max=max+1;
		 break;
	   }
	   printf("Case %ld: %ld\n",f+1,max);
	   }
return 0;
}