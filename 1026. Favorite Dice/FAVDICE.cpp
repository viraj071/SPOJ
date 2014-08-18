#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

#define s(t) scanf("%d",&t);

using namespace std;

int main(){
	int t;
	s(t);
	while(t--){
		int n;
		s(n);
		double ans=0;
		for(int i=1;i<=n;i++){
			ans+=static_cast<double>(n)/i;
		}
		printf("%.2lf\n",ans);
	}
	return 0;
}
