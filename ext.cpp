#include<stdio.h>
int main()
{
long int a,b,c;
while(scanf("%ld%ld",&a,&b)!=EOF)
{
if(a>b)
{
c=a-b;
printf("%ld\n",c);
}
else
{
c=b-a;
printf("%ld\n",c);
}
}
return 0;
}