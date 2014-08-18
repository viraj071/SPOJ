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
	int t;
	while(true){
		long long int ans=5;
		long long int prev=4;
		scanf("%d",&t);
		if(t==0)break;
		for(int i=1;i<t;i++){
			prev+=3;
			ans=ans+prev;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
