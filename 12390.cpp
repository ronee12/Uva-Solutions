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


long a[500005];
long num[500005];
float xten[500005];
int main()
{
    long n,m;
    while(scanf("%ld %ld", &n, &m)==2)
    {
        CLEAR(a);
        if(n==-1 && m==-1) break;
        long i,sum=0;
       for(i=0; i<n; i++)
       {
         scanf("%ld", &a[i]);
         sum+=a[i];
       }
       double Max=0,s=0,av;
       long in;
       CLEAR(num);
       long l=m;
       m=m-n;
       long ss=n,cc=0;
       for(i=0; i<n; i++)
       {
          double per=(a[i]*100)/(double)sum;
           double d=((double)m*per)/100.0;
           long g=d;
           ss+=g;
          // printf("%lf ",d);
           num[i]=g;
           double r=d-g;
           xten[cc++]=r;
           /*if(r>Max)
           {
               Max=r;
               in=i;
           }*/
           s+=r;
       }

       if(l>ss)
       {
           int x1,x2;
              for(x1=0;x1<cc-1;x1++)
              for(x2=0;x2<cc-1;x2++)
              {
                  if(xten[x2]<xten[x2+1])
                  {
                      float fl=xten[x2];
                      xten[x2]=xten[x2+1];
                      xten[x2+1]=fl;

                  }
              }
              int w=l-ss;
              while(w!=0)
              {
                num[]++;
                w--;
              }

       }
       long M=0;
       for(i=0; i<n; i++)
       {
           num[i]++;
          // printf("%d ",num[i]);
           long f=a[i]/num[i];
           if(M<f)
           M=f;
       }
       printf("%ld\n",M);
    }

return 0;
}

