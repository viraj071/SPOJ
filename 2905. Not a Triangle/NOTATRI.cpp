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
		int t;
		scanf("%d",&t);
		if(t==0)break;
		vector<long> values(t);
		for(int i=0;i<t;i++){
			scanf("%ld",&values[i]);
		}
		sort(values.begin(),values.end());
		long count=0;
		for(int i=0;i<t;i++){
			for(int j=i+1;j<t;j++){
				count+=values.end()-lower_bound(values.begin(),values.end(),values[i]+values[j]+1);
			}
		}
		printf("%ld\n",count);
	}
	return 0;
}
