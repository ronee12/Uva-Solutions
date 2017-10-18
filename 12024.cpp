#include<stdio.h>
#include<math.h>
int main()
{
	long te,t,n;
	scanf("%ld",&te);
	for(t=0;t<te;t++)
	{
	  scanf("%ld",&n);
	  if(n==2)
		  printf("1/2\n");
	  else if(n==3)
		  printf("2/6\n");
	  else if(n==4)
		  printf("9/24\n");
	  else if(n==5)
		  printf("64/120\n");
	  else if(n==6)
		  printf("625/720\n");//2500
	  else if(n==7)
		  printf("7776/5040\n");//162000
	  else if(n==8)
	     printf("117649/40320\n");///26471025
	  else if(n==9)
	    printf("2097152/362880\n");///11014635520
	  else if(n==10)
	    printf("43046721/3628800\n");///11759522374656
	  else if(n==11)
		printf("1000000000/39916800\n");//////32406091200000000
	  else if(n==12)
	   printf("25937424601/479001600\n");////////231627686043080250000
	}
return 0;
}