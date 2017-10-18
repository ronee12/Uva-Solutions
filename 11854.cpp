#include<stdio.h>
int main()
{
int a,b,c,x,y,i;
printf("Enter the number:");
for(i=0;i<3;i++)
{
	scanf("%d%d%d",&a,&b,&c);
	x=a*a+b*b;
	y=c*c;
	if(x==y)
		printf("right");
	else 
		printf("wrong");
}
return 0;
}