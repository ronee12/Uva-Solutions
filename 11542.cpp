#include<stdio.h>
int main()
{
	int n,a[100],j,p,i;
	scanf("%d",&n);
		for(i=0;i<n;i++)
         scanf("%d",&a[i]);
         p=n;
		for(j=0;j<n;j++)
			{
		        for(i=0;i<p;i++)
				{
		           printf("%d ",a[j+i]);
				}
		        p=p-1;
			}
return 0;
}