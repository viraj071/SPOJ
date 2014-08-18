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
	int n;
	while(true){
		scanf("%d",&n);
		if(n==0)break;
		int count=0;
		while(n>1){
			n=n/2;
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
