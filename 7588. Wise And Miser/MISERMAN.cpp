#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+2][m+2];
	memset(a,11,sizeof(a));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int k;
			scanf("%d",&k);
			if(i==1)
			{
				a[i][j]=k;
				continue;
			}
			a[i][j]=min(min((k+a[i-1][j-1]),(k+a[i-1][j])),(k+a[i-1][j+1]));
		}
	}
	/*for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d ",a[i][j]);
		}
		cout<<endl;
	}*/
	
	int minifare=100000;
	for(int i=0;i<m;i++){
		if(a[n][i]<minifare)minifare=a[n][i];
	}
	printf("%d\n",minifare);
	return 0;
}
