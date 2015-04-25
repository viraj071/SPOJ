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

string s;
int c;
int maxdepth;
int maxdepthval;
int mincount;

void cut(int &i,int level){
	if(i>=c){
		return;
	}
	if(s[i]=='0'){
		if(level>maxdepth){
			maxdepth=level;
			maxdepthval=mincount;
		}
		i++;
		return ;
	}
	i++;
	mincount++;
	cut(i,level+1);
	cut(i,level+1);
	return ;
}

int main(){
	int t=10;
	for(int i=1;i<=t;i++){
		maxdepth=0;
		maxdepthval=0;
		mincount=0;
		scanf("%d",&c);
		cin>>s;
		int j=0;	
		cut(j,0);
		printf("%d\n",maxdepthval);
	}
	return 0;
}
