#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int vis[28][28],q[28*28*2],a[8][2];
int dx[]={2,2,-2,-2,1,-1,1,-1}, dy[]={1 ,-1,1,-1,2,2,-2,-2};
int x,y,s,temp,min1,min2;
void bfs()
{
	for(int i=0;i<s;i+=2)
	{
		memset(a,28,sizeof(a));
		int cx=q[i];
		int cy=q[i+1];
		for(int j=0;j<8;j++)
		{
			int xx=cx+dx[j];
			int yy=cy+dy[j];
			if(xx<1||xx>y||yy<1||yy>x||vis[xx][yy]==1)
			{
				a[j][0]=28;
				a[j][1]=28;
				continue;
			}
			a[j][0]=xx;
			a[j][1]=yy;
		}
		min1=a[0][0];
		min2=a[0][1];
		for(int k=0;k<7;k++)
		{
			for(int l=k+1;l<=7;l++)
			{
				if(a[k][0]==a[l][0])
				{
					if(a[k][1]>a[l][1])
					{
						temp=a[l][1];
						a[l][1]=a[k][1];
						a[k][1]=temp;
						temp=a[l][0];
						a[l][0]=a[k][0];
						a[k][0]=temp;
					}
				}
				if(a[k][0]>a[l][0])
				{
						temp=a[l][1];
						a[l][1]=a[k][1];
						a[k][1]=temp;
						temp=a[l][0];
						a[l][0]=a[k][0];
						a[k][0]=temp;
				}
			}
		}
		for(int z=0;z<8;z++)
		{
			if(vis[a[z][0]][a[z][1]]==0)
			{
				vis[a[z][0]][a[z][1]]=1;
				q[s++]=a[z][0];
				q[s++]=a[z][1];
				cout<<(char)(a[z][0]+64)<<a[z][1];
				break;
			}
		}
	}
	cout<<endl;
}
int main()
{
	int t;
	memset(vis,0,sizeof(vis));
	scanf("%d",&t);
	while(t--)
	{
		s=0;
		scanf("%d%d",&x,&y);
		q[s++]=1;
		q[s++]=1;
		vis[1][1]=1;
		cout<<"A1";
		bfs();	
	}
}
