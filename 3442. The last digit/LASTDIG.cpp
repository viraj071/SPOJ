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
	cin>>t;
	while(t--)
	{
		long long int a;
		long long int b=0;
		cin>>a>>b;
		if(a==0&&b==0){
			cout<<"1"<<endl;
			continue;
		}
		if(b==0){
			cout<<"1"<<endl;
			continue;
		}
		if(a==0){
			cout<<"0"<<endl;
			continue;
		}
		if(b%4==0){
			b=4;
		}
		else
		{
			b=b%4;
		}
		long long int ans=pow(a,b);
		ans=ans%10;
		cout<<ans<<endl;
	}
	return 0;
}
