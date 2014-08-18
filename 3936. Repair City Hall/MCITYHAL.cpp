#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
	char c[202][202];
	int m,n;
	scanf("%d%d",&m,&n);
	string s;
	for(int i=0;i<m;i++)
	{
		cin>>s;
		for(int j=0;j<n;j++)
		{
			c[i][j]=s[j];
		}
	}
	int z=m-1;
	int a;
	int h[2002];
		for(int j=1;j<=n;j++)
		{
			h[j]=0;
		}
	while(z>=0)
	{
		for(int i=0;i<n;i++)
		{
			int count=0;
			if(c[z][i]=='0')
			{	
				a=z;
				c[z][i]='1';
				count++;
				if(a>0)
				{
				while(c[a-1][i]=='0'&&a>0)
				{
					c[a-1][i]='1';
					count++;
					a--;
				}
				}
				h[count]=h[count]+1;
			}
		}
		z--;
	}
		for(int j=1;j<=n;j++)
		{
			if(h[j]!=0)
				printf("%d %d\n",j,h[j]);
		}
		return 0;
}
