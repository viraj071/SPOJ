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
	map<string,int> m;
	m["063"]=0;
	m["010"]=1;
	m["093"]=2;
	m["079"]=3;
	m["106"]=4;
	m["103"]=5;
	m["119"]=6;
	m["011"]=7;
	m["127"]=8;
	m["107"]=9;
	string temp;
	while(true){
		cin>>temp;
		if(temp=="BYE")break;
		int pos=temp.find('+');
		string a=temp.substr(0,pos);
		string b=temp.substr(pos+1,temp.length()-pos-2);
		//cout<<a<<" "<<b;
		int i=0;
		pos=a.length()-3;
		int value1=0,value2=0;
		while(pos>=0){
			value1+=m[a.substr(pos,3)]*pow(10,i);
			//cout<<value1<<endl;
			i++;
			pos-=3;
		}
		pos=b.length()-3;
		i=0;
		while(pos>=0){
			value2+=m[b.substr(pos,3)]*pow(10,i);
			i++;
			pos-=3;
		}
		//cout<<value1<<" "<<value2;
		int ans=value1+value2;
		string finalans="";
		while(ans>0){
			int digit=ans%10;
			map<string,int>::iterator i;
			for(i=m.begin();i!=m.end();i++){
				if(i->second==digit){
					finalans=(i->first)+finalans;
					break;
				}
			}
			ans=ans/10;
		}
		cout<<temp+finalans<<endl;
	}
	return 0;
}
