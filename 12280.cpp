#include<stdio.h>
#include<string.h>
#include<bitset>
using namespace std;
int main()
{
	char ss[100];
	int tt=1,ss1[100],i,l1,xx=0;
	gets(ss);
	l1=strlen(ss);
	for(i=0;i<l1;i++)
	    ss1[i]=ss[i]-48;
	for(i=0;i<l1;i++)
		xx=xx*10+ss1[i];
	while(xx!=0)
	{
		xx=xx-1;
	  bitset<16> n;
	char a[100][100],x[10],y[10];
	long int i,l,g1=0,g2=0,m=0,t1,t0,total=0,k=0,total1=0;
	for(i=0;i<8;i++)
		gets(a[i]);
	if(a[6][1]=='_')
	{
	  for(i=0;i<6;i++)
		  x[i]=a[5][i+1];
	  for(i=0;i<6;i++)
		  y[i]=a[3][i+11];
	  l=1;
	}
   else if(a[4][1]=='_')
	{
	   for(i=0;i<6;i++)
		   x[i]=a[3][i+1];
	   for(i=0;i<6;i++)
		   y[i]=a[5][i+11];
	   l=3;
	}
  else if(a[5][1]=='_')
	{
	   for(i=0;i<6;i++)
		   x[i]=a[4][i+1];
	   for(i=0;i<6;i++)
		   y[i]=a[4][i+11];
	   l=2;
	}
     while(isalpha(x[m]))
	 {
	      n=x[m];
		  t1=n.count()*500;
		  t0=(7-n.count())*250;
		  total=total+(t1+t0);
		  m=m+1;
	 }
      while(isalpha(y[k]))
	 {
	      n=y[k];
		  t1=n.count()*500;
		  t0=(7-n.count())*250;
		  total1=total1+(t1+t0);
		k=k+1;
	 }
	  g1=total;
	  g2=total1;
	  printf("Case %d:\n",tt);
	  tt=tt+1;
	if(l==3)
	{
	   if(g1<g2)
		   printf("The figure is correct.\n");
	   else if(g1>g2)
		   printf("........||.../%c...\n........||../..%c..\n.../%c...||./....%c.\n../..%c..||/%c%c%c%c%c%c%c\n./....%c.||%c______/\n/%c%c%c%c%c%c%c||........\n%c______/||........\n",92,92,92,92,92,y[0],y[1],y[2],y[3],y[4],y[5],92,92,92,x[0],x[1],x[2],x[3],x[4],x[5],92,92);
	   else
		   printf("........||........\n.../%c...||.../%c...\n../..%c..||../..%c..\n./....%c.||./....%c.\n/%c%c%c%c%c%c%c||/%c%c%c%c%c%c%c\n%c______/||%c______/\n........||........\n",92,92,92,92,92,92,x[0],x[1],x[2],x[3],x[4],x[5],92,y[0],y[1],y[2],y[3],y[4],y[5],92,92,92);

	}
	else if(l==1)
	{
	  if(g1>g2)
		  printf("The figure is correct.\n");
	  else if(g1<g2)
          printf(".../%c...||........\n../..%c..||........\n./....%c.||.../%c...\n/%c%c%c%c%c%c%c||../..%c..\n%c______/||./....%c.\n........||/%c%c%c%c%c%c%c\n........||%c______/\n",92,92,92,92,x[0],x[1],x[2],x[3],x[4],x[5],92,92,92,92,y[0],y[1],y[2],y[3],y[4],y[5],92,92);
	  else
		   printf("........||........\n.../%c...||.../%c...\n../..%c..||../..%c..\n./....%c.||./....%c.\n/%c%c%c%c%c%c%c||/%c%c%c%c%c%c%c\n%c______/||%c______/\n........||........\n",92,92,92,92,92,92,x[0],x[1],x[2],x[3],x[4],x[5],92,y[0],y[1],y[2],y[3],y[4],y[5],92,92,92);
	}
	else if(l==2)
	{
	  if(g1==g2)
		  printf("The figure is correct.\n");
	  else if(g1>g2)
          printf("........||.../%c...\n........||../..%c..\n.../%c...||./....%c.\n../..%c..||/%c%c%c%c%c%c%c\n./....%c.||%c______/\n/%c%c%c%c%c%c%c||........\n%c______/||........\n",92,92,92,92,92,y[0],y[1],y[2],y[3],y[4],y[5],92,92,92,x[0],x[1],x[2],x[3],x[4],x[5],92,92);
	  else
         printf(".../%c...||........\n../..%c..||........\n./....%c.||.../%c...\n/%c%c%c%c%c%c%c||../..%c..\n%c______/||./....%c.\n........||/%c%c%c%c%c%c%c\n........||%c______/\n",92,92,92,92,x[0],x[1],x[2],x[3],x[4],x[5],92,92,92,92,y[0],y[1],y[2],y[3],y[4],y[5],92,92);
	}
	}
return 0;
}