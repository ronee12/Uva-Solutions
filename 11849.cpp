#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define siz 1000001
long bs(long a[],long n,long l,long u)
{
long mid;
  if(l>u)
	  return 0;
  mid=floor(l+u)/2;
  if(a[mid]==n)
	  return 1;
  else if(a[mid]>n)
	  bs(a,n,l,mid-1);
	  else
	  bs(a,n,mid+1,u);
}
int main()
{
   long	int n,m,i,c;
    long *a,*b;
	a=(long*)malloc(siz*sizeof(long));
	b=(long*)malloc(siz*sizeof(long));
	while(scanf("%ld%ld",&n,&m)!=EOF)
	{
		if(n==0 && m==0)
			break;
    for(i=0;i<n;i++)
		scanf("%ld",&b[i]);
	 for(i=0;i<m;i++)
		scanf("%ld",&a[i]);
	 c=0;
	 for(i=0;i<m;i++)
	 {
		 if((bs(b,a[i],0,n))==1)
			 c=c+1;
	 }
    printf("%ld\n",c);
	}
return 0;
}