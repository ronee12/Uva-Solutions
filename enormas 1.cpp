#include<stdio.h>
#include<conio.h>
void main()
{
	int n,k,i,c=0,a[10];
	scanf("%d%d",&n,&k);
	if(k<=10000000)
	{
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%k==0)
c=c+1;
}
printf("%d",c);
}
}