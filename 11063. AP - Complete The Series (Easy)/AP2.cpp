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
	while(t--){
		long long t1,t2,sum;
		cin>>t1>>t2>>sum;
		int num=sum*2/(t1+t2);
		cout<<num<<endl;
		long long diff=t2-t1;
		long long gp=diff/(num-6+1);
		long long start=t1-2*gp;
		for(int i=0;i<num;i++){
			cout<<start<<" ";
			start+=gp;
		}
	}
	return 0;
}
