#include<stdio.h>
int main()
{
	long int x,y,z;
while(scanf("%ld%ld",&x,&y)!=EOF)
{

	if(x>y)
	z=x-y;
    else
    z=y-x;
	printf("%ld\n",z);
}
return(0);
}