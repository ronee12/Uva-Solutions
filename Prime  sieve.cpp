#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define max 5000020
#define pr 348514
int main()
{
	long int k=0,j,i,l,u=0,m,j_k;
	char *prime;
	prime=(char*)malloc(max*sizeof(char));
	m=sqrt(max)+10;
	for(i=2;i<=m;i++)
	{
		if(prime[i]!=1)
		{
			j=i;
			while((j+i)<=max-2)
			{
				j=j+i;
				prime[j]=1;
			}
		}

	}

	while(scanf("%ld",&l)!=EOF)
	printf("%d\n",prime[l]);
	return 0;
}
