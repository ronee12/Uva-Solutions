#include<stdio.h>
#include<math.h>
bs(int a[],int n,int l,int u)
{
	int mid;
  if(l>u)
	  return 0;
  mid=floor(l+u)/2;
  if(a[mid]==n)
	  return mid;
  else if(a[mid]>n)
	  bs(a,n,l,mid-1);
	  else
	  bs(a,n,mid+1,u);
}
int main()
{
	int b[10]={1,2,3,4,5,6,7,8,9,0},n;
	while(scanf("%d",&n)!=EOF)
    printf("%d\n",bs(b,n,0,9));
return 0;
}