#include<stdio.h>
int main()
{
int n,p,r=0,i,l,t,k,a[31],q;
scanf("%d",&t);
for(l=0;l<t;l++)
{
int j=1;
scanf("%d%d%d",&n,&p,&q);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
         for(i=0;i<n;i++)
		 {
               k=a[i]+a[i+1];
        if(k>q)
          break;
         /* // if(j>=p)
        // break;*/
		    j=j+1;
		 }
		 if(j>p)
			 j=p;
r=r+1;
printf("Case %d: %d",r,j);
printf("\n");
}
return(0);
}