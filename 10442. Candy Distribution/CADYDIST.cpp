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
		unsigned long long n;
		scanf("%llu",&n);
		if(n==0)
			break;
		unsigned long long c[n],p[n];
		for(unsigned long i=0;i<n;i++){
			scanf("%llu",&c[i]);
		}
		for(unsigned long i=0;i<n;i++){
			scanf("%llu",&p[i]);
		}
		sort(c,c+n);
		sort(p,p+n);
		reverse(p,p+n);
		unsigned long long cost=0;
		for(unsigned long i=0;i<n;i++){
			cost+=c[i]*p[i];
		}
		printf("%llu\n",cost);
	}
	return 0;
}
