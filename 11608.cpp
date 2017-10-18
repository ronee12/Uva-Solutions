#include<stdio.h>
int main()
{
int p,i,a[20],b[20],x=1;;
 while(scanf("%d",&p)!=EOF)
 {
	 if(p<0)
		 break;
	 a[0]=0;
for(i=1;i<=12;i++)
   scanf("%d",&a[i]);
for(i=0;i<12;i++)
   scanf("%d",&b[i]);
printf("Case %d:\n",x);
x=x+1;
for(i=0;i<12;i++)
{
		p=p+a[i];
   if(p>=b[i])
   {
      printf("No problem! :D\n");
      p=p-b[i];
   }
   else
	   printf("No problem. :(\n");
}

 }
return 0;
}