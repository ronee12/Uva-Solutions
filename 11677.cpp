#include<stdio.h>
#include<math.h>
int main()
{
   int m1,m2,h1,h2,m,h,ans;
  while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=EOF)
 {
	  if(h1==0&&h2==0&&m1==0&&m2==0)
		  break;
   if(m2<m1)
   {
     m2=m2+60;
	 h1=h1+1;
   }
   if(h2<h1)
   {
    h2=h2+24;
   }
   m=m2-m1;
   h=h2-h1;
   ans=h*60+m;
   printf("%d\n",ans);
 }
return 0;
}