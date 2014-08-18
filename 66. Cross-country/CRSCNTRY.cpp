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

vector<int> a;
vector<int> tom;
int maxlcscount;
int L[2001][2001];

int lcs(){
	for(int i=0;i<=a.size();i++){
		for(int j=0;j<=tom.size();j++){
			if(i==0||j==0){
				L[i][j]=0;
			}
			else if(a[i-1]==tom[j-1]){
				L[i][j]=L[i-1][j-1]+1;
			}
			else{
				L[i][j]=max(L[i-1][j],L[i][j-1]);
			}
		}
	}
	return L[a.size()][tom.size()];
}

int main(){
	int d;
	scanf("%d",&d);
	while(d--){
		a.clear();
		tom.clear();
		maxlcscount=0;
		while(true){
			int temp;
			scanf("%d",&temp);
			if(temp==0)break;
			a.push_back(temp);
		}
		while(true){
			tom.clear();
			int temp;
			scanf("%d",&temp);
			if(temp==0)break;
			tom.push_back(temp);
			while(true){
				scanf("%d",&temp);
				if(temp==0)break;
				tom.push_back(temp);
			}
			maxlcscount=max(maxlcscount,lcs());
		}
		printf("%d\n",maxlcscount);
	}
	return 0;
}
