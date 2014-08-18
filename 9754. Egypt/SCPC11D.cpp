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
	while(true){
		vector<int> x(3,0);
		scanf("%d%d%d",&x[0],&x[1],&x[2]);
		if(x[0]==0&&x[1]==0&&x[2]==0)break;
		bool possible=true;
		if(x[0]+x[1]<x[2])possible=false;
		if(x[1]+x[2]<x[0])possible=false;
		if(x[0]+x[2]<x[1])possible=false;
		sort(x.begin(),x.end());
		if(x[2]!=sqrt(x[1]*x[1]+x[0]*x[0]))
		{
			possible=false;
		}
		if(possible){
			printf("right\n");
		}
		else{
			printf("wrong\n");
		}
	}
	return 0;
}
