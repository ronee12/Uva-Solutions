#include<stdio.h>
#include<string.h>
int main()
{
	char a[102],c[2];
	long i,l,k;
	while(scanf("%s %s",c,a)!=EOF)
	{
		if(c[0]=='0'&&a[0]=='0')
			break;
		k=0;
	  l=strlen(a);
	  for(i=0;i<l;i++)
		  if(a[i]!=c[0]&&a[i]!='0')
		  {
			  k=1;
			  printf("%c",a[i]);
		  }
		  if(k==0)
			  printf("0");
		  printf("\n");
	}
  return 0;
}