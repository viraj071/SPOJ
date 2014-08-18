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

long long int gcd(long long int a,long long int b){
	if(b==0)return a;
	return gcd(b,a%b);
}

long long int lcm(long long int a,long long int b){
	return b*a/gcd(a,b);
}

int main(){
	string s;
	while(true){
		cin>>s;
		if(s=="*")break;
			long long int a=1,b=1;
		for(long long int i=0;i<s.length();i++){
			if(s[i]=='Y'){
				b=i+1;
				//cout<<b<<endl;
				a=lcm(a,b);
				//cout<<a<<endl;
			}
		}
		bool possible=true; 
		for(long long int i=0;i<s.length();i++){
			if(s[i]=='N'&&(a%(i+1)==0)){
				possible=false;
				break;
			}
		}
		if(possible){
			printf("%lld\n",a);
		}
		else
			printf("-1\n");
		}
	return 0;
}
