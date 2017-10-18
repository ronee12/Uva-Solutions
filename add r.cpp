#include<stdio.h>
#include<string.h>
int main()
{
	char b[1000]={0},c[1000]={0};
	int a[1000]={0},d[1000]={0},x[1000]={0},n1,n2,i,temp,j,t;
		scanf("%s%s",&b,&c);
	n1=strlen(b);
	n2=strlen(c);
	for(i=n1;i>0;i--)
		a[i-1]=b[i-1];
	for(i=n2;i>0;i--)
		d[i-1]=c[i-1];
	if(n1>n2)
		t=n1;
	else
		t=n2;
	i=0;
	temp=0;
	do
	{
	temp=a[i]+d[i]+temp;
    x[i]=temp%10;
    temp=temp/10;
	i=i+1;
	}
	while(i!=t);
	if(temp!=0)
	{
		x[i]=temp;
		t=t+1;
	}
	for(j=0;j<t;j++)
 	printf("%d",x[j]);
return 0;
}