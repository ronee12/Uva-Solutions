#include<stdio.h>
int main()
{
	long int p,t;
	scanf("%ld",&t);
	for(p=0;p<t;p++)
	{
	int i,j,k,x=0,a[20000],b[20000],c[20000],m,count=0,n;

	scanf("%d%d",&n,&m);
		for(i=n;i<=m;i++)
		{
		  for(j=n;j<=m;j++)
		  {
		    for(k=n;k<=m;k++)
			{
			  
			  if(i+j>k&&i+k>j&&j+k>i)
			  {
				  a[x]=i;
				  b[x]=j;
				  c[x]=k;
				  x=x+1;
			  }
			}
		  }
		}
		
		printf("%d\n",x);
		int temp,u,i1,u1;
		count=x;
		for(i=0;i<count;i++)
		{
			if(a[i]>b[i])
			{
				temp=a[i];
				a[i]=b[i];
				b[i]=temp;
			}
			if(b[i]>c[i])
			{
				temp=b[i];
				b[i]=c[i];
				c[i]=temp;
			}
			if(a[i]>b[i])
			{
				temp=a[i];
				a[i]=b[i];
				b[i]=temp;
			}
			//printf("dfdsfdsf");
			
		}
		//printf("dfdsfdsf");

		for(i=0;i<count;i++)
			for(j=0;j<count-1;j++)
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;

					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;

					temp=c[j];
					c[j]=c[j+1];
					c[j+1]=temp;
				}

				for(k=0;k<count;k++)
				{
					u=k;
					while(a[k]==a[u])
						u=u+1;
				for(i=k;i<u;i++)
					for(j=k;j<u-1;j++)
						if(b[j]>b[j+1])
						{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;

					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;

					temp=c[j];
					c[j]=c[j+1];
					c[j+1]=temp;
						}
						for(i1=k;i1<u;i1++)
						{
							u1=i1;
							while(b[i1]==b[u1])
								u1=u1+1;
							for(i=i1;i<u1;i++)
								for(j=i1;j<u1-1;j++)
									if(c[j]>c[j+1])
									{
										temp=a[j];
										a[j]=a[j+1];
										a[j+1]=temp;
										temp=b[j];
										b[j]=b[j+1];
										b[j+1]=temp;
										temp=c[j];
										c[j]=c[j+1];
										c[j+1]=temp;
									}
									i1=u1-1;
						}
						k=u-1;
				}
				j=0;
				
				for(i=0;i<count;i++)
				{
					
					if(a[i]+b[i]>c[i])
					j=j+1;
					
					if(a[i]==a[i+1]&&b[i]==b[i+1]&&c[i]==c[i+1]&&i<count)
					{
					while(a[i]==a[i+1]&&b[i]==b[i+1]&&c[i]==c[i+1]&&i<count)
						i=i+1;
					//i=i-1;
					}
					//i=i-1;
				}
					printf("%d\n",j);
					}
		//printf("%d",count);
return 0;
}