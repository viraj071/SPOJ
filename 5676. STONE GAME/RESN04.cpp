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
		vector<int> x;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			int temp=0;
			scanf("%d",&temp);
			x.push_back(temp);
		}
		int count=0;
		for(int i=1;i<=n;i++){
			count+=x[i-1]/i;
		}
		if(count%2==0){
			printf("BOB\n");
		}
		else{
			printf("ALICE\n");
		}
	}
	return 0;
}
