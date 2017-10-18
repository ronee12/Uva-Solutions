#include<stdio.h>
int main()
{
 int i,j,c=0,a[10],k;
 scanf("%d%d",&j,&k);
	 for(i=0;i<j;i++)
		 scanf("%d",&a[i]);
	 for(i=0;i<j;i++)
		 c=c+a[i];
     if(c%k==0)
		 printf("divisible\n ");
	 else
          printf("not divisible\n ");
		 return(0);
}