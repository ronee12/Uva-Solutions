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
//Polya-Burnside theory : (n^6+3n^4+12n^3+8n^2)/24
int euclidd,euclidx,euclidy;
void extendedeuclid(int a,int b)
{
	if(b==0)
	{
		euclidd=a;
		euclidx=1;
		euclidy=0;
		return ;
	}
	extendedeuclid(b,a%b);
	int d1,x1,y1;
	d1=euclidd;
	x1=euclidx;
	y1=euclidy;
	euclidx=y1;
	euclidy=x1-((a/b)*y1);
}
double area_triangle(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double a;
    a=x1*(y2-y3)+y1*(x3-x2)+((x2*y3)-(y2*x3))+eps;
    a=a/2+eps;
return a;
}
double dist_2point(double x1,double y1,double x2,double y2)
{
    double d;
    d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    return d;
}
int binary_search(int a[],int n,int l,int u)
{
	int mid;
  if(l>u)
	  return 0;
  mid=floor(l+u)/2;
  if(a[mid]==n)
	  return mid;
  else if(a[mid]>n)
	  binary_search(a,n,l,mid-1);
	  else
	  binary_search(a,n,mid+1,u);
}
int gcd(int a,int b)
{
while(b>0)
{
a=a%b;
a=a^b;
b=b^a;
a=a^b;
}
return a;
}
long lcm(long a,long b)
{
    long x=(a*b)/gcd(a,b);
    return x;
}
long is_prime(long n)
{
	long ii;
if (n == 1)
 return 0;
if (n == 2)
 return 1;
if (n%2 == 0)
 return 0;
for (ii=3;ii*ii<=n;ii=ii+2)
     if (n%ii == 0)
           return 0;
return 1;
}
long long store[1000020]={0};
int main()
{
    long long int n,k,i,m,s=2,j,x;
    m=2;
    x=6;
    store[4]=1;
    store[5]=3;
    for(j=0;j<500000;j++)
    {
    for(i=0;i<2;i++)
    {
        s+=m;
        store[x]=s+store[x-1];
        x++;
        //printf("%d ",s);
    }
    m++;
    }
  //  printf("%ld",x);
    int t,tc;
scanf("%d",&t);
for(tc=0;tc<t;tc++)
{
    long p;
    scanf("%ld",&p);

    printf("%lld\n",store[p]);
}

return 0;
}


/*int main()
{
    int n,R,r,x,y;
scanf("%d %d %d",&n,&R,&r);
x=n*r*2;
y=2*R;
if(y>=x)
printf("yes\n");
else printf("no\n");
return 0;
}*/
