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
		int e,f;
		scanf("%d%d",&e,&f);
		int W=f-e;
		int n;
		scanf("%d",&n);
		int w[n],v[n];
		for(int i=0;i<n;i++){
			scanf("%d%d",&v[i],&w[i]);
		}
		long z[W+1];
		memset(z,500*50000,sizeof(z));
		z[0]=0;
		for(int i=1;i<=W;i++){
			for(int j=0;j<n;j++){
				if(w[j]<=i){
					z[i]=min(z[i],z[i-w[j]]+v[j]);
				}
			}
			/*if(z[i]>=500*50000)
				z[i]=0;*/
		}
		if(z[W]>=500*50000)
		{
			printf("This is impossible.\n");
		}
		else{
			printf("The minimum amount of money in the piggy-bank is %ld.\n",z[W]);
		}
	}
	return 0;
}
