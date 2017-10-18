#include<stdio.h>
#include<math.h>
long main()
{
	long i,n,k,p,max;
	scanf("%ld %ld",&n,&k);
	p=k;
	  max=k;
	if(n==1)
	{
    
	while(k!=9)
	{
		k=pow(k,2);
	 if(k>9)
		 k=k/10;
	 if(k>max)
		 max=k;
	 if(k==p||k==1)
		 break;
	}
	printf("%ld\n",max);
	}
	else if(n==2)
	{
	     while(k!=99)
		 {
		   k=pow(k,2);
		   if(k>999)
		     k=k/100;
		   else if(k>99)
			   k=k/10;
		   if(k>max)
			   max=k;
		   if(k==p||k==1)
			   break;
		   
		 }
		 printf("%ld\n",max);
	}

return 0;
}