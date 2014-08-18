#include <cstdlib>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

bool vis[10001];
vector <int> v[10001];
int x, m = 0, length = 0;

void dfs(int k)
{
	if(vis[k])return;
	vis[k]=true;
	length++;
	for(int i=0;i<v[k].size();i++)
	{
		dfs(v[k][i]);
	}
	if(length>m)
	{
		x=k;
		m=length;
	}
	length--;
}

int main()
{
	int a,b;
	int n;
	cin>>n;
	for(int i=0;i<=n-2;i++)
	{
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	for(int i = 1; i <= n; i++)
        vis[i] = false;
    vis[x] = false;
    length = 0; m = 0;
    dfs(x);
	cout<<m-1<<endl;
}
