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

/*int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}*/

int main(){
		int x;
		scanf("%d",&x);
		int v[x];
		for(int i=0;i<x;i++){
			scanf("%d",&v[i]);
		}
		int value=(v[1]-v[0]);
		for(int i=1;i+1<x;i++){
			value=__gcd(value,v[i+1]-v[i]);
		}
		int ans=0;
		for(int i=0;i+1<x;i++){
			ans+=(v[i+1]-v[i])/value-1;
		}
		printf("%d\n",ans);
	return 0;
}
