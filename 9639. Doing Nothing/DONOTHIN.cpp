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
	long long n,m,total;
	while(true){
		total=0;
		scanf("%lld%lld",&n,&m);
		if(n==-1&&m==-1)break;
		while(n--){
			//cout<<n<<endl;
			long long  temp;
			scanf("%lld",&temp);
			temp=temp*m*(n+1);
			total+=temp;
		}
		printf("%lld\n",total);
	}
	return 0;
}
