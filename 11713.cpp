#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
		int t,tt,l1,l2,c,i;
		scanf("%d",&t);
	for(tt=0;tt<t;tt++)
	{
		c=0;
	   scanf("%s%s",a,b);
	   l1=strlen(a);
	   l2=strlen(b);
	   if(l1==l2)
	   {
	      for(i=0;i<l1;i++)
		  {
		       if(a[i]!=b[i])
			   {
				   if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
					   c=c+0;
				   else
					   c=c+1;
                   if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
					   c=c+0;
				   else
					   c=c+1;
			   }
		  }
		  if(c==0)
			  printf("Yes\n");
		  else
            printf("No\n");
	   }
	   else
		   printf("No\n");
	}
return 0;
}