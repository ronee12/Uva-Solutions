
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
	int t,test;
	scanf("%d",&test);
	for(t=0;t<test;t++)
	{
			if(t>0)
			printf("\n");
		
	char a[505]={0};
	int n,i,l,j;
	scanf("%d",&n);
	getchar();

		printf("Case %d:\n",t+1);
	for(j=0;j<n;j++)
	{
	  gets(a);
	 l= strlen(a);
	 for(i=0;i<l;i++)
	 {
	   if(a[i]==' ')
	   {
	     if(a[i-1]!=' ')
			 printf("%c",a[i]);
	   }
	   else
		   printf("%c",a[i]);
	 }
	 
	 printf("\n");
	}


	}
return 0;
}