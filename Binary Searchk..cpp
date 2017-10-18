#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int binary_search(int a[],int value,int left,int right)
{
	int mid;
	if(right<left)
		return -1;
	mid=floor((left+right)/2);
	if(a[mid]==value;
		return 1;
	if(value<a[mid])
		binary_search(a,value,left,mid-1);
		else
		binary_search(a,value,mid+1,right);
}
int main()
{
	int l,n;
	int a[]={1,3,4,5,6,8,9,50,60,85,100};
	while(scanf("%d",&n)!=EOF)
	{
	l=binary_search(a,n,0,10);
	if(l==-1)
		printf("Not Found\n");
	else
		printf("Search Position = %d\n",l+1);
	}
	return 0;
}
