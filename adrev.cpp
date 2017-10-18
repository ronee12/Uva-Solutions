#include<stdio.h>
#include<string.h>
int main()
{
	long int n,k,m;
	scanf("%ld",&n);
	for(k=0;k<n;k++)
	{
	char b[2002]={0},c[2002]={0};
    long int a[2002]={0},d[2002]={0},x[2002]={0},n1,n2,i,temp,j,t;
	m=0;
	scanf("%s%s",b,c);
	n1=strlen(b);
	n2=strlen(c);
	for(i=0;i<n1;i++)
		a[i]=b[i]-48;
	for(i=0;i<n2;i++)
		d[i]=c[i]-48;
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
		if(x[j]>0)
			for(;j<t;j++)
		printf("%ld",x[j]);
	 printf("\n");
	}
return 0;
}