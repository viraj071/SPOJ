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
	string x;
	while(cin>>x){
		int from,to;
		scanf("%d%d",&from,&to);
		int base10value=0;
		string ans="";
		for(int i=x.length()-1;i>=0;i--){
			if(x[i]==' ')break;
			if((int)(x[i]-'0')>9){
				base10value+=((x[i]-'0')-7)*pow(from,x.length()-1-i);
				continue;
			}
			base10value+=(x[i]-'0')*pow(from,x.length()-1-i);
			//cout<<base10value<<endl;
		}
		string temp;
		stringstream ss;
		ss<<base10value;
		temp=ss.str();
		if(to==10){
			for(int i=temp.length();i<7;i++){
				temp=" "+temp;
			}
			cout<<temp<<endl;
			continue;
		}
		int count=0;
		while(base10value>=1){
			int tem=(base10value%to);
			base10value=base10value/to;
			count++;
			if(tem>9){
				ans=char(tem+55)+ans;
				continue;
			}
			stringstream ss1;
			ss1<<tem;
			ans=ss1.str()+ans;
		}
		if(ans.length()>7)ans="ERROR";
		for(int i=ans.length();i<7;i++){
				ans=" "+ans;
			}
			cout<<ans<<endl;
	}
	return 0;
}
