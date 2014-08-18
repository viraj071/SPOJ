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
	long i,w;
	scanf("%ld%ld",&i,&w);
	while(i!=-1||w!=-1){
		if(max((double)1000/37,(double)i/w)-min((double)1000/37,(double)i/w)<=0.000001){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
		scanf("%ld%ld",&i,&w);
	}
	return 0;
}
