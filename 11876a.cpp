#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define siz 2000000
nod(int n)
{
long int i,c=0;
	for(i=1;i<=sqrt(n);i++)
		if((n%i)==0)
			if(n/i==i)
				c=c+1;
			else
			   c=c+2;
return (c);
}

bs(long a[],int n,int l,int u)
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
	 long k0=0,k1=0,sm,t,tt,m,a,b,*ar;
	ar=(long*)malloc(siz*sizeof(long));
sm=1;
for(m=1;m<1000000;m++)
{    if(sm>1000000)
            break;
	 sm=sm+nod(sm);
     ar[m]=sm;
}
scanf("%ld",&tt);
for(t=1;t<tt+1;t++)
{
	k0=0;
	k1=0;
	ar[0]=1;
scanf("%ld%ld",&a,&b);
/*if(a==1||b==1||a==b)
{
	bb=bs(ar,a,1,64726);
	if(bb>0)
        mm=1
}*/
if(a==1)
  k0=0;
else
  while(k0==0)
  {
      k0=bs(ar,a,0,64725);
	  a=a+1;
  }
  if(b==1)
	  k1=0;
  else
    while(k1==0)
	{
	  k1=bs(ar,b,0,64725);
	  b=b-1;
	}
printf("Case %ld: %ld\n",t,k1-k0+1);
}
return 0;
}
