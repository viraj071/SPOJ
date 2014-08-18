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

 long long int C (long long int n, long long int r) {
         long long int res = 1,i;
         if(r > n/2)
                 r = n-r;
         for(i = 0; i < r; i++) {
                 res *=  n;
                 res /= i+1;
                 n--;
          }
          return res;
  }


int main(){
	int t=0;
	scanf("%d",&t);
	while(t--){
	long long int n,k;
	scanf("%lld%lld",&n,&k);
	printf("%lld\n",C(n-1,n-k));	
	}
	return 0;
}
