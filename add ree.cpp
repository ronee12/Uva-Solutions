#include<stdio.h>
int main()
{
	char s[10]={0};
	int m,n,a[10],b[10],i=0,c=0,d=0,j=0,l,k,x[10]={0},y[10]={0},z,r=0,w,e;
		scanf("%d%d",&m,&n);
	while(m!=0)
	{
	a[i]=m%10;
	m=m/10;
	i=i+1;
	c=c+1;
	}
	while(n!=0)
	{
	b[j]=n%10;
	n=n/10;
	j=j+1;
	d=d+1;
	}
	l=c-1;
	k=d-1;
	for(i=0;i<c;i++)
	{
		x[i]=a[l];
		l=l-1;
	//	printf("%d",x[i]);
	}
	for(i=0;i<d;i++)
	{
		y[i]=b[k];
		k=k-1;
	//	printf("%d",y[i]);
	}
	if(c<d)
		c=d;
	z=c-1;
	for(i=0;i<c;i++)
	{
	s[i]=x[i]+y[i]+r;
	//printf("%d",s[i]);
	r=0;
	if(s[z]>9)
	c=c+1;
    e=c;
	if(s[i]>9)
	{
	s[i]=s[i]%10;
	r=1;
	}
	}
	for(w=0;w<e;w++)
		printf("%d",s[w]);
return 0;
}