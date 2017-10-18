#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	char a[100],b[100];
	int a1[100]={0},b1[100]={0},sum[100]={0},len,lena,lenb,i,cary=0,r;
	scanf("%s%d",a,&r);
		lena=strlen(a);
	for(i=lena;i>0;i--)
		a1[lena-i]=a[i-1]-48;
	for(i=0;i<lena;i++)
	{
		cary=a1[i]*r+cary;
		a1[i]=cary%10;
		cary=cary/10;
	}
	if(cary>0)
		a1[i]=cary;
	for(i=lena;i>=0;i--)
		printf("%d",a1[i]);
	return 0;
}