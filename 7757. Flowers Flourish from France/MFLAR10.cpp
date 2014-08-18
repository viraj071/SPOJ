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
	while(true){
		string s;
		bool ans=true;
		getline(cin,s);
		if(s[0]=='*')
			break;
		int sppos=-1;
		char prevchar=tolower(s[0]);
		for(int i=1;i<s.length();i++){
			if(s[i]==' '){
				sppos=i;
			}
			if(i==(sppos+1)){
				if(prevchar!=tolower(s[i])){
					//cout<<prevchar<<" "<<i<<""<<sppos<<" ";
					ans=false;
					break;
				}
			}
		}
		if (ans)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}
