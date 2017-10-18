#include<stdio.h>
int main()
{
	int array,i,j,x=0,tax$,$;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
		x+=(i+j-1);
		printf("%d ",x);
		}
	}
		printf("\nx=%d",x);
return 0;
}