#include<stdio.h>
#include<string.h>
int main()
{
	int i,k,j,m;
	while(scanf("%d",&m)!=EOF)
	{
			char name[100][100]={0},temp[10]={0};
	for(i=0;i<m;i++)
		scanf("%s",name[i]);
	for(i=0;i<m-1;i++)
		for(j=0;j<m-1;j++)
		{
		   k=strcmp(name[j],name[j+1]);
    	   if(k>0)
		   {
			   strcpy(temp,name[j]);
		       strcpy(name[j],name[j+1]);
			   strcpy(name[j+1],temp);
		   }
		}
		for(i=0;i<m;i++)
           printf("%s\n",name[i]);
	}
return 0;
}