#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <list>


#ifndef INT_MAX 
#define INT_MAX 2147483647
#endif

using namespace std;

long n,ms[1000][1000];
bool mstset[1000];
long key[1000];
long long total=0;

int minkey(){
	int mini=INT_MAX,minindex;
	for(int v=0;v<n;v++){
		if(mstset[v]==false&&key[v]<mini){
			mini=key[v];
			minindex=v;
		}
	}
	return minindex;
}

void mst(){
	for(int i=0;i<n;i++){
		key[i]=INT_MAX;
	}
	key[0]=0;
	for(int count=0;count<n;count++){
		int u=minkey();
		//cout<<key[u]<<endl;
		total+=key[u];
		mstset[u]=true;
		for(int v=0;v<n;v++){
			if(ms[u][v]&&mstset[v]==false&&ms[u][v]<key[v]){
				key[v]=ms[u][v];
			}
		}
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		total=0;
		memset(ms,0,sizeof(ms[0][0])*1000*1000);
		memset(mstset,false,sizeof(mstset));
		int p;
		scanf("%d%ld",&p,&n);
		long m;
		scanf("%ld",&m);
		while(m--){
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			ms[a-1][b-1]=c;
			ms[b-1][a-1]=c;
		}
		mst();
		printf("%lld\n",total*p);
	}
	return 0;
}
