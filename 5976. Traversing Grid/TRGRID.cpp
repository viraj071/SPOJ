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
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		if(m>=n&&n%2==0){
			printf("L\n");
			continue;
		}
		if(m>=n&&n%2!=0){
			printf("R\n");
			continue;
		}
		if(n>m&&m%2!=0){
			printf("D\n");
			continue;
		}
		if(n>m&&m%2==0){
			printf("U\n");
			continue;
		}
	}
	return 0;
}
