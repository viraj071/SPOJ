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
	int t=0;
	scanf("%d",&t);
	while(t--){
		unsigned long long height;
		scanf("%llu",&height);
		if(height==0){
			printf("0\n");
			continue;
		}/*
		if(height==1){
			printf("0\n");
			continue;
		}
		if(height==2){
			printf("1\n");
			continue;
		}*/
		unsigned long long int ans=0;
		height-=1;
		long long num=height/3;
		ans+=((num)*(num+1)/2)*3;
		ans+=(num+1)*(height%3);
		printf("%llu\n",ans);
	}
	return 0;
}
