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
	while(true){
		long n,d,w;
		scanf("%ld%ld",&n,&d);
		if(n==0&&d==0)break;
		w=0;
		long i=1;
		while(i<=n){
			w=(w+d)%i;
			i++;
		}
		printf("%ld %ld %ld\n",n,d,w+1);
	}
	return 0;
}
