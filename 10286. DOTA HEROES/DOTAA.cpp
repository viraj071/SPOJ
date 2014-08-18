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
	int t,n,m,d;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n,&m,&d);
		int health[n];
		int temp=0;
		while(n--){
			scanf("%d",&health[n]);
			temp+=(health[n]-1)/d;
		}
		/*
		while(m--){
		sort(health,health+n);
		if(d>=health[n-1]){
			acc=false;
			break;
		}
		health[n-1]-=d;
		}*/
		//cout<<temp;
		if(temp>=m)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
