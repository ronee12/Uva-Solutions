#include<stdio.h>
int main()
{
	int m,n,i,j,a[9]={0},b[9]={0},k,c,d,l,e,f=0;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(m==0&&n==0)
			break;
		d=0,i=0,j=0,c=0,e=0,f=0;
     while(m!=0)
	 {
        a[i]=m%10;
        m=m/10;
        i=i+1;
        e=e+1;
	 }
     while(n!=0)
	 {
         b[j]=n%10;
         n=n/10;
         j=j+1;
		 f=f+1;
	 }
	 if(f>e)
		 e=f;
     for(k=0;k<e;k++)
	 {
          l=a[k]+b[k]+c;
       if(l/10==1)
	   {
           c=1;
           d=d+1;
	   }
       else
         c=0;
	 }
if(d==0)
printf("No carry operation.\n");
else if(d==1)
printf("1 carry operation.\n");
else
printf("%d carry operations.\n",d);
	}
return 0;
}