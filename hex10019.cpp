#include<stdio.h>
#include<math.h>
int main()
{

	int n,x,c,m,b,d,y,j,z,i;
	scanf("%d",&z);
	for(i=0;i<z;i++)
	{
		c=0,b=0,d=0,j=0;
	scanf("%d",&n);
	m=n;
		while(n!=0)
		{
		x=n%2;
		n=n/2;
		if(x==1)
			c=c+1;
		}
		printf("%d ",c);
        while(m!=0)
		{
		y=m%10;
		m=m/10;
		d=d+(y*pow(16,b));
			b=b+1;
		}
		while(d!=0)
		{
		x=d%2;
		d=d/2;
		if(x==1)
			j=j+1;
		}
        printf("%d\n",j);
	}
return 0;
}