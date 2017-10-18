#include<stdio.h>
int main()
{
	int j=0,a[4],n,x[10],y[10],b[10],m,ans1=0,i;
		for(i=0;i<4;i++)
		   scanf("%d",&a[i]);
		for(i=0;i<4;i++)
		{
			n=a[i];
			printf("%d\n",n);//string dia korte hobe  00 man rakse na
		while(n!=0)
		{
			y[j]=n%10;
		n=n/10;
		    x[j]=n%10;
		n=n/10;
		j=j+1;
		}
		}
		for(i=0;i<8;i++)
		{
		x[i]=x[i]*2;
		b[i]=x[i];
		if(x[i]>9)
		{
		while(x[i]!=0)
		{
		m=x[i]%10;
		x[i]=x[i]/10;
		b[i]=b[i]+m;
		}
		}
		ans1=ans1+b[i];
		}
		printf("%d",ans1);

return 0;
}