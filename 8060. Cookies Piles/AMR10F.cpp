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
	scanf("%d",&t);
	while(t--){
		int n,a,d;
		scanf("%d%d%d",&n,&a,&d);
		int count=a;
		int temp=a;
		for(int i=2;i<=n;i++){
			temp+=d;
			count+=temp;
		}
		printf("%d\n",count);
	}
	return 0;
}
