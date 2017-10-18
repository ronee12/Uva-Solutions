#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
for (int i=2; i<=(int) sqrt(n); i++)
if (n%i == 0) 
return 0;
return 1;
}
int main()
{
 int i,count=0,x,c=0,a[100000],m=0,t;
 scanf("%d",&x);
 for(i=2;i<=x;i++)
 {
	// count=count+is_prime(i);
	 if(is_prime(i)==1)
	 {
		 c=c+1;
	    // printf("%d ",i);
        a[m]=i;
		 m=m+1;
	 }
 }
 printf("%d\n",c);
 for(t=0;t<m;t++)
printf("%ld ",a[t]);
 return 0;
}