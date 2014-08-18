#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <list>
#include <queue>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int total=0;
		string ans="";
		if(s.find('0')!=string::npos){
			//cout<<"hello"<<endl;
			ans="0"+ans;
			s.erase(s.begin()+s.find('0'));
		}
		else if(s.find('5')!=string::npos){
			ans="5"+ans;
			s.erase(s.begin()+s.find('5'));
			total+=5;
		}
		else{
			printf("impossible\n");
			continue;
		}
		//cout<<s<<endl;
		sort(s.begin(),s.end());
		queue<char> queue0;
		queue<char> queue1;
		queue<char> queue2;
		for(int i=0;i<(int)s.length();i++){
			if((s[i]-'0')%3==0)queue0.push(s[i]);
			else if((s[i]-'0')%3==1)queue1.push(s[i]);
			else queue2.push(s[i]);
			total+=s[i]-'0';
		}
		//cout<<total<<endl;
		if(total%3==1){
			if(!(queue1.empty())){
				queue1.pop();
			}
			else{
				if(!queue2.empty()){
					queue2.pop();
				}
				else{
					printf("impossible\n");
					continue;
				}
				if(!queue2.empty()){
					queue2.pop();
				}
				else{
					printf("impossible\n");
					continue;
				}
			}
		}
		//cout<<"hello"<<endl;
		else if(total%3==2){
			if(!queue2.empty()){
				queue2.pop();
			}
			else{
				if(!queue1.empty()){
					queue1.pop();
				}
				else{
					printf("impossible\n");
					continue;
				}
				if(!queue1.empty()){
					queue1.pop();
				}
				else{
					printf("impossible\n");
					continue;
				}
			}
		}
		string temp="";
		while(!queue0.empty()){
			temp+=queue0.front();
			queue0.pop();
		}
		while(!queue1.empty()){
			temp+=queue1.front();
			queue1.pop();
		}
		while(!queue2.empty()){
			temp+=queue2.front();
			queue2.pop();
		}
		sort(temp.rbegin(),temp.rend());
		ans=temp+ans;
		if(ans[0]=='0')cout<<"0"<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}
