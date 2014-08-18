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
	int t=0;
	scanf("%d",&t);
	while(t--){
		long long a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		long long temp=a*a-2*b;
		printf("%lld\n",temp);
	}
	return 0;
}
