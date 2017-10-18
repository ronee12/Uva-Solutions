#include<stdio.h>
int main()
{
	int i,t;
	float a,b,c,d,f[4];
	float y,ans;
	scanf("%d",&t);
	for(i=1;i<t+1;i++)
	{
		scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&f[0],&f[1],&f[2]);
	/*	for(x=0;x<2;x++)
			for(j=0;j<2;j++)
				if(f[j]>f[j+1])
				{
				temp=f[j];
				f[j]=f[j+1];
				f[j+1]=temp;
				}*/
	if(f[0]==f[1] && f[1]==f[2])
		y=f[1];
	else
	{
	  if(f[0]<=f[1] && f[0]<=f[2])
	  {
	      y=(f[1]+f[2])/2;
	  }
	  else if(f[1]<=f[0] && f[1]<=f[2])
	  {
	     y=(f[0]+f[2])/2;
	  }
	  else
	  {
	     y=(f[0]+f[1])/2;
	  }
	}
				/*y=(f[1]+f[2])/2;*/
	ans=a+b+c+d+y;
	if(ans>=90)
		printf("Case %d: A\n",i);
	else if(ans>=80 && ans<90)
		printf("Case %d: B\n",i);
	else if(ans>=70 && ans<80)
		printf("Case %d: C\n",i);
	else if(ans>=60 && ans<70)
		printf("Case %d: D\n",i);
		else if(ans<60)
	printf("Case %d: F\n",i);
	}
return 0;
}