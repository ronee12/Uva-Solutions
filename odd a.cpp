#include<stdio.h>
int main()
{
	int a[100],b[100],x,y=0,j=0,i,n;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
		scanf("%d%d",&a[i],&b[i]);
	for(i=1;i<n+1;i++)
	{
	    x=a[i],y=0,j=0;
		while(b[i]>=y)
		{
		  if(a[i]%2==0)
		  {
		  x=a[i]+1;
		  y=x+2;
		  a[i]=x;
		  }
		  else
		  {
		  x=x+j;
		  j=a[i]+2;
		  y=j;
		  a[i]=a[i]+2;
		  }
		}
		printf("Case %d: %d\n",i,x);
	}
return 0;
}
