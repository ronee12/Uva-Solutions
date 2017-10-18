#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,k,c=0,a[10];
printf("enter n");
scanf("%d",&n);
printf("enter k");
scanf("%d",&k);
if(k<=10000000)
{
for(i=0;i<n;i++)
{
scanf("%d\n",&a[i]);

if(a[i]%k==0)
c=c+1;
}
printf("%d",c);
}
}