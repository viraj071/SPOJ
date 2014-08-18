#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <stack>

using namespace std;

int main(){
	string s;
	int count=1;
	while(true){
		int temp=0;
		cin>>s;
		stack<char> chars;
		if(s[0]=='-')break;
		for(int i=0;i<s.length();i++){
			if(chars.size()!=0&&s[i]=='}'&&chars.top()=='{')chars.pop();
			else chars.push(s[i]);
		}
		if (chars.size()==0){
			printf("%d. 0\n",count);
			count++;
			continue;
		}
		int temp1=chars.size();
		while(chars.size()!=0&&chars.top()=='{'){
			temp++;
			chars.pop();
		}
		if((temp%2)==0){
			printf("%d. %d\n",count,(temp1)/2);
			count++;
			continue;
		}
		if((temp%2)!=0){
			printf("%d. %d\n",count,(temp1-2)/2+2);
			count++;
			continue;
		}
	}
	return 0;
}
