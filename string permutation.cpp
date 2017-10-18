#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define siz 50001
#define sez 30
/*/char (*b)[sez];
//b = (char (*)[sez]) malloc(sizeof(char) * siz * sez);*/
char b[2000][22]={0};
int k=0;
void permute(char *str, const int strt, const int len) 
{
long int i = strt;
	long int j;
	char temp;
	for ( i = strt; i < len-1; ++i )
	{
		for ( j = i+1; j < len; ++j )
		{
			temp = str[i], str[i] = str[j], str[j] = temp;

			permute(str, i+1, len);

			temp = str[i], str[i] = str[j], str[j] = temp;
		}
	}
   
	strcpy(b[k],str);
	k++;

}

int main()
 {
	long int te,x;
	scanf("%ld",&te);
	getchar();
	for(x=0;x<te;x++)
	{
		k=0;
		if(x>0)
			getchar();
	long int i,l,p;
	char a[100]={0},temp[100]={0};
	char str[100]={0};
	gets(a);
	scanf("%ld",&p);
	l=strlen(a);
	strcpy(str,a);
long int j=0;
permute(str, 0, l);
      
	 for(i=0;i<k-1;i++)
		 for(j=0;j<k-1;j++)
			 if(strcmp(b[j],b[j+1])>0)
			 {
			   strcpy(temp,b[j]);
			   strcpy(b[j],b[j+1]);
			   strcpy(b[j+1],temp);
			 }
 for(i=0;i<k;i++)
		   printf("%s\n",b[i]);
         // printf("%s\n",b[p]);
	}
return 0;
}