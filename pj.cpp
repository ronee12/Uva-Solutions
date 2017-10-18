#include<stdio.h>
int main()
{
int x;
float r,p,z,y;
r=0.5;
scanf("%d%d",&x,&y);
if(y-.5>=x)
{
if(x%5==0)
{
p=(x+r);
z=(y-p);
printf("%.2f\n",z);
}
else
printf("%.2f\n",y);
return(0);
}
}