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
	int t;
	scanf("%d",&t);
	while(t--){
		char x[50];
		scanf("%s",x);
		bool possible=true;
		for(int i=0;i<strlen(x);i++){
			if(x[i]=='D'){
				possible=false;
				break;
			}
		}
		if(possible){
			printf("Possible\n");
		}
		else{
			printf("You shall not pass!\n");
		}
	}
	return 0;
}
