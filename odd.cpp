#include<stdio.h>
int main()
{
	int a,b,x,y=0,j=0,i=1;
		scanf("%d%d",&a,&b);
	    x=a;
		while(b>=y)
		{
		  if(a%2==0)
		  {
		  x=a+1;
		  y=x+2;
		  a=x;
		  }
		  else
		  {
		  x=x+j;
		  j=a+2;
		  y=j;
		  a=a+2;
		  }
		}
		printf("case %d: %d\n",i,x);
return 0;
}
