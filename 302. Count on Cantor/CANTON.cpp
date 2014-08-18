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
	while(t--){
		long n;
		scanf("%ld",&n);
		long group=1,count=0;
		for(long i=1;i<=n;i++){
			count++;
			if(i==n)break;
			if(count==group){
				group++;
				count=0;
			}
		}
		if((group)%2==0){
			cout<<"TERM "<<n<<" IS "<<count<<"/"<<group+1-count<<endl;
		}
		else{
			cout<<"TERM "<<n<<" IS "<<group+1-count<<"/"<<count<<endl;
		}
	}
	return 0;
}
