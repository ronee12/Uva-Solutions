#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int i,l,s,p,n;
	char a[100];
	while(scanf("%s",a)!=EOF)
	{
	  if(isdigit(a[0]))
	  {
	    l=strlen(a);
		s=0;
		for(i=0;i<l;i++)
			s=s*10+a[i]-48;
		n=s;
		p=n/1000;
		for(i=0;i<p;i++)
			printf("M");
		n=n%1000;
         p=n/100;
		 if(p==9)
			 printf("CM");
		 else if(p==8)
			 printf("DCCC");
          else if(p==7)
			  printf("DCC");
		  else if(p==6)
			  printf("DC");
		  else if(p==5)
			  printf("D");
		   else if(p==4)
			  printf("CD");
		    else if(p==3)
			  printf("CCC");
			 else if(p==2)
			  printf("CC");
			 else if(p==1)
				 printf("C");
		n=n%100;
		p=n/10;
         if(p==9)
			 printf("XC");
		 else if(p==8)
			 printf("LXXX");
          else if(p==7)
			  printf("LXX");
		  else if(p==6)
			  printf("LX");
		  else if(p==5)
			  printf("L");
		   else if(p==4)
			  printf("XL");
		    else if(p==3)
			  printf("XXX");
			 else if(p==2)
			  printf("XX");
			 else if(p==1)
				 printf("X");
			 n=n%10;
		p=n;
       if(p==9)
			 printf("IX");
		 else if(p==8)
			 printf("VIII");
          else if(p==7)
			  printf("VII");
		  else if(p==6)
			  printf("VI");
		  else if(p==5)
			  printf("V");
		   else if(p==4)
			  printf("IV");
		    else if(p==3)
			  printf("III");
			 else if(p==2)
			  printf("II");
			 else if(p==1)
				 printf("I");

		printf("\n");
	  }
	  else 
	  {
		 // printf("jjj");
	   l=strlen(a);
	 //  printf("%d",l);
	   s=0;
	 int  x=0;
	   for(i=l-1;i>=0;i--)
	   {
		   if(a[i]=='M')
			   p=1000;
		   else if(a[i]=='D')
			   p=500;
		   else if(a[i]=='C')
			   p=100;
		   else if(a[i]=='L')
			   p=50;
		   else if(a[i]=='X')
			   p=10;
		   else if(a[i]=='V')
			   p=5;
		   else 
			   p=1;
		 //  printf("%d %c\n",p,a[i]);
		   if(p>=x)
	          s=s+p;
		   else
			   s=s-p;
		   x=p;
		 //  printf("%d\n",s);
	   }
	   printf("%d\n",s);
	  }
	}
return 0;
}
