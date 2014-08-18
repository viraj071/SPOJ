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
	int n;
	while(true){
		bool possible=true;
		scanf("%d",&n);
		if(n==0)break;
		int route[n];
		for(int i=0;i<n;i++){
			scanf("%d",&route[i]);
		}
		sort(route,route+n);
		int prev=0;
		for(int i=0;i<n;i++){
			if(route[i]-prev>200){
				possible=false;
				break;
			}
			prev=route[i];
		}
		if(1422-route[n-1]>100){
			possible=false;
		}
		if(possible)
			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
	return 0;
}
