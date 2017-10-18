#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define siz 1000002
#define sez 2001
int main()
{

long int *a,k,v,i,m,n;
	a=(long*)malloc(siz*sizeof(long));
while(scanf("%ld%ld",&m,&n)!=EOF)
{

    long (*d)[sez];
		d = (long (*)[sez]) malloc(sizeof(long) * siz * sez);
		   long *c={0};
		c=(long*)malloc(siz*sizeof(long));

for(i=1;i<=m;i++)
{
scanf("%ld",&a[i]);
c[a[i]]=c[a[i]]+1;
d[a[i]][c[a[i]]]=i;
}

for(i=0;i<n;i++)
{
	scanf("%ld%ld",&k,&v);
	printf("%ld\n",d[v][k]);
}
}
return 0;
}
