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

long totient(long n){
	long result=n;
	for(long i=2;i*i<=n;i++){
		if(n%i==0)
			result-=result/i;
		while(n%i==0){
			n/=i;
		}
	}
	if(n>1) result-=result/n;
	return result;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long count=0;
		long n;
		scanf("%ld",&n);
		count=totient(n);
		printf("%ld\n",count);
	}
	return 0;
}
