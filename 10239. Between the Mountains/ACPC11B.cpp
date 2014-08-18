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
	int t;
	scanf("%d",&t);
	while(t--){
		int m;
		scanf("%d",&m);
		int temp=m;
		long a[m];
		while(m--){
			scanf("%ld",&a[m]);
		}
		sort(a,a+temp);
		int n;
		scanf("%d",&n);
		int temp1=n;
		long b[n];
		while(n--){
			scanf("%ld",&b[n]);
		}
		sort(b,b+temp1);
		long int minabs=1000000;
		//cout<<minabs<<endl;
		for(int i=0;i<temp;i++){
			for(int j=0;j<temp1;j++){
				minabs=min(minabs,abs(a[i]-b[j]));
				//cout<<minabs<<endl;
			}
		}
		printf("%ld\n",minabs);
	}
	return 0;
}
