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
int edge[201][201],cost[20001];
const int inf=1000000000;
struct data
{
    int node,wait;
    bool operator < (const data& p)const
    {
        return wait > p.wait;
    }
};
long long neg=-1000000000;
int main()
{
  int n,t=1,tc,f,k,b;
  while(scanf("%d %d",&n,&b)!=EOF){
      if(n==0&&b==0) break;
int st,end;
    int i,j,m,cst,to;
    for(i=0;i<200;i++)
    for(j=0;j<200;j++)
    edge[i][j]=inf;

    for(i=1;i<=n;i++)//3== number of node
       edge[i][i]=0;


for(i=1;i<=b;i++)
{
       scanf("%d %d %d",&m,&to,&cst);
           edge[m][to]=cst;
           edge[to][m]=-cst;
}

long mn,fl=0;
for(k=1;k<=n;k++)//3== number of node
{
for(i=1;i<=n;i++)//3== number of node
{
for(j=1;j<=n;j++)//3== number of node
{
    edge[i][j] = min( edge[i][j], edge[i][k] + edge[k][j] );
     //printf("%d %d %d \n",i,j,edge[i][j]);
}
}
//if(edge[1][k]+)
}
if(edge[1][1]<0)
printf("Y\n");
else
printf("N\n");
  }
return 0;
}
