#include<stdio.h>
#include<string.h>
int main()
{
	char a[100][100];
	long i,max,d[100],t,te;
	scanf("%ld",&t);
	for(te=1;te<=t;te++)
	{
		max=0;
	  for(i=0;i<10;i++)
	  {
		  scanf("%s %ld",a[i],&d[i]);
		  if(d[i]>max)
			  max=d[i];
	  }
	  printf("Case #%ld:\n",te);
	  for(i=0;i<10;i++)
	  {
	    if(d[i]==max)
			printf("%s\n",a[i]);
	  }
	   
	}
return 0;
}