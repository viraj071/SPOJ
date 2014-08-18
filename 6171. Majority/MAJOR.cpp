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
		int n;
		bool acc=false;
		scanf("%d",&n);
		int a[n];
		int temp=n;
		while(temp--){
			scanf("%d",&a[temp]);
		}
		sort(a,a+n);
		int count=1;
		int i;
		for(i=1;i<n;i++){
			if(a[i]!=a[i-1]){
				count=1;
				continue;
			}
			count++;
			if(count>n/2){
				acc=true;
				break;
			}
		}
		if(acc)
			printf("YES %d\n",a[i]);
		else
			printf("NO\n");
	}
	return 0;
}
