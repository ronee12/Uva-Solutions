#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%400==0)
         printf("This is leap year.\n");
    else if((n%4)==0 )
	{
	//if(n%400==0)
      //   printf("This is leap year.\n");
    if(n%100==0)
		printf("This is not leap year.\n");
	else
         printf("This is leap year.\n");
	}
	else
		printf("This is not leap year.\n");
return 0;
}