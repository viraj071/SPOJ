#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <cstdio>
#define f(i, n) for(int i = 0; i < n; i++)
#define s(n) scanf("%d", &n)
#define inf (int)1e9
using namespace std;

int main()
{
	vector<int> v[101];
	bool vis[101];
	int n, m;
	int aa, k, temp, p = 0;
	while(s(n)!=-1)
	{
		s(m);
		f(i,m)
		{
			s(aa);s(k);
			p=0;
			while(k--)
			{
				s(temp);
				v[aa].push_back(temp);
			}
		}
		memset(vis,0,sizeof(vis));
		f(k,n)
		{
			for(int i=1;i<=n;i++)
			{
				int ct=0;
				if(vis[i])continue;
				f(j,v[i].size())
				{	
					if(!vis[v[i][j]])
					{
						ct++;
					}
				}
				if(ct==0)
				{
					vis[i]=true;
					printf("%d ",i);
					break;
				}	
			}
		}
		printf("\n");
	}
}
