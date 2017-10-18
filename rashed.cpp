#include<stdio.h>
int main()
{
int i,x=0,a,b;
printf("Enter the first and second value:");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2!=0)
x=x+i;
}
printf("%d",x);
return 0;
}