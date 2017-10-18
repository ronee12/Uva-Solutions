#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<bitset>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;
int partition(int s[], int l, int h)
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

quicksort(int s[], int l, int h)
{
	int p;         /* index of partition */
	if ((h-l)>0)
	{
		p = partition(s,l,h);
		quicksort(s,l,p-1);
		quicksort(s,p+1,h);
	}
}
int main()
{
	int n,a[1000]={0},i;
	scanf("%ld",&n);

	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);

	quicksort(a,0,n-1);

	for(i=0;i<n;i++)
		printf("%ld ",a[i]);
	return 0;
}
