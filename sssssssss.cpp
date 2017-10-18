#include<stdio.h>
int main()
{
	int i,j,k,x,a[1000];
	for(i=0; i<6;i++)
		scanf("%d",&a[i]);
	for(j=0; J<5; j++)
		for(k=0; k<5; k++)
			if(a[k]>a[k+1])
			{
				x=a[k];
				a[k]=a[k+1];
				a[k+1]=x;
			}
			printf("%d",a[3]);
return 0;
}