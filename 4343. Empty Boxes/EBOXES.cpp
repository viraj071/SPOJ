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
		int n,k,t,f;
		scanf("%d%d%d%d",&n,&k,&t,&f);
		printf("%d\n",(f-n)/(k-1)+f);
	}
	return 0;
}
