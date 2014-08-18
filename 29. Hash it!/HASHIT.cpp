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
map<int,string> m;

int c=0;

void add(string s){
	long hash=0;
	for(int i=1;i<=(int)s.length();i++){
		hash+=(int)s[i-1]*i;
	}
	hash*=19;
	int hashvalue=hash%101;
	int temp=hashvalue;
	int j=1;
	bool entry=true;
	while(entry){
		if(m.find(hashvalue)!=m.end()){
			if(m[hashvalue]=="empty"){
				m[hashvalue]=s;
				c++;
				entry=false;
			}
			else{
			hashvalue=(temp+j*j+23*j)%101;
			j++;
			}
			if(j==21)break;
		}
		else{
			m[hashvalue]=s;
			c++;
			entry=false;
		}
	}
}

void del(string s){
	map<int,string>::iterator i;
	for(i=m.begin();i!=m.end();i++){
		if((i->second)==s){
			i->second="empty";
			break;
		}
	}
	c--;
}

int main(){
	int t=0;
	scanf("%d",&t);
	while(t--){
		c=0;
		m.clear();
		int n;
		scanf("%d",&n);
		vector<string> present;
		while(n--){
			string x;
			cin>>x;
			if(x.substr(0,3)=="ADD"){
				if(find(present.begin(),present.end(),x.substr(4,x.length()-4))==present.end()){
					add(x.substr(4,x.length()-4));
					present.push_back(x.substr(4,x.length()-4));
				}
			}
			else{
				if(find(present.begin(),present.end(),x.substr(4,x.length()-4))!=present.end()){
					del(x.substr(4,x.length()-4));					
					present.erase(remove(present.begin(), present.end(), x.substr(4,x.length()-4)), present.end());
				}
			}
		}
		cout<<c<<endl;
		map<int,string>::iterator i;
		for(i=m.begin();i!=m.end();i++){
			if(i->second!="empty"){
				printf("%d:",i->first);
				cout<<i->second<<endl;
			}
		}
	}
	return 0;
}
