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
#define VI vector<long>
#define VS vector<string>
#define LL long long
#define MII map<long,long>
#define MSI map<string,long>
#define MIS map<long,string>
#define CLEAR(x) memset(x,0,sizeof(x));
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)

using namespace std;
int main()
{
    double l,w,h,t;
  while(scanf("%lf %lf %lf %lf",&l,&w,&h,&t)==4)
  {
      double v=l*w*h+eps;
      double x=tan(t*PI/180)*l+eps;
      double p,v1;
      if(x>h)
      {
          p=h/(tan(t*PI/180))+eps;
          v1=(h*w*p)/2+eps;
          printf("%.3lf mL\n",v1+eps);
      }
      else
      {
       v1=(l*w*x)/2+eps;
        printf("%.3lf mL\n",(v-v1)+eps);
      }


  }
	return 0;
}
