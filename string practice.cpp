#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100];
while(scanf("%s",a)!=EOF)
{
		int i,l,m1=0,m2=0,m3=0,m4=0,bb1=0,cc1=0,dd1=0,ee1=0;
	char cc[100]={0},x[2]={0},bb[100]={0},dd[100]={0},ee[100]={0};
	l=strlen(a);
		for(i=0;i<l;i++)
		{
		if(isupper(a[i]))
		{
			x[0]=a[i];
			strcat(bb,x);
			bb1=bb1+1;
		}
		else if(islower(a[i]))
		{
			x[0]=a[i];
			strcat(cc,x);
			cc1=cc1+1;
		}
		else if(isdigit(a[i]))
		{
			x[0]=a[i];
			strcat(dd,x);
			dd1=dd1+1;
		}
		else
		{
			x[0]=a[i];
			strcat(ee,x);
			ee1=ee1+1;
		}
		}
	
			printf("%s = %d\n",bb,bb1);
			printf("%s = %d\n",cc,cc1);
			printf("%s = %d\n",dd,dd1);
			printf("%s = %d\n",ee,ee1);
}
return 0;
}