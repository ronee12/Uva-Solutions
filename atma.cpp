#include<stdio.h>
int main()
{
 int x;
 float z,y;
 scanf("%d%f",&x,&y);
 if(y-.5>=x)
 {
    if(x%5==0)
	{
       z=y-x-.5;
       printf("%.2f\n",z);
	}
    else
    printf("%.2f\n",y);
 }
 else
   printf("%.2f\n",y);
return(0);
} 