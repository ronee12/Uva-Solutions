#include<stdio.h>
int main()
{
	int d1,m,y;
	printf("Give date month and year.\n");
   while(scanf("%d%d%d",&d1,&m,&y)!=EOF)
   {
	   	int b,d=0,f,i,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
           	if((y%4)==0 )
			{
            	if(y%400==0)
                  a[1]=29;
            	else if(y%100==0)
	         	 a[1]=28;
	            else
                 a[1]=29;
			}
            	else
	        	a[1]=28;
	f=(y-1)/4;
	a[m-1]=d1;
	for(i=0;i<m;i++)
		d=d+a[i];
	b=(y+d+f)%7;
	if(b==0)
		printf("The day %d %d %d was  friday\n",d1,m,y);
    else if(b==1)
		printf("The day %d %d %d was  saturday\n",d1,m,y);
	else if(b==2)
		printf("The day %d %d %d was  sunday\n",d1,m,y);
	else if(b==3)
		printf("The day %d %d %d was  monday\n",d1,m,y);
	else if(b==4)
		printf("The day %d %d %d was  tuesday\n",d1,m,y);
	else if(b==5)
		printf("The day %d %d %d was  wednesday\n",d1,m,y);
	else
		printf("The day %d %d %d was  thrusday\n",d1,m,y);
	  printf("Give date month and year.\n");
   }
return 0;
}