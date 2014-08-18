#include <iostream>
using namespace std;

string a[200];
int ans[200][200], q[200 * 200 * 2], n, m, s;
int dx[] = {0 , 0 , 1 , -1}, dy[] = {1 , -1, 0 , 0};

void bfs()
{
	for(int i=0;i<s;i+=2)
	{
		int cx=q[i];
		int cy=q[i+1];
		for(int j=0;j<4;j++)
		{
			int xx=cx+dx[j];
			int yy=cy+dy[j];
			if(xx < 0 || yy < 0 || xx >= n || yy >= m || ans[xx][yy] != -1) continue;
            ans[xx][yy] = ans[cx][cy] + 1;
            q[s++] = xx;
            q[s++] = yy;
		}
	}
	for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < m; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}
int main()
{
long long t;
cin>>t;
while(t--)
{
	memset(ans, 255, sizeof ans);
	s=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='1')
			{
				ans[i][j]=0;
				q[s++]=i;
				q[s++]=j;
			}
		}
	}
	bfs();
}
}
