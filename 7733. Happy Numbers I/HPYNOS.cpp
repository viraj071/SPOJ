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
	bool s[1000];
	memset(s,false,sizeof(s));
	long long int num=0;
	cin>>num;
	long long int temp=0;
	int count=0;
	while(true){
		if(temp==1){
			cout<<count<<endl;
			break;
		}
		count++;
		temp=0;
		while(num>0){
			temp+=pow(num%10,2);
			num/=10;
		}
		if(s[temp]==true)
		{
			cout<<"-1"<<endl;
			break;
		}
		else
		{
			s[temp]=true;
			num=temp;
		}
		
}
return 0;
}
