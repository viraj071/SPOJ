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
	int n;
	scanf("%d",&n);
	map<long long,long long> val;
	unsigned long long ans=0;
	for(int i=0;i<n;i++){
		long x;
		long long greater,smaller;
		scanf("%ld",&x);
		for(long i=0;i<x;i++){
			long long temp;
			scanf("%lld",&temp);
			val[temp]++;
		}
		map<long long,long long>::iterator i;
		i=val.begin();
		while(true){
			if((i->second)>0){
				smaller=i->first;
				//cout<<greater<<endl;
				(i->second)--;
				break;
			}
			i++;
		}
		i=val.end();
		--i;
		while(true){
			if((i->second)>0){
				greater=i->first;
				//cout<<smaller<<endl;
				(i->second)--;
				break;
			}
			i--;
		}
		//cout<<greater<<" "<<smaller<<endl;
		ans+=greater-smaller;
	}
	printf("%llu\n",ans);
	return 0;
}
