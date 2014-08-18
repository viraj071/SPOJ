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
	int t=0;
	map<string,int> m;
	m["3/4"]=0;
	m["1/2"]=0;
	m["1/4"]=0;
	int count=1;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		m[s]++;
	}
	count+=m["3/4"];
	m["1/4"]=max(0,m["1/4"]-m["3/4"]);
	count+=m["1/2"]/2;
	if(m["1/2"]%2!=0){
		count++;
		m["1/4"]=max(0,m["1/4"]-2);
	}
	count+=m["1/4"]/4;
	if(m["1/4"]%4!=0){
		count++;
	}
	cout<<count<<endl;
return 0;
}
