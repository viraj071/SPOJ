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

int val[1000];
int dp[1000][1000];

long count(int i,int j){
	if(i==j)return val[j];
	if(i+1==j)return max(val[i],val[j]);
	if(dp[i][j]!=-1)return dp[i][j];
	return dp[i][j]=max(val[i]+(val[i+1]>=val[j]?count(i+2,j):count(i+1,j-1)),val[j]+(val[i]>=val[j-1]?count(i+1,j-1):count(i,j-2)));
}

int main(){
	int c=1;
	while(true){
		int n;
		scanf("%d",&n);
		long total=0;
		if(n==0)break;		
		for(int i=0;i<n;i++){
			scanf("%d",&val[i]);
			total+=val[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				dp[i][j]=-1;
			}
		}
		long ans=count(0,n-1);
		printf("In game %d, the greedy strategy might lose by as many as %ld points.\n",c,ans+ans-total);
		c++;
	}
	return 0;
}
