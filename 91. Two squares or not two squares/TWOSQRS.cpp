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
long long n;
scanf("%d",&t);
while(t--){
	scanf("%lld",&n);
	bool good = true;
	for (long long i=2; i*i<n; i++){
		int ct=0;
		while(n%i==0){
		ct++;
		n/=i;
		}
		if(i%4==3&&ct%2==1){
			good=false;
			break;
		}
	}
		if(n%4==3)good=false;
		if(good) printf("Yes\n");
		else printf("No\n");
}
}
