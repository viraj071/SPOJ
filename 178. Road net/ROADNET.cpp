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

int main(){
	int t=0;
	scanf("%d",&t);
	while(t--){
		int n=0;
		scanf("%d",&n);
		int dis[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&dis[i][j]);
			}
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				bool neigh=true;
				for(int k=0;k<n;k++){
					if(k==i||k==j)continue;
					if(dis[i][k]+dis[k][j]==dis[i][j]){
						neigh=false;
						break;
					}
				}
				if(neigh==true){
					printf("%d %d\n",i+1,j+1);
				}
			}
		}
		if(t>0)printf("\n");
	}
	return 0;
}
