#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int m=0,t;
   //scanf("%d",&t);
    while(scanf("%d",&t))
	{
	char a[100];
	int b[100],total=0,j,l,i,x=1,	z=0;;
//while(scanf("%[^\n]",a))
	gets(a);
		total=0;
		if(z==t)
			break;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]=='a' || a[i]=='d' || a[i]=='g' || a[i]=='j' || a[i]=='m' || a[i]=='p' || a[i]=='t' || a[i]=='w')
			b[i]=1;
		else if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x')
			b[i]=2;
		else if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y')
			b[i]=3;
		else if(a[i]=='s'|| a[i]=='z')
			b[i]=4;
		else if(a[i]==' ')
			b[i]=1;
	}
	for(j=0;j<l;j++)
		total=total+b[j];
	printf("Case #%d: %d\n",x,total);
	x=x+1;
//	m=m+1;
	z=z+1;
	}
return 0;
}
