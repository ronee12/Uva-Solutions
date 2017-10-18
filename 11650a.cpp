#include<stdio.h>
int main()
{
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
  int a,b,h=24,m=0,x,y,cc;
	  scanf("%d%c%d",&a,&cc,&b);
	  if(b>0)
	  {
	  m=m+60;
	  a=a+1;
	  }
	  x=m-b;
	  y=h-a;
	  if(y>12)
	  y=y-12;
	  if(x==0 && y==0)
	  printf("12:00\n");
	  else if(y<10&&x==0)
		  printf("0%d:00\n",y);
	  else if(y<10&&x<10)
		  printf("0%d:0%d\n",y,x);
	  else if(y<10&&x>=10)
		  printf("0%d:%d\n",y,x);
	  else if(y>=10&&x<10)
		  printf("%d:0%d\n",y,x);
      else
		  printf("%d:%d\n",y,x);
	 /* else if(y<10 && x<10)
       printf("0%d:0%d\n",y,x);
	  else if(x<10)
         printf("%d:0%d\n",y,x);
	  else if(y<10)
         printf("0%d:%d\n",y,x);
	  else
		  printf("%d:%d\n",y,x);*/
	}
return 0;
}
