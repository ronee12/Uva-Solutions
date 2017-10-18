#include<stdio.h>
#include<string.h>
int main()
{
   char a[1005],b[1005];
  while(scanf("%s%s",a,b)!=EOF)
  {
	  long long	int i,c[1005]={0},l1,l2,d[1005]={0},x=0;
   l1=strlen(a);
   l2=strlen(b);
   for(i=0;i<l1;i++)
		c[a[i]-97]=c[a[i]-97]+1;
    for(i=0;i<l2;i++)
		d[b[i]-97]=d[b[i]-97]+1;
   for(i=0;i<26;i++)
   {
	   if(c[i]>0 && d[i]>0)
		  printf("%c",97+i);
   }
	  printf("\n");
  }
return 0;
}