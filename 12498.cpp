#include<stdio.h>
int main()
{
	long tc,tk;
	scanf("%ld",&tk);
	for(tc=1;tc<=tk;tc++)
	{
	long int n,m,i,j,k,l,c1,c2,s1,s2,ans=0,r;
	char a[55][55]={0};
	long an=1000000;
	scanf("%ld%ld",&n,&m);

	for(i=0;i<n;i++)
			scanf("%s",a[i]);

          int f=0;
	for(i=0;i<n;i++)
	{
	  int p=0;
		for(k=0;k<m;k++)
		{
		  if(a[i][k]=='0')
			  p=1;
		}
		if(p==0)
		{
			f=1;
		printf("Case %ld: -1\n",tc);
		break;
		}
	}
	if(f==1)
		continue;
		for(i=0;i<m;i++)
		{
			ans=0;
			for(j=0;j<n;j++)
			{
				k=i;c1=0;c2=0;s1=0;s2=0;
				while(k<m)
				{
					if(a[j][k]=='0')
					{
						s1=1;
						break;
					}
					k++;
					c1++;
				}
			//	printf("%d %d %d\n",s1,k,c1);
				l=i;
				while(l>=0)
				{
					if(a[j][l]=='0')
					{
						s2=1;
						break;
					}
					l--;
					c2++;
				}
			//	printf("%d %d %d\n",s1,l,c1);
				if(s1==1&&s2==1&&c1<c2)
					r=c1;
				else if(s1==1&&s2==1&&c1>=c2)
					r=c2;
				else if(s1==1)
					r=c1;
				else if(s2==1)
					r=c2;
				
                ans=ans+r;
			//	printf("%d %d\n",r,ans);
			}
			if(ans<an)
				an=ans;
			//	printf("%d\n",an);
		}
		printf("Case %ld: %ld\n",tc,an);
	}
	return 0;
}