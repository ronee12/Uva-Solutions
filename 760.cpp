/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include <bits/stdc++.h>
using namespace std;
struct suffix
{
    int index; /// To store original index
    int rank[2]; /// To store ranks and next rank pair
};
int com(struct suffix a, struct suffix b)
{
    if(a.rank[0]==b.rank[0])
        return (a.rank[1]<b.rank[1]);
    else
        return (a.rank[0]<b.rank[0]);
}
int sufarr[1005];
void builtsuffixarray(string s)
{
    int n;
    n=s.size();
    suffix suf[n];
    for(int i=0;i<n;i++)
    {
        suf[i].index=i;
        suf[i].rank[0]=s[i]-'a';
        suf[i].rank[1]= (i+1<n) ? (s[i+1]-'a'):-1;
    }
    sort(suf,suf+n,com);
    int ind[n];
    for(int k=1;k<n;k=k*2)
    {
        int rnk=0;
        int prev_rank = suf[0].rank[0];
        suf[0].rank[0] = rnk;
        ind[suf[0].index] = 0;
        for (int i = 1; i < n; i++)
        {
            if (suf[i].rank[0] == prev_rank &&
                    suf[i].rank[1] == suf[i-1].rank[1])
            {
                prev_rank = suf[i].rank[0];
                suf[i].rank[0] = rnk;
            }
            else
            {
                prev_rank = suf[i].rank[0];
                suf[i].rank[0] = ++rnk;
            }
            ind[suf[i].index] = i;
        }
        for (int i = 0; i < n; i++)
        {
            int nextindex = suf[i].index + k;
            suf[i].rank[1] = (nextindex < n)?
                                  suf[ind[nextindex]].rank[0]: -1;
        }
        sort(suf,suf+n,com);
    }
    for (int i = 0; i < n; i++)
        sufarr[i] = suf[i].index;
}
int rank[1005],height[1005];
/// height[i] = length of the longest common prefix of suffix sufarr[i] and suffix sufarr[i-1]
void longest_common_prefixes(int n,string str)
{
    for (int i=0; i<n; ++i) rank[sufarr[i]] = i;
    height[0] = 0;
    for (int i=0, h=0; i<n; ++i)
    {
        if (rank[i] > 0)
        {
            int j = sufarr[rank[i]-1];
            while (i + h < n && j + h < n && str[i+h] == str[j+h]) h++;
            height[rank[i]] = h;
            if (h > 0) h--;
        }
    }
}
/// how many l length substring is in a that also substring in b
vector<int> solve(int l,int s1,int strL) // s1 = first string len
{
    //cout<<"fdf"<<endl;
    int i,j,k;
    vector<int> v;
    //cout<<str<<endl;
    for(i=1;i<strL;i=j+1)
    {
        while(height[i]<l && i<strL) i++;

        int a=0,b=0,p=0;
        p=sufarr[i-1];
        if(sufarr[i-1]<s1) a++;
        if(sufarr[i-1]>s1) b++;
        //cout<<"here "<<i<<endl;
        for(j=i;height[j]>=l && j<strL;j++)
        {
            if(sufarr[j]<s1) a++;
            if(sufarr[j]>s1) b++;
        }
        if(a>=1 && b>=1)
        {
            v.push_back(p);
        }
    }
    return v;
}
int main()
{
ios_base::sync_with_stdio(false);
//freopen("input.txt","r",stdin);
//freopen("output1.txt","w",stdout);
   string s,a,b;
   int tk=0;
   while(cin>>a){
         cin>>b;
   s=a+"#"+b;

   builtsuffixarray(s);
  // for(int i=0;i<s.size();i++)
       // {
       //     cout<<sufarr[i]<<" ";
      //  }
     //   cout<<endl;


   longest_common_prefixes(s.size(),s);

   vector<string> res;
   for(int i=a.size();i>=1;i--)
   {
       vector<int> r=solve(i,a.size(),s.size());
       if(r.size())
       {
           for(int j=0;j<r.size();j++)
            {
                res.push_back(s.substr(r[j],i));
            }
           break;
       }
   }
   if(tk)
    cout<<endl;
    tk++;
   if(res.size()==0) cout<<"No common sequence.\n";
   else
   {
       sort(res.begin(),res.end());
       for(int i=0;i<res.size();i++)
        cout<<res[i]<<endl;
   }

   }
return 0;
}
