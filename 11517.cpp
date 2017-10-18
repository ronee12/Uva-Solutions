#include<bits/stdc++.h>
using namespace std;
long dp[101][10001],n,w[101],cost,mincost;
int knap(int i,long wi)
{
     if(wi>=cost) return wi;
     if(i>=n) return 1000000;

    if(dp[i][wi]!=-1) return dp[i][wi];
    int r1=0,r2=0;

    r1=knap(i+1,wi+w[i]);

    r2= knap(i+1,wi);

    return dp[i][wi]=min(r1,r2);
}
int knap2(int i,long wi)
{
    if(wi==mincost) return 0;
    if(wi>mincost||i>=n) return 1000;
     if(dp[i][wi]!=-1) return dp[i][wi];
    int r1=0,r2=0;

    r1= 1 + knap2(i+1,wi+w[i]);
    r2=knap2(i+1,wi);

    return dp[i][wi]=min(r1,r2);
}
int main()
{
    long t;
    cin>>t;
    while(t--){
    cin>>cost>>n;
    memset(dp,-1,sizeof(dp));

    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    mincost=knap(0,0);
      memset(dp,-1,sizeof(dp));
    cout<<mincost<<" "<<knap2(0,0)<<endl;
    }
    return 0;
}
