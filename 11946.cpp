#include<stdio.h>
#include<string.h>
int main()
{
	int t,j;
	scanf("%d",&t);
	getchar();
	for(j=0;j<t;j++)
	{
		if(j>0)
			printf("\n");
	char a[101];
	int i,l;
	while(gets(a))
	{
	l=strlen(a);
	if(l==0)
		break;
	for(i=0;i<l;i++)
	{
		if(a[i]=='1')
			printf("I");
		else if(a[i]=='2')
			printf("Z");
		else if(a[i]=='3')
			printf("E");
		else if(a[i]=='4')
			printf("A");
		else if(a[i]=='5')
			printf("S");
		else if(a[i]=='6')
			printf("G");
		else if(a[i]=='7')
			printf("T");
		else if(a[i]=='8')
			printf("B");
		else if(a[i]=='9')
			printf("P");
		else if(a[i]=='0')
			printf("O");
		else
			printf("%c",a[i]);
	
	}
		printf("\n");
	}
	}
return 0;
}