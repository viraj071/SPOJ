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
	long long n,m;
	scanf("%lld%lld",&n,&m);
	long long a[n];
	for(long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	long long maxi=0;
	long long temp=a[0];
	long long start=0;
	long long i;
	for(i=1;i<=n;i++){
		while(temp>m&&start<i-1){
			temp-=a[start];
			start++;
		}
		maxi=max(maxi,temp);
		temp+=a[i];
	}
	printf("%lld\n",maxi);
	return 0;
}
