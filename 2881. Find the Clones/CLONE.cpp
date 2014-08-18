#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>

using namespace std;

int main()
{
	string a;
	map<string, int> ma;
	int n,m,count;
	int z[20002];
	while(1)
	{
		memset(z,0,sizeof(z));
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(ma.find(a)==ma.end())
			{
					ma[a]=1;
					count=1;
					z[count]++;
			}
			else
			{
				z[ma[a]]-=1;
				ma[a]=ma[a]+1;
				count=ma[a];
				z[count]++;
			}
		}
		for(int i=1;i<=n;i++)
		{
			printf("%d\n",z[i]);
		}
	}
}

