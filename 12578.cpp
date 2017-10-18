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
    int j,t;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        double l,w,r,ar,ar1,ar2;
        //pi=22.0/7.0;
        scanf("%lf",&l);
        w=(3*l)/5.0;
        r=l/5.0;
        ar=w*l;
        ar1=pi*r*r;
        ar2=ar-ar1;

        printf("%.2lf %.2lf\n",ar1,ar2);

    }
	return 0;
}


































