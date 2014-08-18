#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <list>

#define MAX 35000

using namespace std;

int lucky[MAX];
bool islucky[MAX];
int ind=1;

void luckycheck(){
	memset(islucky,true,sizeof(islucky));
	for(int i=2;i<MAX;i++){
		if(islucky[i]){
			lucky[ind]=i;
			ind++;
			for(int j=i+1,count=0;j<MAX;j++){
				if(islucky[j]==true){
					count++;
				}
				if(count==i){
					islucky[j]=false;
					count=0;
				}
			}
		}
	}
}


int main(){
	luckycheck();
	while(true){
		int n;
		scanf("%d",&n);
		if(n==0)break;
		printf("%d\n",lucky[n]);
	}
	return 0;
}
