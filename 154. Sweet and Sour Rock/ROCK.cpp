#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <list>

using namespace std;
int dp[201][201];
int freq[201][201];
int n;

int calculate(int i,int j){
	if(i==j)return dp[i][i];
	if(dp[i][j]!=-1)return dp[i][j];
	for(int k=i;k<j;k++){
		dp[i][k]=calculate(i,k);
		dp[k+1][j]=calculate(k+1,j);
		if(freq[i][k]+freq[k+1][j]>((j-i+1)/2))
			dp[i][j]=(j-i+1);
		else
			dp[i][j]=max(dp[i][j],dp[i][k]+dp[k+1][j]);
		/*else
			dp[i][j]=max(dp[i][j],freq[i][k]+freq[k+1][j]);*/
	}
	return dp[i][j];
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		char s[201];
		scanf("%s",s);
		memset(dp,-1,sizeof(dp[0][0])*201*201);
		for(int i=0;i<n;i++){
			freq[i][i]=s[i]-'0';
			dp[i][i]=freq[i][i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				freq[i][j]=freq[i][j-1]+(s[j]-'0');
			}
		}
		cout<<calculate(0,n-1)<<endl;
		/*for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}*/
	}
	return 0;
}
