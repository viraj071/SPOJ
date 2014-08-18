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
	int t=0;
	scanf("%d",&t);
	int count=1;
	while(t--){
		string url[10];
		int rank[10];
		int maxi=0;
		for(int i=0;i<10;i++){
			cin>>url[i]>>rank[i];
			maxi=max(maxi,rank[i]);
		}
		printf("Case #%d:\n",count);
		for(int i=0;i<10;i++){
			if(rank[i]==maxi){
				cout<<url[i]<<endl;
			}
		}
		count++;
	}
	return 0;
}
