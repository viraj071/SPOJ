#include <cstdlib>
#include <queue>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int vis[1001][1001], id;
char ch[1001][1001];
int x, y, ma = 0, length = 0, n, m;
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

void dfs(int a,int b)
{
	vis[a][b]=id;
	length++;
	if(length>ma)
	{
		x=a;
		y=b;
		ma=length;
	}
	for(int j=0;j<4;j++)
	{
		int cx = a + dx[j];
        int cy = b + dy[j];
        if(cx < 0 || cy < 0 || cx >= n || cy >= m || ch[cx][cy] == '#' || vis[cx][cy]) continue;
        dfs(cx, cy);
	}
	vis[a][b] = 0;
    length --;	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&n);
		for(int i=0;i<n;i++)
		{
			cin>>ch[i];
		}
		id++;
		length=0;ma=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(ch[i][j]!='#')
				{
					dfs(i,j);
					i=n;
					break;
				}
			}	
		}
		id++;
		length = 0; ma = 0;
        dfs(x, y);
        printf("Maximum rope length is %d.\n", ma - 1);
	}
}
