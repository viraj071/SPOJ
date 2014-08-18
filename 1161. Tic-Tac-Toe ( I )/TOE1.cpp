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

string g[3];

bool checkrows(char winner){
	for(int i=0;i<3;i++){
		if(g[i][0]==winner&&g[i][1]==winner&&g[i][2]==winner){
			return true;
		}
	}
	return false;
}
bool checkcols(char winner){
	for(int i=0;i<3;i++){
		if(g[0][i]==winner&&g[1][i]==winner&&g[2][i]==winner){
			return true;
		}
	}
	return false;
}
bool checkdiagnols(char winner){
		if(g[0][0]==winner&&g[1][1]==winner&&g[2][2]==winner){
			return true;
		}
		if(g[0][2]==winner&&g[1][1]==winner&&g[2][0]==winner){
			return true;
		}
		return false;
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		bool possible=true;
		for(int i=0;i<3;i++){
			cin>>g[i];
		}
		int xcount=0,ocount=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(g[i][j]=='X'){
					xcount++;
					continue;
				}
				if(g[i][j]=='O'){
					ocount++;
				}
			}
		}
		if(ocount>xcount){
			possible=false;
		}
		if((xcount-ocount)>1){
			possible=false;
		}
		//cout<<xcount<<" "<<ocount<<endl;
		bool winnerx=(checkrows('X')||checkcols('X')||checkdiagnols('X'));
		if(winnerx){
			if((xcount-ocount)!=1){
				possible=false;
			}
		}
		bool winnero=(checkrows('O')||checkcols('O')||checkdiagnols('O'));
		if(winnero){
			if((xcount-ocount)!=0){
				possible=false;
			}
		}
		if(winnerx==true&&winnero==true){
			possible=false;
		}
		if(possible){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
		if(n!=0){
			printf("\n");
		}
	}
	return 0;
}
