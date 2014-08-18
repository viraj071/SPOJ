#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <list>

#define INF 0.0
using namespace std;

int main(){
	while(true){
		int n,m;
		scanf("%d",&n);
		if(n==0)
			break;
		scanf("%d",&m);
		double dp[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				dp[i][j]=INF;
			}
		}
		while(m--){
			int x,y,v;
			scanf("%d%d%d",&x,&y,&v);
			dp[x-1][y-1]=v/100.0;
			dp[y-1][x-1]=v/100.0;
		}
		double ans[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				ans[i][j]=dp[i][j];
			}
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}*/
		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i==j||i==k||j==k)continue;
					if (ans[i][k] * ans[k][j] > ans[i][j]){
						ans[i][j] = ans[i][k] * ans[k][j];
					}
				}
			}
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}*/
		printf("%.6lf percent\n",ans[0][n-1]*100.0);
	}
	return 0;
}
