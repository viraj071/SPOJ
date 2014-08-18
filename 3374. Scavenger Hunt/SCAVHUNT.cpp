#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <list>
#include <set>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	for(int z=1;z<=t;z++){
		int m;
		scanf("%d",&m);
		map<string,string> matrix;
		map<string,bool> source;
		map<string,bool> destination;
		set<string> all;
		for(int i=0;i<m-1;i++){
			string s1,s2;
			cin>>s1>>s2;
			all.insert(s1);
			all.insert(s2);
			matrix[s1]=s2;
			source[s1]=true;
			destination[s2]=true;
		}
		string start;
		set<string>::iterator i;
		for(i=all.begin();i!=all.end();i++){
			if(source[*i]==true&&destination[*i]==false){
				start=*i;
				break;
			}
		}
		printf("Scenario #%d:\n",z);
		cout<<start<<endl;
		while(m>=1){
			cout<<matrix[start]<<endl;
			start=matrix[start];
			m--;
		}
	}
	return 0;
}
