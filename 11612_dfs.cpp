#include<stdio.h>
#include<vector>

struct node
{
	int x;
	int y;
};
node nd[100];
void dfs(vector<int> v, int p,vector<int>link)
{	
	v.erase(
	v.insert(v.begin() + p,2);
	for(i=0;i<n;i++)
	{
		if(v[i]==0&&chak(p,i,link)!=0)
		{
			link.push_back(i);
			v[i]=1;
			dfs(v,i)
		}
	}
}

int chak(int p,int i,vector<int>link)
{
	int m=1;
	a1=nd[i].y-nd[p].y;
	b1=nd[p].x-nd[i].x;
	c1=a1*nd[p].x+b1*nd[p].y;
	for(j=1;j<link.size();j++)
	{
		a2=nd[j].y-nd[j-1].y;
		b2=nd[j-1].x-nd[j].x;
		c2=a2*nd[j-1].x+b2*nd[j-1].y;
		det=a1*b2-a2*b1;
		if(det!=0)
		{
			x=(b2*c1-b1*c2)/det;
			y=(a1*c2-a2*c1)/det;
			m=(x-nd[p].x)*(nd[p].y-nd[i].y)-(y-nd[p].y)*(nd[p].x-nd[i].x);
			if(m==0)
				break;
		}
	}
	return m;
}
