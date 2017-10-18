#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
#define size 10000000
#define max 10000000
using namespace std;

long reverse(long n)
{
	long c=0;
	while(n>0)
	{
		c=c*10;
		c=n%10+c;
			n=n/10;
	}
	return c;
}

/*long is_prime(long n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(n==2)
		return 1;
	if(n%2==0)
		return 0;
	for(int i=3;i*i<=n;i=i+2)
		if(n%i==0)
			return 0;
		return 1;
}*/
int main ()
{


	long int j,i,u=0,m;

char *prime;
	prime=(char*)malloc(max*sizeof(char));
	m=sqrt(max)+10;
	for(i=2;i<=m;i++)
	{
		if(prime[i]!=1)
		{
			j=i;
			while((j+i)<=max-2)
			{				
				j=j+i;
				prime[j]=1;
			}
		}
	
	}
//printf("D");
	long n,s,k=0;
	long *a,*p;
	a=(long*)malloc(size*sizeof(long));
	p=(long*)malloc(size*sizeof(long));
	//long a[100000]={0};
	for(i=100007; i<=999999; i++)
	{
		n=i*10;
		m=n;
		s=reverse(i);
	//	if(is_prime(s)==1)
		if(prime[s]!=1)
		{
			//printf("%ld\n",s);
			long l=3,c=1;
			while(prime[n]==1)
			{
				while(n%2==0)
				{
					n=n/2;
				c=c+1;
				}
				if(n%l==0)
				{
					n=n/l;
					c=c+1;
				}
				else
					l=l+2;
				//printf("d");
			}
			/*while(is_prime(n)!=1)
			{
				for(j=2;j<=sqrt(n);j++)
					if(n%j==0)
					{
						n=n/j;
						//m[n]=i;
						c=c+1;
						break;
					}
					//printf("d");
			}*/
			a[m-1000070]=c;
			p[k]=m;
			k++;
			//printf("%ld\n",c);
		}
	}
	char h[4]={0};
	long b,count,w,ii;
	while(scanf("%s %ld",h,&b)!=EOF)
	{
		count=0;
	if(h[0]=='d')
	{
		a[b-1000070]=0;
		//printf("%ld",b-1000070);
		//printf("\n");
	}
	else
	{
		for(i=0,ii=0; ii<=b;i++)
		{
			w=count;
			count=count+a[p[i]-1000070];
			//if(a[p[i]-1000070]>0)
			if(count>w)
				ii=ii+1;
			//printf("d");
		}
		printf("%ld\n",count);
	}
	}
        return 0;
}
