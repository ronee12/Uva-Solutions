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

int partition(long s[], int l, int h)
{
	int i;         /* counter */
		int p;     /* pivot element index */
	int firsthigh; /* divider position for pivot */
	p = h;
	firsthigh = l;
	for (i=l; i<h; i++)
		if (s[i] < s[p])
		{
			swap(*&s[i],*&s[firsthigh]);
			firsthigh ++;
		}
		swap(*&s[p],*&s[firsthigh]);
		return(firsthigh);
}

void quicksort(long s[], long l, long h)
{
	long p;         /* index of partition */
	if ((h-l)>0)
	{
		p = partition(s,l,h);
		quicksort(s,l,p-1);
		quicksort(s,p+1,h);
	}
}
int main()
{
	long m,n,i,j,a,num,positive[1000]={0},negetive[1000]={0},ub,lb,mid,q,p,up;
	char pos[1000]={0},neg[1000]={0};
   scanf("%ld%ld",&m,&n);
   p=0;q=0;
   for(i=0;i<m;i++)
   {
   scanf("%ld",&a);
   if(a>0)
	   positive[p++]=a;
   else negetive[q++]=a*(-1);

   }
  // printf("%d",positive[0]);
	quicksort(positive,0,p);
		quicksort(negetive,0,q);
	//	printf("%d",negetive[3]);
int count=0;
   for(i=0;i<n;i++)
   {

     scanf("%ld",&num);
	
	 if(num>0)
	 {
	    lb = 0;
					ub =p+1;

					while(lb <= ub)
					{
						mid = (lb + ub)/2;
						  if(num<positive[mid])
                         {
                             ub = mid - 1;
                         }
                         else if(num>positive[mid])
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
					if(positive[up]==num)
						pos[up]=1;
					
					else 
						count++;

	 }
	 else if(num<0)
	 {
		 num=num*(-1);
	   lb = 0;
					ub =q+1;

					while(lb <= ub)
					{
						mid = (lb + ub)/2;
						  if(num<negetive[mid])
                         {
                             ub = mid - 1;
                         }
                         else if(num>negetive[mid])
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
					if(negetive[up]==num)
						neg[up]=1;
					else 
						count++;
	 }

   }
  for(i=1;i<=p;i++)
	  printf("%d ",pos[i]);
	  /*if(pos[i]==0)
		  count++;
	  for(i=1;i<q;i++)
		  if(neg[i]==0)
			  count++;
	  printf("%d \n",count);*/
return 0;
}
