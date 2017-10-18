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
int n,i,x[1000001]={0};
int main()
{
	
	x[0]=1;
	int a,b,c;
	for(i=1;i<=1000000;i++)
	{
		a=i-sqrt(i);
        b=log(i);
		c=i*pow(sin(i),2);
		x[i]=(x[a]+x[b]+x[c])%1000000;
	}
	while(scanf("%d",&n)==1)
	{
	  if(n==-1)
		  break;
	  printf("%d\n",x[n]);
	}

return 0;
}