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
	long long int t=0;
	while(true){
		cin>>t;
		if(t==1){cout<<"Y"<<endl;continue;}
		if(t==-1)break;
		t-=1;
		for(int i=1;;i++){
			t-=i*6;
			if(t==0){
				cout<<"Y"<<endl;
				break;
			}
			if(t<0){
				cout<<"N"<<endl;
				break;
			}
		}
	}
	return 0;
}
