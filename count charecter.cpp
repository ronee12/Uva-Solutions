#include<stdio.h>
#include<string.h>
int main()
{
	int r,rs;
	scanf("%d",&rs);
	for(r=1;r<rs+1;r++)
	{
	char a[30];
 long int b[30]={0},i,l,j,x[100],fm=1,tot=1,q=2,ans;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
		b[a[i]-64]=b[a[i]-64]+1;
	for(i=1;i<l+1;i++)
		tot=tot*i;
	for(j=0;j<27;j++)
	{
	x[j]=1;
    for(i=1;i<(b[j]+1);i++)
       x[j]=x[j]*i;
	fm=fm*x[j];

	}
	ans=tot/fm;
	printf("Data set %d: %ld\n",r,ans);
	}
return 0;
}