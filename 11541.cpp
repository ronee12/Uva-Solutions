#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char a[1000],c[2];
	long i,l,s,n,j,p=1;
	scanf("%ld",&n);
	for(p=1;p<=n;p++)
	{
	   scanf("%s",a);
	  l= strlen(a);
	  printf("Case %ld: ",p);
	  for(i=0;i<l;i++)
	  {
	    if(isalpha(a[i]))
		{
			c[0]=a[i];
			s=0;
			i++;
		  while(isdigit(a[i]))
		  {
		    s=s*10+a[i]-48;
			i++;
			if(i==l)
				break;
		  }
		 // printf("%d\n",s);
		  for(j=0;j<s;j++)
			  printf("%c",c[0]);
		  i--;
		}
	  }
	  printf("\n");
	}
return 0;
}