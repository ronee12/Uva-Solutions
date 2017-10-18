#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n,t;
	float c;
	scanf("%d",&t);
	for(n=0;n<t+1;n++)
	{
	int l,b,j,i,m;
	char a[10000]={0};
    gets(a);
	l=strlen(a);
	b=sqrt(l);

	c=sqrt(l);
    if(b==c)
	{
	if(n>0)
	for(j=0;j<b;j++)
	{
		m=0;
	for(i=0;i<b;i++)
	{
		printf("%c",a[j+m]);
		m=m+b;
	}
	}
	}
	else
		printf("INVALID");
	if(n>0)
	printf("\n");
	}
return 0;
}