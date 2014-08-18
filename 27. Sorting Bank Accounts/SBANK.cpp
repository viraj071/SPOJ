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
	scanf("%d",&t);
	while(t--){
		long n;
		scanf("%ld\n",&n);
		vector<string> s;
		char temp[32];
		map<string, long> m;
		while(n>0){
			gets(temp);
			if(m.find(temp)!=m.end()){
				m[temp]++;
			}
			else{
				m[temp]=1;
			}
			n--;
		}
		printf("\n");
		for(map<string,long>::iterator i=m.begin();i!=m.end();i++){
			cout<<i->first<<" "<<i->second<<"\n";
		}
		printf("\n");
	}
	return 0;
}
