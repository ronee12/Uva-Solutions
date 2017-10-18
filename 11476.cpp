/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include <set>
#include <map>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cctype>
#include <cstdio>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cassert>
#include <climits>
#include <complex>
#include <numeric>
#include <valarray>
#include <iostream>
#include <memory.h>
#include <algorithm>
using namespace std;
#define inf           (1<<29)
#define pb            push_back
#define mp            make_pair
#define eps           1e-9
#define nl            printf("\n")
#define spc           printf(" ")
#define sci(n)        scanf("%ld",&n)
#define sc64(n)       scanf("%I64d",&n)
#define scii(a,b)     scanf("%ld %ld",&a,&b)
#define sc6464(a,b)   scanf("%I64d %I64d",&a,&b)
#define scs(s)        scanf("%s",s)
#define scss(a,b)     scanf("%s %s",a,b)
#define scd(f)        scanf("%lf",&f)
#define scdd(a,b)     scanf("%lf %lf",&a,&b)
#define pfi(a)        printf("%ld",a)
#define pf64(a)       printf("%I64d",a)
#define pfii(a,b)     printf("%ld %ld",a,b)
#define pf6464(a,b)   printf("%I64d %I64d",a,b)
#define pfs(a)        printf("%s",a)
#define pfss(a,b)     printf("%s %s",a,b)
#define pfd(a)        printf("%lf",a)
#define pfdd(a,b)     printf("%lf %lf",a,b)
#define rep(i,n)      for(int i(0),_n(n);i<_n;++i)
#define repr(i,n)     for(int i=n;i>=0;i--)
#define repi(i,a,b)   for(int i(a),_b(b);i<=_b;++i)
#define repl(i,n)     for(int i(1),_n(n);i<=_n;++i)
#define repir(i,a,b)  for(int i=a;i>=b;i--)
#define ff            first
#define ss            second
#define all(a)        a.begin(),a.end()
#define mem(x,a)      memset(x,a,sizeof(x))
#define repe(it,c)    for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
int dx[]={0,0,1,-1,1,-1,1,-1},dy[]={1,-1,0,0,1,-1,-1,1};
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<string> vs;
#define ll long long
typedef vector<vector<int> > vvi;

template<class T> void cmin(T &a,T b){if(b<a) a=b;}
template<class T> void cmax(T &a,T b){if(b>a) a=b;}
template<class T> int len(const T&c){return (int)c.size();}
template<class T> int len(char c[]){return (int)strlen(c);}
string itos(long n){string s;while(n){s+=(n%10+48);n/=10;}reverse(all(s));return s;}
long stoi(string s){long n=0;rep(i,len(s))n=n*10+(s[i]-48);return n;}

//Polya-Burnside theory : (n^6+3n^4+12n^3+8n^2)/24
#define DEBUG 1
#if DEBUG && !ONLINE_JUDGE
	#define debug(args...) (Debugger()) , args
	class Debugger { public: Debugger(const std::string& _separator = ", ") : first(true), separator(_separator){} template<typename ObjectType> Debugger& operator , (const ObjectType& v) { if(!first) std::cerr << separator; std::cerr << v; first = false; return *this; } ~Debugger() { std::cerr << endl;} private: bool first; std::string separator; }; template <typename T1, typename T2> inline std::ostream& operator << (std::ostream& os, const std::pair<T1, T2>& p) { return os << "(" << p.first << ", " << p.second << ")"; } template<typename T> inline std::ostream &operator << (std::ostream & os,const std::vector<T>& v) { bool first = true; os << "["; for(unsigned int i = 0; i < v.size(); i++) { if(!first) os << ", "; os << v[i]; first = false; } return os << "]"; } template<typename T> inline std::ostream &operator << (std::ostream & os,const std::set<T>& v) { bool first = true; os << "["; for (typename std::set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii) { if(!first) os << ", "; os << *ii; first = false; } return os << "]"; } template<typename T1, typename T2> inline std::ostream &operator << (std::ostream & os,const std::map<T1, T2>& v) { bool first = true; os << "["; for (typename std::map<T1, T2>::const_iterator ii = v.begin(); ii != v.end(); ++ii) { if(!first) os << ", "; os << *ii ; first = false; } return os << "]"; }
#else
		#define debug(args...)
#endif
void init()
{

}
long mx=100000000;
int status[3125005]={0};
long pr[6000000];
bool check(long n, long p)
{
    return (n&(1<<p));
}
void sieve()
{
    long l=long(sqrt(mx));
    for(long i=3;i<=l;i+=2)
    {
        if(check(status[i>>5],i%31)==0)//i&31=i%31;
        {
            for(long j=i*i;j<=mx;j+=2*i)
            {
                status[j>>5]=(status[j>>5]|(1<<(j%31)));
            }
        }
    }
    long c=0;
   // pr[0]=2;
    for(long i=3;i<=mx;i+=2)
    {
        if(check(status[i/32],i%31)==0)
        pr[c++]=i;
    }
 //   cout<<pr[c-1]<<endl;
}
int main()
{
//ios_base::sync_with_stdio(false);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
sieve();
long t,k;
scanf("%ld",&t);
for(k=1;k<=t;k++)
{
    long long n;
    scanf("%lld",&n);
    printf("%lld = ",n);
    int p=0;
    long cnt;
    if(n%2==0)
    {
        cnt=0;
        while(n%2==0)
        {
            cnt++;
            n/=2;
        }
        if(cnt>1)
        printf("2^%ld",cnt);
        else printf("2");
        p=1;
    }
    for(long i=0;pr[i]*pr[i]<=n;i++)
    {

        if(n%pr[i]==0)
        {
            cnt=0;
            while(n%pr[i]==0)
            {
                n/=pr[i];
                cnt++;
            }
            if(p)
            {
                if(cnt>1)
                printf(" * %ld^%ld",pr[i],cnt);
                else
                     printf(" * %ld",pr[i]);
            }
            else
            {
                p=1;
                 if(cnt>1)
                printf("%ld^%ld",pr[i],cnt);
                else printf("%ld",pr[i]);
            }
        }
    }
    if(n>1)
    {
            if(p)
                printf(" * %ld",n);
            else
                printf("%ld",n);

    }
    printf("\n");
}
    // file or not???

return 0;
}
