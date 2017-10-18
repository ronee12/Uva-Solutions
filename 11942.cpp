#include<stdio.h>
#include<math.h>
int main()
{
	int i,t,a[20],j,k,c;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		c=0;
	  for(i=0;i<10;i++)
		  scanf("%d",&a[i]);
	  if(k==0)
		  printf("Lumberjacks:\n");
	  if(a[0]>a[1])
	  {
	     for(i=0;i<9;i++)
               for(j=0;j<9;j++)
				   if(a[j]<a[j+1])
					   c=1;
	  }
	  else
      {
	     for(i=0;i<9;i++)
               for(j=0;j<9;j++)
				   if(a[j]>a[j+1])
					   c=1;
	  }
	  if(c==0)
		  printf("Ordered\n");
	  else
		  printf("Unordered\n");
	}
return 0;
}