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
		string s[5];
		vector<int> count;
		string f="FBI";
		for(int i=0;i<5;i++){
			cin>>s[i];
			if(s[i].find(f)!=string::npos)
				count.push_back(i+1);
		}
		if(count.size()==0){
			printf("HE GOT AWAY!\n");
		}
		else{
			for(int i=0;i<count.size();i++){
				printf("%d",count[i]);
				if(i!=(count.size()-1)){
					printf(" ");
				}
			}
		}
		printf("\n");
	return 0;
}
