#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,j,l;
	scanf("%s",a);
	l=strlen(a);
	if(l==3)
     for(i=0;i<l;i++)
		 for(j=0;j<2;j++)
		 {
			 printf("%c",a[i]);
			  if(j==0)
			  {
			    if(i==0)
                     printf("%c%c",a[i+1],a[i+2]);
				else if(i==1)
					printf("%c%c",a[i-1],a[i+1]);
				else
					printf("%c%c",a[i-2],a[i-1]);
			  }
			  else
              {
			    if(i==0)
                     printf("%c%c",a[i+2],a[i+1]);
				else if(i==1)
					printf("%c%c",a[i+1],a[i-1]);
				else
					printf("%c%c",a[i-1],a[i-2]);
			  }
			  printf("\n");
		 }
	else if(l==4)
		
	 
return 0;
}