#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

bool prime[32000];
	void primes(){
		memset(prime,true,sizeof(prime));
		prime[0]=false;
		prime[1]=false;
		for(int i=2;i<sqrt(32000);i++){
			if(prime[i]){
				for(int j=i*i;j<32000;j+=i){
					prime[j]=false;
				}
			}
		}
		/*for(int i=2;i<(32000);i++){
			if(prime[i])cout<<i<<endl;
		}*/
	}
int main(){
	int t;
	primes();
	scanf("%d",&t);
	while(t--){
		long m,n;
		bool ans[1000001];
		memset(ans,true,sizeof(ans));
		scanf("%ld%ld",&m,&n);
		if(m<2){
			ans[0]=false;
		}
		for(int i=2;i<=sqrt(n);i++){
			if(prime[i]){
				long start=(m/i)*i;
				if(start<m){
					start+=i;
				}
				//cout<<start<<endl;
				if(start==i){
					start+=i;
				}
				for(long k=start;k<=n;k+=i)
				{
					ans[k-m]=false;
				}
			}
		}
		for(long i=0;i<=n-m;i++){
			if(ans[i])
				printf("%ld\n",i+m);
		}
		printf("\n");
	}
	return 0;
}
