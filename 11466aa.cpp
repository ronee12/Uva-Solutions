#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//long 
long a[100000],c,flag[1000000];

void seive(int n)
{
  //long 
	  long k,i,j,r;
   k=sqrt(n);
   for(i=1;i<=n;i++)
      flag[i]=0;
   flag[1]=1;
   a[0]=2;
   c=1;
   for(i=4;i<=n;i+=2)
      flag[i]=1;
   for(i=3;i<=n;i+=2)
   {
      if(flag[i]==0)
      {
         a[c++]=i;
         if(k>=i)
         {
            r=i+i;
            for(j=i*i;j<=n;j+=r)
               flag[j]=1;
         }
      }
   }
   a[c]=0;
}

int main()
{
  //long 
	 long n,i,max,j;
  // seive(1000000);
   while(scanf("%lld",&n)==1&&n!=0)
   {
      j=0;
      max=0;
      if(n==1||n==-1)
      {
         printf("-1\n");
         continue;
      }
      //n=labs(n);

	  printf("%ld ",(n));
     /* for(i=0;i<c && n>=a[i];)
      {
         if(n%a[i]==0)
         {
            n=n/a[i];
            if(a[i]>max)
            {
               max=a[i];
               j++;
            }
         }
         else
         {
            i++;
         }
      }*/

     /* if(j==1)
         printf("-1\n");
      else printf("%lld\n",max);*/
   }
   return 0;
}