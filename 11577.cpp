#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[5000];
	int i,t,l,x,xx=0;
	scanf("%d",&xx);
	getchar();
	for(t=0;t<xx;t++)
	{
		char aa[1000]={0};
		int c[50]={0};
	  gets(a);
	  l=strlen(a);
	  for(i=0;i<l;i++)
		  if(isupper(a[i]))
		  a[i]=a[i]+32;
	  for(i=0;i<l;i++)
	  {
	    c[a[i]-97]=c[a[i]-97]+1;
	  }
	  x=c[0];
	  for(i=0;i<26;i++)
		  if(x<c[i])
			  x=c[i];
		int  j=0;
		  for(i=0;i<26;i++)
			  if(c[i]==x)
			  {
				  aa[j]=i+97;
				j=j+1;
			  }
				for(i=0;i<j;i++)
				  printf("%c",aa[i]);
				printf("\n");
	}
return 0;
}