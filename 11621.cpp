#include <cstdio>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include<set>
#include<string>

#define pi 2*acos(0.0)
#define eps 1e-9

using namespace std;

/*long gcd(long a,long b)
{
	if(a%b==0)
		return b;
	else
		gcd(b%a,a);
}*/

/*double area_triangle(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double a;
    a=x1*(y2-y3)+y1*(x3-x2)+((x2*y3)-(y2*x3))+eps;
    a=a/2+eps;
return a;

}*/

/*int prime(long n)
{
	long k,d;
	if(n%2==0)
		return 0;
	d=sqrt(n);
	for(k=3;k<=d;k=k+2)
	{
		if(n%k==0)
			return 0;
	}
	return 1;
}*/

int main()
{
	//freopen("Input.txt","r",stdin);
    //freopen("Output.txt","w",stdout);
    long long thr=1,ar3[22],ar2[40],two=1,all[1000],k=0;
    for(int i=0;i<20;i++)
    {
        thr*=3;
        ar3[i]=thr;
        all[k++]=thr;
    }
    for(int i=0;i<32;i++)
    {
        two*=2;
        ar2[i]=two;
        all[k++]=two;
    }
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<32;j++)
        {
            all[k++]=ar3[i]*ar2[j];
        }
    }
    sort(all,all+k);
	long long n;
	while(scanf("%ld",&n)!=EOF)
	{
	    if(n==0) break;
	    if(n==1)
	    {
	        cout<<1<<endl;
	        continue;
	    }
	    for(int i=0;i<k;i++)
	    {
	        if(all[i]>=n)
	        {
	            cout<<all[i]<<endl;
	            break;
	        }
	    }
	   /* for(int i=n;;i++)
	    {
	        long p=i;
	        while(p%2==0)
	        {
	            p=p/2;
	        }
	        while(p%3==0)
	        {
	            p=p/3;
	        }
	        if(p==1)
	        {
	            cout<<i<<endl;
	            break;
	        }
	    }*/
	}
	return 0;
}


































