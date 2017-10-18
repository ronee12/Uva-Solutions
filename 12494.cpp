/***************************************************************************
 Md. Maruf Ur Rahman
 Dept of CSE.
 Islamic University,Bangladesh.
 ***************************************************************************/
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
#define fr(i,n) for(__typeof(n) i=0; i<(n); i++)
#define fre(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define frt(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
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
long long bigmod(long long b,long long p,long long m)
{
    if(b==0) return 0;
    long long x,power;
    x=1;
    power=b%m;
    while(p)
    {
       if(p%2==1)
            x=(x*power)%m;
        power=(power*power)%m;
        p=p/2;
    }
    return x;
}

#define MAXI(a,b) ((a)>(b)?(a):(b))
#define MINI(a,b) ((a)<(b)?(a):(b))
string M(string str)
{
    int k,n,l,N,h;
    N = str.size();
    string bck=str;
    str+=bck;
    k = l = 0;
    n = 1;
    while(n<N && k+l-1<N)
    {
        if (str[k+l]==str[n+l]) ++l;
        if (str[k+l]<str[n+l])
        {
            n = n+l+1;
            l = 0;
        }
        if (str[k+l]>str[n+l])
        {
            h = MAXI(n, k+l+1);
            k = h;
            n = h+1;
            l = 0;
        }
    }
    //cout<<bck<<" ";
   // cout<<k<<"h \n";
   // printf("kk%ld\n",k);
    string m1,n1;
    int p=bck.size();
    if(k==0||k>=p)
    return bck;
    m1=bck.substr(0,k);
   n1=bck.substr(k,p);
    return (n1+m1);
}
int main()
{
ios_base::sync_with_stdio(false);
//freopen("input.txt","r",stdin);
long t;
cin>>t;
while(t--)
{

string a,res;
map<string, int > mp;
long l,i,j,c=0;
cin>>a;
l=a.size();
for(i=0;i<l;i++)
{
    for(j=i;j<l;j++)
    {
        string st;
        for(int k=i;k<=j;k++)
        {
            st+=a[k];
        }
        //cout<<st<<"  ";
        res=M(st);
        //cout<<res<<"\n";
        if(mp[res]==0)
        {
            c++;
            mp[res]=1;
        }
    }
}
cout<<c<<endl;
}
return 0;
}
