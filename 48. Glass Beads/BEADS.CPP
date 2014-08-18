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
	int t=0;
	scanf("%d",&t);
	while(t--){
		string temp;
		cin>>temp;
		int minindex=0;
		string minstring=temp;
		for(int i=1;i<=temp.length();i++){
			string current=temp.substr(i,temp.length()-i)+temp.substr(0,i);
			//cout<<current<<endl;
			if(string(current)<string(minstring)){
				minindex=i;
				minstring=current;
			}
		}
		printf("%d\n",minindex+1);
	}
	return 0;
}
