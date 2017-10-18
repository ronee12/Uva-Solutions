#include<stdio.h>
#include<math.h>
int main()
{
  long int u,l,k,t,tt,i;
  scanf("%ld",&tt);
  for(t=0;t<tt;t++)
  {
  scanf("%ld%ld%ld",&l,&u,&k);
  long int c=0,c1=0,j;
  for(i=l;i<=u;i++)
  if(i%k==0)
  {
	for(j=1;j<=sqrt(i);j++)
		if((i%j)==0)
			if(i/j==j)
			{
			 c=c+1;
			 c1=c1+j;
			}
			else
			{
			     c=c+2;
			     c1=c1+j+i/j;
			}
  }
  printf("%ld %ld\n",c,c1);
  }
return 0;
}
