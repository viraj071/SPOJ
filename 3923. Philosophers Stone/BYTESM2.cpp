#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int t,h,m,a[110][110],max1;

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		scanf("%d%d",&h,&m);
		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=h-1;i>0;i--)
		{
			for(int j=1;j<=m;j++)
			{
				max1=0;
				max1=max(max1,a[i+1][j-1]);
				max1=max(max1,a[i+1][j+1]);
				max1=max(max1,a[i+1][j]);
				a[i][j]+=max1;
			}
		}
		max1=0;
		for(int j=1;j<=m;j++)
		{
			max1=max(max1,a[1][j]);
		}
		printf("%d\n",max1);
	}
}
