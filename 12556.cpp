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
#define inf 1061109567000LL
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
bool is_palindrome(const string &s, int start, int end) {
 int sz = end - start + 1;
if (sz % 2 == 0) {
  int middle = start + sz/2;
    int i;
  for (i = 0; middle - 1 - i >= 0 && middle+i <= end && s[middle-1-i] == s[middle+i]; i++);
   if (middle - i - 1 < 0 || middle+i > end)
    return true;
 } else {
   int middle = start + sz/2;
int i;
 for (i = 1; middle - i >= 0 && middle+i <= end && s[middle-i]==s[middle+i]; i++);
   if (middle - i < 0 || middle+i > end)
return true;
 }
return false;
}
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
long gcd(long a,long b)
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
long REV(long np)
{
    long rev=0;
    while(np!=0)
    {
        rev=rev*10+np%10;
        np=np/10;
    }
    return rev;
}
int main()
{
    int cs,test;
    cin>>test;
    for(cs=1;cs<=test;cs++){
        double x1,x2,x3,s,y1,y2,y3,c,a,b,m1,m2,x,y,x4,x5,x6,y4,y5,y6,a1,a2,a3,b1,b2,b3,c1,c2,c3,t1,t2,t3,t4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        c=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        b=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
        a=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
        s=(a+b+c)/2;
        m1=s-b;
        m2=s-a;
        x4=((m1*x2)+(m2*x1))/c;
        y4=((m1*y2)+(m2*y1))/c;
        m1=s-c;
        m2=s-b;
        x5=((m1*x3)+(m2*x2))/a;
        y5=((m1*y3)+(m2*y2))/a;
        m1=s-c;
        m2=s-a;
        x6=((m1*x3)+(m2*x1))/b;
        y6=((m1*y3)+(m2*y1))/b;
        a1=y1-y5;
        b1=x5-x1;
        c1=(y1*(x1-x5))+(x1*(y5-y1));
        a2=y2-y6;;
        b2=x6-x2;
        c2=(y2*(x2-x6))+(x2*(y6-y2));
        a3=y3-y4;
        b3=x4-x3;
        c3=((y3*(x3-x4))+(x3*(y4-y3)));
        t1=(((b1*c2)-(b2*c1))/((a1*b2)-(b1*a2)));
        t2=(((c1*a2)-(a1*c2))/((a1*b2)-(b1*a2)));
        t3=(((b2*c3)-(b3*c2))/((a2*b3)-(b2*a3)));
        t4=(((c2*a3)-(a2*c3))/((a2*b3)-(b2*a3)));
     //  cout<<t1<<" "<<t3<<"   "<<t2<<" "<<t4<<endl;
     cout<<"Case "<<cs<<": ";
        if((t1-t3)<=.000001&&(t2-t4)<=.000001)
          printf("%.6lf %.6lf\n",t1,t2);
        else cout<<"ERROR\n";
        //cout<<a<<" "<<b<<" "<<c<<endl;
        //cout<<s<<endl;
        //cout<<x<<" "<<y<<" "<<m1<<endl;
    }
    return 0;
}






