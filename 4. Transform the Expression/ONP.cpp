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
int t=0;
cin>>t;
while(t--){
	stack<char> mystack;
	string s="";
	cin>>s;
	for(int i=0;i<s.length();i++){
	if(s[i]>='a'&&s[i]<='z'){
	cout<<s[i];
	continue;
	}
	else if(s[i]==')'){
		char t=mystack.top();
		cout<<t;
		mystack.pop();
		continue;
	}
	else if (s[i]=='(')continue;
	else mystack.push(s[i]);
	}
	cout<<endl;
}
return 0;
}
