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
	int n,k;
	scanf("%d%d",&n,&k);
	long int h[n];
	memset(h,0,sizeof(h));
	for(int i=0;i<n;i++){
		scanf("%ld",&h[i]);
	}
	if (k==1)
	{
		printf("0\n");
		continue;
	}
	sort(h,h+n);
	long int mini=h[k-1]-h[0];
	for(int i=1;i<n-k+1;i++){
		mini=min(mini,(h[i+k-1]-h[i]));
	}
	printf("%ld\n",mini);
}	
}
