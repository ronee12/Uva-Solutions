#include<stdio.h>
#include<math.h>
int main()
{
	int a[]={31,28,31,30,31,30,31,31,30,31,30,31},r,t,i,j,m,n,s;
      scanf("%d",&t);
	  for(j=0;j<t;j++)
	  {
		  s=0;
	    scanf("%d %d",&m,&n);
		for(i=0;i<m-1;i++)
			s=s+a[i];
		s=s+n;
		r=s%7;
		if(r==0)
			printf("Friday\n");
		else if(r==1)
			printf("Saturday\n");
	    	else if(r==2)
			printf("Sunday\n");
				else if(r==3)
			printf("Monday\n");
					else if(r==4)
			printf("Tuesday\n");
						else if(r==5)
			printf("Wednesday\n");
							else if(r==6)
			printf("Thursday\n");
	  }
return 0;
}