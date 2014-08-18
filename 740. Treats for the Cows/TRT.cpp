#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;
int n=0;
int dp[2001][2001];
int a[2001];


long long calc(int i,int j){
	long long inc=i+(n-1)-j+1;
	if(i==j)return inc*a[j];
	if(dp[i][j]!=-1)return dp[i][j];
	return dp[i][j]=max((inc*a[i]+calc(i+1,j)),(inc*a[j]+calc(i,j-1)));
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			dp[i][j]=-1;
		}
	}
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%lld\n",calc(0,n-1));
	return 0;
}
