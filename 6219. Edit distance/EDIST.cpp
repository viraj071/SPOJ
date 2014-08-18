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
int dp[2001][2001];

int editdistance(string a,string b){
	int topmore,left,bottommore;
	for(int i=0;i<=a.length();i++){
		for(int j=0;j<=b.length();j++){
			if(i==0){
				dp[i][j]=j;
				continue;
			}
			if(j==0){
				dp[i][j]=i;
				continue;
			}
		topmore=dp[i-1][j]+1;
		bottommore=dp[i][j-1]+1;
		left=dp[i-1][j-1];
		if(a[i-1]!=b[j-1]){
			left+=1;
		}
		dp[i][j]=min(left,min(topmore,bottommore));
	}
}
	return dp[a.length()][b.length()];
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string a,b;
		cin>>a>>b;
		printf("%d\n",editdistance(a,b));
	}
	return 0;
}
