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
	while(true){
		int n;
		scanf("%d",&n);
		if(n==0)break;
		int val[n];
		for(int i=0;i<n;i++){
			scanf("%d",&val[i]);
		}
		int ans=0;
		sort(val,val+n);
		for(int i=0;i<=n;i++){
			int eq=0,gt=0,ls=0;
			for(int j=0;j<n;j++){
				if(val[j]==i)eq++;
				else if(val[j]>i)gt++;
				else ls++;
			}
			if(gt<i){
				if(eq>=(i-gt)){
					ans=i;
					break;
				}
			}
			if(gt==i){
				ans=i;
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
