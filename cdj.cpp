#include<stdio.h>
int main()
{
	int a[10]={0},r,i,max=1;
	long int n,c=0;
		scanf("%ld",&n);
	while(n!=0)
	{
		c=c+1;
		r=n%10;
	n=n/10;
     if(r==0)
		 a[0]=a[0]+1;
	 else if(r==1)
		 a[1]=a[1]+1;
     else if(r==2)
		 a[2]=a[2]+1;
     else if(r==3)
		 a[3]=a[3]+1;
	 else if(r==4)
		 a[4]=a[4]+1;
	 else if(r==5)
		 a[5]=a[5]+1;
	 else if(r==6)
		 a[6]=a[6]+1;
	 else if(r==7)
		 a[7]=a[7]+1;
     else if(r==8)
		 a[8]=a[8]+1;
	 else if(r==9)
		 a[9]=a[9]+1;
	}
	printf("%ld\n",c);
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
	for(i=0;i<10;i++)
	{
	if(max<a[i])
		max=a[i];
	}
	printf("%d\n",max);
return(0);
}