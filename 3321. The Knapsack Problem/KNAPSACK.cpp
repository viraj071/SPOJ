#include <cstdio>
#include <algorithm>

using namespace std;

int maxw,items,wt[2002],val[2002];
int knapsack(int items,int weight[],int value[],int maxw)
{
	int dp[items+1][maxw+1];
	for(int i=0;i<=maxw;i++)
	{
		dp[0][i]=0;
	}
	for(int i=0;i<=items;i++)
	{
		dp[i][0]=0;
	}
	for(int i=1;i<=items;i++)
	{
		for(int j=0;j<=maxw;j++)
		{
			dp[i][j]=dp[i-1][j];
			if(j-weight[i]>=0)
			{
				dp[i][j]=max(dp[i][j],dp[i-1][j-weight[i]]+value[i]);
			}
		}
	}
	return dp[items][maxw];
}

int main()
{
	int r;
	scanf("%d%d",&maxw,&items);
	for(int i=1;i<=items;i++)
	{
		scanf("%d%d",&wt[i],&val[i]);
	}
	r=knapsack(items,wt,val,maxw);
	printf("%d\n",r);
}
