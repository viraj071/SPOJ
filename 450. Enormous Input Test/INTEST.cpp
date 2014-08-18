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
	long int n,k,t;
	long count=0;
	scanf("%ld%ld",&n,&k);
	while(n--){
		scanf("%ld",&t);
		if(t%k==0)count++;
	}
	printf("%ld\n",count); 
	return 0;	
}
