/*
ID:
PROG:
LANG: C++
*/

/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include <bits/stdc++.h>
using namespace std;
#define inf           100000000000000000LL
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
#define prc(k)        printf("Case %ld: ",k);
#define pri(a)        printf("%ld",a)
#define pr64(a)       printf("%I64d",a)
#define prii(a,b)     printf("%ld %ld",a,b)
#define pr6464(a,b)   printf("%I64d %I64d",a,b)
#define prs(a)        printf("%s",a)
#define prss(a,b)     printf("%s %s",a,b)
#define prd(a)        printf("%lf",a)
#define prdd(a,b)     printf("%lf %lf",a,b)
#define rep(i,n)      for(int i(0),_n(n);i<_n;++i)
#define repr(i,n)     for(int i=n;i>=0;i--)
#define repi(i,a,b)   for(int i(a),_b(b);i<=_b;++i)
#define repl(i,n)     for(int i(1),_n(n);i<=_n;++i)
#define repir(i,a,b)  for(int i=a;i>=b;i--)
#define chk(a,k) ((bool)(a&(1<<(k))))
#define off(a,k) (a&(~(1<<(k))))
#define on(a,k) (a|(1<<(k)))
int Set(int N,int pos) {return N |= (1LL<<pos);}
int Reset(int N,int pos) {return N&= ~(1LL<<pos);}
bool Check(int N,int pos) {return N&(1LL<<pos);}
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
inline void cn( long &n )//fast input function
{
n=0;
long ch=getchar();int sign=1;
while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getchar();}
while(ch >= '0' && ch <= '9')
n = (n<<3)+(n<<1) + ch-'0', ch=getchar();
n=n*sign;
}
template<class T> void cmin(T &a,T b){if(b<a) a=b;}
template<class T> void cmax(T &a,T b){if(b>a) a=b;}
template<class T> int len(const T&c){return (int)c.size();}
template<class T> int len(char c[]){return (int)strlen(c);}
string itos(long n){string s;while(n){s+=(n%10+48);n/=10;}reverse(all(s));return s;}
long stoi(string s){long n=0;rep(i,len(s))n=n*10+(s[i]-48);return n;}

long d[10005],res=0;
vector<long> v[10005],cs[10005],vv[10005],vc[10005];

void dfs(int i,int par)
{
    rep(j,len(v[i]))
    {
        long cost=cs[i][j];
        long cur=v[i][j];
        if(cur==par) continue;
        if(d[cur]>cost+d[i])
        {
            vv[cur].clear();
            vc[cur].clear();
            vv[cur].pb(i);
            vc[cur].pb(cost);
            d[cur]=cost+d[i];
            dfs(cur,i);
        }
        else if(d[cur]==cost+d[i])
        {
            vv[cur].pb(i);
            vc[cur].pb(cost);
        }
    }
}
int col[10004];
void dfst(int i)
{
    if(col[i]) return;
    col[i]=1;
    rep(j,len(vv[i]))
    {
        res+=vc[i][j];
        dfst(vv[i][j]);
    }
}
int main()
{
//ios_base::sync_with_stdio(false);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
/*long t,kase;
cin>>t;
for(kase=1;kase<=t;kase++)
{
    cout<<"Case "<<kase<<": ";

}*/

    long n,m,a,b,c;
    while(scanf("%ld %ld",&m,&n)!=EOF){
res=0;
    rep(i,n)
    {
      //  cin>>a>>b>>c;
        scanf("%ld %ld %ld",&a,&b,&c);
        v[a].pb(b);
        cs[a].pb(c);

        v[b].pb(a);
        cs[b].pb(c);
    }
    rep(i,m) d[i]=inf;

    d[0]=0;
    dfs(0,-1);

    dfst(m-1);
    printf("%ld\n",res*2);

    rep(i,10001)
    {
        v[i].clear();
        vv[i].clear();
        vc[i].clear();
        cs[i].clear();
    }

    }


return 0;
}








