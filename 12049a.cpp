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
#define MII map<int,int>
#define MSI map<string,int>
#define MIS map<int,string>
#define CLEAR(x) memset(x,0,sizeof(x));
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
using namespace std;

int main()
{
    long t,x;
    scanf("%ld",&t);
    REP(x,t)
    {
    long  m,n,i;
    long a;
  VI positive,negetive;
      scanf("%ld%ld",&m,&n);
      REP(i,m)
      {
      scanf("%ld",&a);
      if(a>=0)
      {
      positive.push_back(a);
      }
      else
      {
          a=a*(-1);
          negetive.push_back(a);
      }
      }
      sort(positive.begin(),positive.end());
      sort(negetive.begin(),negetive.end());
      long lb,up,ub,mid,c=0;
      REP(i,n)
      {
          scanf("%ld",&a);
         if(a>=0)
          {
                lb = 0;
					ub =positive.size();
					while(lb <= ub)
					{
						mid = (lb + ub)/2;
						  if(a<positive[mid])
                         {
                             ub = mid - 1;
                         }
                         else if(a>positive[mid])
                         {
                             lb = mid + 1;
                         }
						 else
						 {
							 up = mid;
							 break;
						 }
						 up = lb;
					 }
					 if(up>=0&&up<positive.size())
					 {
					 if(positive[up]==a)
					 {
					 positive.erase(positive.begin()+up);
					 }
					 else
					  c++;
					 }
					 else
					 c++;
          }
          else
          {
              a=a*(-1);
               lb = 0;
					ub =negetive.size();

					while(lb <= ub)
					{
						mid = (lb + ub)/2;
						  if(a<negetive[mid])
                         {
                             ub = mid - 1;
                         }
                         else if(a>negetive[mid])
                         {
                             lb = mid + 1;
                         }
						 else
						 {
							 up = mid;
							 break;
						 }
						 up = lb;
					 }
					 if(up>=0&&up<negetive.size())
					 {
					 if(negetive[up]==a)
					 {
					 negetive.erase(negetive.begin()+up);
					 }
					 else
					 c++;
					 }
					 else
					 c++;
          }

      }
      printf("%ld\n",c+negetive.size()+positive.size());
    }
    return 0;
}
