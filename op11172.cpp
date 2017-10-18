#include<stdio.h>
int main()
{
	int a,b,i,c;
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		scanf("%d%d",&a,&b);
	if(a>b)
		printf(">\n");
	else if(a<b)
		printf("<\n");
	else
		printf("=\n");
	}
return 0;
}