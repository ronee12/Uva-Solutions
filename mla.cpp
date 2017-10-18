#include<stdio.h>
int main()
{
 int i,c=0,a[1000],k,l,m;
 long int j;
 scanf("%d",&l);
 for(m=0;m<l;m++)
 {
	 scanf("%ld %d",&j,&k);
	 for(i=0;i<j;i++)
		 scanf("%d",&a[i]);
	 for(i=0;i<j;i++)
		 c=c+a[i];
     if(c%k==0)
		 printf("divisible\n");
	 else
          printf("not divisible\n ");
 }
		 return(0);
}