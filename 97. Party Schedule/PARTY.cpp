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
	int b,np;
	while(true){
		scanf("%d%d",&b,&np);
		if(b==0&&np==0)break;
		int cost[np];
		int fun[np];
		for(int i=0;i<np;i++){
			scanf("%d%d",&cost[i],&fun[i]);
		}
		printf("\n");
		int finalfun[np+1][b+1];
		int finalcost[np+1][b+1];
				
		for(int i=0;i<=np;i++){
			for(int w=0;w<=b;w++){
				if(i==0||w==0){
					finalcost[i][w]=0;
					finalfun[i][w]=0;
					continue;
				}
				finalcost[i][w]=finalcost[i-1][w];
				finalfun[i][w]=finalfun[i-1][w];
				if(cost[i-1]<=w){
					if(finalfun[i][w]==(fun[i-1]+finalfun[i-1][w-cost[i-1]])){
							finalcost[i][w]=min(finalcost[i][w],cost[i-1]+finalcost[i-1][w-cost[i-1]]);
					}
					if(finalfun[i][w]<(fun[i-1]+finalfun[i-1][w-cost[i-1]])){
						finalfun[i][w]=fun[i-1]+finalfun[i-1][w-cost[i-1]];
						finalcost[i][w]=cost[i-1]+finalcost[i-1][w-cost[i-1]];
					}
				}
			}
		}
		printf("%d %d\n",finalcost[np][b],finalfun[np][b]);
	}
	return 0;
}
