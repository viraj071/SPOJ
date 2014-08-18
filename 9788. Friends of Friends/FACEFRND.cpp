#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>

using namespace std;

int main(){
	set<int> se;
	int n;
	scanf("%d",&n);
	int temp=n;
	int fr[temp];
	while(n--){
		int x;
		int s;
		cin>>s;
		fr[n]=s;
		scanf("%d",&x);
		while(x--){
			cin>>s;
			se.insert(s);
		}
	}
	for(int i=0;i<temp;i++){
		se.erase(fr[i]);
	}
	printf("%lld\n",se.size());
	return 0;
}
