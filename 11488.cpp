/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include<bits/stdc++.h>
using namespace std;
#define inf           1000000000LL
#define mp            make_pair
#define rep(i,n)      for(int i(0),_n(n);i<_n;++i)
#define ff            first
#define ss            second
#define mem(x,a)      memset(x,a,sizeof(x))


struct node
{
    long endpoint,prefix;
    node *ar[4];
    node()
    {
        endpoint=prefix=0;
        for(int i=0;i<3;i++) ar[i]=NULL;
    }
}*root;
long long mx;
void insert(string s)
{
    node *cur=root;

    for(int i=0;i<s.size();i++)
    {
        int p=s[i]-'0';
        if(cur->ar[p]==NULL)
        {
             cur->ar[p]= new node();
             cur->prefix=1;
        }
        else
            cur->prefix++;

        if((cur->prefix)*(i+1)>mx) mx=(long long )(cur->prefix)*(i+1);
        cur= cur->ar[p];

    }

    cur->endpoint=1;

}
void del(node *cur)
{
    for(int i=0;i<3;i++)
        if(cur->ar[i]) del(cur->ar[i]);

    delete(cur);
}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n;
        string s;
        cin>>n;
        root= new node();
        mx=0;
        rep(i,n)
        {
            cin>>s;
            insert(s);
        }
        cout<<mx<<endl;
        del(root);
    }
    return 0;
}
