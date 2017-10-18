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
int main()
{
	long t,j;
	scanf("%ld",&t);
	for(j=0;j<t;j++)
	{
		double x,y,z,m,i,p,r;
		cin>>x>>y>>z;
		m=(x+y)/3;
		i=z/m;
		p=x-m;
		r=i*p;
		cout<<r;
		printf("\n");
	}
	return 0;
}