#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
  int a,b,k=0,sum,m[10],l,i,ss;
  char e,f,c[100];
  while(scanf("%d%c%d%c%s",&a,&e,&b,&f,&c)!=EOF)
  {
	  ss=0;
  if(e=='+')
	  sum=a+b;
  else
	  sum=a-b;
  if(c[0]=='?')
	  k=k;
  else
  {
    l=strlen(c);
      for(i=0;i<l;i++)
	  {
		  m[i]=c[i]-48;
		  ss=ss*10+m[i];
	  }
	  if(sum==ss)
		  k=k+1;
  }
	  a=0;
	  b=0;
	  c[100]='0';
  }
  printf("%d\n",k);
return 0;
}