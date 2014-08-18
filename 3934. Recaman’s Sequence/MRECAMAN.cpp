#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

map<int,int> m;
int ans[500000]={0};

void calc(){
	m[0]=0;
	for(long i=1;i<=500000;i++){
		if(((ans[i-1]-i)>0)&&(m.find(ans[i-1]-i)==m.end())){
			ans[i]=ans[i-1]-i;
			m[ans[i]]=1;
		}
		else
		{
			ans[i]=ans[i-1]+i;
			m[ans[i]]=1;
		}
	}
}

int main(){
	long k;
	calc();
	while(true){
		scanf("%ld",&k);
		if(k==-1)break;
		printf("%d\n",ans[k]);
	}
	return 0;
}
